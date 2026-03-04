#include "userreportpage.h"
#include "ui_userreportpage.h"
#include "createreportdialog.h"
#include "updatereportdialog.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

UserReportPage::UserReportPage(int userId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserReportPage)
    , model(new QSqlQueryModel(this))
    , currentUserId(userId)
{
    ui->setupUi(this);


    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->verticalHeader()->setDefaultSectionSize(64);


    loadMyData();


    connect(ui->createBtn, &QPushButton::clicked, this, &UserReportPage::on_createBtn_clicked);
    connect(ui->updateBtn, &QPushButton::clicked, this, &UserReportPage::on_updateBtn_clicked);
    connect(ui->deleteBtn, &QPushButton::clicked, this, &UserReportPage::on_deleteBtn_clicked);
    connect(ui->searchBtn,  &QPushButton::clicked, this, &UserReportPage::loadMyData);
    connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged, this, [this]() {
        bool hasRow = ui->tableView->currentIndex().isValid();
        ui->updateBtn->setEnabled(hasRow);
        ui->deleteBtn->setEnabled(hasRow);
    });
}

UserReportPage::~UserReportPage() { delete ui; }

void UserReportPage::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    loadMyData();
}

void UserReportPage::loadMyData()
{
    QSqlDatabase db = QSqlDatabase::database("TVMS");
    if (!db.isOpen()) {
        ui->infoLabel->setText("<font color=red>Database not connected!</font>");
        return;
    }

    QSqlQuery query(db);
    QString sql = R"(
        SELECT 'Report' AS Type,
               plate,
               type AS Subject,
               location,
               '—' AS Amount,
               status
        FROM Reports
        WHERE user_id = ?

        UNION ALL

        SELECT 'Fine' AS Type,
               plate,
               type,
               location,
               ISNULL(CAST(fine AS VARCHAR(20)) + ' $', '—') AS Amount,
               status
        FROM Violations
        WHERE user_id = ?

        ORDER BY Type DESC, plate
        OFFSET 0 ROWS FETCH NEXT 200 ROWS ONLY
    )";

    query.prepare(sql);
    query.addBindValue(currentUserId);
    query.addBindValue(currentUserId);

    if (!query.exec()) {
        ui->infoLabel->setText("<font color=red>Query failed: " + query.lastError().text() + "</font>");
        qDebug() << "QUERY FAILED:" << query.lastError().text();
        return;
    }

    model->setQuery(std::move(query));


    model->setHeaderData(0, Qt::Horizontal, "Type");
    model->setHeaderData(1, Qt::Horizontal, "License Plate");
    model->setHeaderData(2, Qt::Horizontal, "Subject");
    model->setHeaderData(3, Qt::Horizontal, "Location");
    model->setHeaderData(4, Qt::Horizontal, "Amount");
    model->setHeaderData(5, Qt::Horizontal, "Status");


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
        "    margin: 0px;"
        "}"
        );

    auto *header = ui->tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Interactive);
    header->setStretchLastSection(false);
    header->setDefaultAlignment(Qt::AlignCenter);
    header->setHighlightSections(false);

    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 140);
    ui->tableView->setColumnWidth(2, 180);
    ui->tableView->setColumnWidth(3, 200);
    ui->tableView->setColumnWidth(4, 110);
    ui->tableView->setColumnWidth(5, 130);


    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex statusIdx = model->index(row, 5);
        QString status = statusIdx.data().toString().trimmed();

        QFont boldFont;
        boldFont.setBold(true);

        if (status == "Pending") {
            model->setData(statusIdx, "  PENDING  ", Qt::DisplayRole);
            model->setData(statusIdx, QColor("#fef3c7"), Qt::BackgroundRole);
            model->setData(statusIdx, QColor("#92400e"), Qt::ForegroundRole);
        }
        else if (status == "Approved") {
            model->setData(statusIdx, "  APPROVED  ", Qt::DisplayRole);
            model->setData(statusIdx, QColor("#d1fae5"), Qt::BackgroundRole);
            model->setData(statusIdx, QColor("#065f46"), Qt::ForegroundRole);
        }
        else if (status == "Rejected") {
            model->setData(statusIdx, "  REJECTED  ", Qt::DisplayRole);
            model->setData(statusIdx, QColor("#fee2e2"), Qt::BackgroundRole);
            model->setData(statusIdx, QColor("#991b1b"), Qt::ForegroundRole);
        }
        else if (status == "Cancelled") {
            model->setData(statusIdx, "  CANCELLED  ", Qt::DisplayRole);
            model->setData(statusIdx, QColor("#e0e7ff"), Qt::BackgroundRole);
            model->setData(statusIdx, QColor("#4338ca"), Qt::ForegroundRole);
        }

        model->setData(statusIdx, boldFont, Qt::FontRole);
    }

    ui->infoLabel->setText("Total: " + QString::number(model->rowCount()) + " records");
    qDebug() << "Loaded" << model->rowCount() << "records for user" << currentUserId;
}

