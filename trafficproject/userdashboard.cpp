#include "userdashboard.h"
#include "ui_userdashboard.h"
#include "paymentdialog.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QTimer>

UserDashboard::UserDashboard(int userId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserDashboard)
    , currentUserId(userId)
    , model(new QSqlQueryModel(this))
    , refreshTimer(new QTimer(this))
    , isRefreshing(false)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::database("TVMS");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Cannot connect to database.");
        return;
    }

    setupTable();
    refreshData();

    connect(refreshTimer, &QTimer::timeout, this, [this]{
        if (isRefreshing) return;
        isRefreshing = true;
        refreshData();
        isRefreshing = false;
    });
    refreshTimer->start(10000);

    connect(ui->searchButton, &QPushButton::clicked, this, &UserDashboard::on_searchButton_clicked);
    connect(ui->payButton,    &QPushButton::clicked, this, &UserDashboard::on_payButton_clicked);
}

UserDashboard::~UserDashboard()
{
    refreshTimer->stop();
    delete ui;
}

void UserDashboard::setupTable()
{
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->verticalHeader()->setDefaultSectionSize(64);

    ui->tableView->setStyleSheet(
        "QTableView {"
        "    background: white;"
        "    gridline-color: #e2e8f0;"
        "    selection-background-color: #fecaca;"
        "    selection-color: white;"
        "    font-size: 14px;"
        "    border: 1px solid #cbd5e1;"
        "    border-radius: 12px;"
        "}"
        "QTableView::item {"
        "    padding: 14px 10px;"
        "}"
        "QTableView::item:selected {"
        "    background: #dc2626;"
        "    color: white;"
        "    font-weight: bold;"
        "}"
        "QTableView {"
        "    alternate-background-color: #fdfdfd;"
        "}"
        "QHeaderView::section {"
        "    background-color: #f8fafc;"
        "    color: #1e293b;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "    padding: 12px 8px;"
        "    border: none;"
        "    border-bottom: 2px solid #cbd5e1;"
        "    text-align: center;"
        "}"
        );

    auto *header = ui->tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Interactive);
    header->setStretchLastSection(false);
    header->setDefaultAlignment(Qt::AlignCenter);
    header->setHighlightSections(false);
}

void UserDashboard::loadViolations()
{
    QSqlDatabase db = QSqlDatabase::database("TVMS");
    QSqlQuery q(db);
    q.prepare(R"(
        SELECT violation_id, plate, type, location, fine, status
        FROM Violations
        WHERE user_id = ?
        ORDER BY violation_id DESC
    )");
    q.addBindValue(currentUserId);

    if (!q.exec()) {
        qDebug() << "Load error:" << q.lastError().text();
        return;
    }

    model->setQuery(std::move(q));

    model->setHeaderData(1, Qt::Horizontal, "License Plate");
    model->setHeaderData(2, Qt::Horizontal, "Offence Type");
    model->setHeaderData(3, Qt::Horizontal, "Location");
    model->setHeaderData(4, Qt::Horizontal, "Fine ($)");
    model->setHeaderData(5, Qt::Horizontal, "Status");

    ui->tableView->hideColumn(0);


    ui->tableView->setColumnWidth(1, 150);
    ui->tableView->setColumnWidth(2, 190);
    ui->tableView->setColumnWidth(3, 200);
    ui->tableView->setColumnWidth(4, 110);
    ui->tableView->setColumnWidth(5, 130);


    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex idx = model->index(row, 5);
        QString status = idx.data().toString().trimmed();

        QFont bold; bold.setBold(true);

        if (status == "Pending") {
            model->setData(idx, "  PENDING  ", Qt::DisplayRole);
            model->setData(idx, QColor("#fef3c7"), Qt::BackgroundRole);
            model->setData(idx, QColor("#92400e"), Qt::ForegroundRole);
        }
        else if (status == "Paid") {
            model->setData(idx, "  PAID  ", Qt::DisplayRole);
            model->setData(idx, QColor("#d1fae5"), Qt::BackgroundRole);
            model->setData(idx, QColor("#065f46"), Qt::ForegroundRole);
        }
        else if (status == "Cancelled") {
            model->setData(idx, "  CANCELLED  ", Qt::DisplayRole);
            model->setData(idx, QColor("#e0e7ff"), Qt::BackgroundRole);
            model->setData(idx, QColor("#4338ca"), Qt::ForegroundRole);
        }
        model->setData(idx, bold, Qt::FontRole);
    }
}

void UserDashboard::refreshStats()
{
    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.exec(QString("SELECT COUNT(*) FROM Violations WHERE user_id = %1").arg(currentUserId));
    q.next(); ui->totalLabel->setText(q.value(0).toString());

    q.exec(QString("SELECT COALESCE(SUM(fine), 0) FROM Violations WHERE user_id = %1 AND status = 'Pending'").arg(currentUserId));
    q.next(); ui->pendingLabel->setText("$" + q.value(0).toString());
}

void UserDashboard::refreshData()
{
    loadViolations();
    refreshStats();
}

void UserDashboard::on_searchButton_clicked()
{
    QString term = ui->searchEdit->text().trimmed();
    if (term.isEmpty()) {
        refreshData();
        return;
    }

    QString like = "%" + term + "%";
    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare(R"(
        SELECT violation_id, plate, type, location, fine, status
        FROM Violations
        WHERE user_id = ? AND (plate LIKE ? OR type LIKE ? OR location LIKE ?)
        ORDER BY violation_id DESC
    )");
    q.addBindValue(currentUserId);
    for (int i = 0; i < 3; ++i) q.addBindValue(like);

    if (q.exec()) {
        model->setQuery(std::move(q));
        loadViolations();
    }
}

void UserDashboard::on_payButton_clicked()
{
    QModelIndex idx = ui->tableView->currentIndex();
    if (!idx.isValid() || idx.column() == 0) {
        QMessageBox::information(this, "Select Fine", "Please select a fine to pay.");
        return;
    }

    int row = idx.row();
    int vioId = model->index(row, 0).data().toInt();
    QString status = model->index(row, 5).data().toString().trimmed();

    if (status != "Pending") {
        QMessageBox::information(this, "Cannot Pay", "This fine is already paid or cancelled.");
        return;
    }

    QString plate = model->index(row, 1).data().toString();
    QString type  = model->index(row, 2).data().toString();
    QString loc   = model->index(row, 3).data().toString();
    double fine   = model->index(row, 4).data().toDouble();

    QString ref = QString("VIO-%1").arg(2025000 + vioId, 7, 10, QChar('0'));

    PaymentDialog dlg(this);
    dlg.setFineDetails(vioId, ref, plate, type, loc, fine);

    if (dlg.exec() == QDialog::Accepted) {
        QSqlQuery upd(QSqlDatabase::database("TVMS"));
        upd.prepare("UPDATE Violations SET status = 'Paid' WHERE violation_id = ?");
        upd.addBindValue(vioId);
        if (upd.exec()) {
            refreshData();
            QMessageBox::information(this, "Success", "Fine paid successfully!");
        }
    }
}