void UserReportPage::on_createBtn_clicked()
{
    CreateReportDialog dlg(currentUserId, this);
    if (dlg.exec() == QDialog::Accepted) {
        loadMyData();
        QMessageBox::information(this, "Success", "Report submitted successfully!");
    }
}

void UserReportPage::on_updateBtn_clicked()
{
    auto idx = ui->tableView->currentIndex();
    if (!idx.isValid()) return;

    if (model->data(model->index(idx.row(), 0)).toString() != "Report") {
        QMessageBox::warning(this, "Invalid", "You can only edit reports.");
        return;
    }

    QString plate = model->data(model->index(idx.row(), 1)).toString();

    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare("SELECT report_id FROM Reports WHERE user_id = ? AND plate = ?");
    q.addBindValue(currentUserId);
    q.addBindValue(plate);

    if (q.exec() && q.next()) {
        UpdateReportDialog dlg(q.value(0).toInt(), this);
        if (dlg.exec() == QDialog::Accepted) {
            loadMyData();
        }
    }
}

void UserReportPage::on_deleteBtn_clicked()
{
    QModelIndex idx = ui->tableView->currentIndex();
    if (!idx.isValid()) return;

    if (model->data(model->index(idx.row(), 0)).toString() != "Report") {
        QMessageBox::warning(this, tr("Access Denied"),
                             tr("You can only delete your own reports."));
        return;
    }

    QString plate = model->data(model->index(idx.row(), 1)).toString();


    QDialog dialog(this);
    dialog.setWindowTitle(tr("Delete Report"));
    dialog.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    dialog.setStyleSheet(R"(
        QDialog {
            background: #ffffff;
            border-radius: 16px;
            border: 1px solid #e2e8f0;
        }
        QLabel#title {
            font-size: 20px;
            font-weight: bold;
            color: #1e293b;
        }
        QLabel#message {
            font-size: 14px;
            color: #475569;
        }
        QPushButton {
            border: none;
            border-radius: 12px;
            padding: 12px 28px;
            font-weight: bold;
            font-size: 14px;
            min-width: 100px;
        }
        QPushButton#cancel {
            background: #e2e8f0;
            color: #475569;
        }
        QPushButton#cancel:hover {
            background: #cbd5e1;
        }
        QPushButton#delete {
            background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #ef4444, stop:1 #dc2626);
            color: white;
        }
        QPushButton#delete:hover {
            background: #dc2626;
            transform: translateY(-2px);
            box-shadow: 0 10px 20px rgba(239, 68, 68, 0.3);
        }
    )");

    auto *layout = new QVBoxLayout(&dialog);
    layout->setSpacing(20);
    layout->setContentsMargins(30, 30, 30, 30);


    auto *headerLayout = new QHBoxLayout();


    auto *titleLabel = new QLabel(tr("Delete Report"));
    titleLabel->setObjectName("title");
    auto *msgLabel = new QLabel(tr("This report for license plate <b>%1</b> will be permanently deleted.<br><br>"
                                   "This action <span style='color:#ef4444; font-weight:bold;'>cannot be undone</span>.")
                                    .arg(plate.toHtmlEscaped()));
    msgLabel->setObjectName("message");
    msgLabel->setWordWrap(true);

    auto *btnLayout = new QHBoxLayout();
    btnLayout->addStretch();

    QPushButton *cancelBtn = new QPushButton(tr("Cancel"));
    cancelBtn->setObjectName("cancel");
    cancelBtn->setDefault(true);

    QPushButton *deleteBtn = new QPushButton(tr("Delete Report"));
    deleteBtn->setObjectName("delete");

    btnLayout->addWidget(cancelBtn);
    btnLayout->addWidget(deleteBtn);


    layout->addLayout(headerLayout);
    layout->addSpacing(10);
    layout->addWidget(msgLabel);
    layout->addStretch();
    layout->addLayout(btnLayout);

    connect(cancelBtn, &QPushButton::clicked, &dialog, &QDialog::reject);
    connect(deleteBtn, &QPushButton::clicked, &dialog, &QDialog::accept);


    if (dialog.exec() != QDialog::Accepted) {
        return;
    }


    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare("DELETE FROM Reports WHERE user_id = :uid AND plate = :plate");
    q.bindValue(":uid", currentUserId);
    q.bindValue(":plate", plate);

    if (!q.exec()) {
        QMessageBox::critical(this, tr("Error"),
                              tr("Failed to delete report:\n%1").arg(q.lastError().text()));
        return;
    }

    loadMyData();

    QMessageBox msg(this);
    msg.setWindowTitle(tr("Deleted"));
    msg.setText(tr("Report for plate <b>%1</b> has been permanently deleted.").arg(plate));
    msg.setStyleSheet("QLabel { min-width: 300px; }");
    msg.exec();
}
