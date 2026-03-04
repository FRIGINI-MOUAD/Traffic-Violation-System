#include "policedashboard.h"
#include "ui_policedashboard.h"
#include "addviolationdialog.h"
#include "updateviolationdialog.h"

#include <QSqlQuery>
#include <QInputDialog>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

PoliceDashboard::PoliceDashboard(QWidget *parent)
    : QWidget(parent), ui(new Ui::PoliceDashboard)
{
    ui->setupUi(this);

    // DB
    QSqlDatabase db = QSqlDatabase::database("TVMS");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error",
                              "Cannot connect to database!\n"
                              "Check if TVMS is opened in login.");
        return;
    }

    setupTable();

    // Buttons
    connect(ui->addButton,    &QPushButton::clicked, this, &PoliceDashboard::on_addButton_clicked);
    connect(ui->deleteButton, &QPushButton::clicked, this, &PoliceDashboard::on_deleteButton_clicked);
    connect(ui->UpdateButton, &QPushButton::clicked, this, &PoliceDashboard::on_UpdateButton_clicked);
    connect(ui->searchButton, &QPushButton::clicked, this, &PoliceDashboard::on_searchButton_clicked);


    refreshTimer = new QTimer(this);
    connect(refreshTimer, &QTimer::timeout, this, [this]() {
        if (isRefreshing) return;
        isRefreshing = true;

        if (model) {
            if (!model->select()) {
                qDebug() << "Select failed:" << model->lastError().text();
            }
        }
        refreshStats();

        isRefreshing = false;
    });
    refreshTimer->start(5000);

    refreshStats();
}

PoliceDashboard::~PoliceDashboard()
{
    if (refreshTimer) {
        refreshTimer->stop();
        refreshTimer->deleteLater();
    }
    delete ui;
}

void PoliceDashboard::setupTable()
{
    model = new QSqlTableModel(this, QSqlDatabase::database("TVMS"));
    model->setTable("Violations");
    model->setSort(5, Qt::DescendingOrder);  // Sort by datetime

    model->setHeaderData(2, Qt::Horizontal, "License Plate");
    model->setHeaderData(3, Qt::Horizontal, "Offence Type");
    model->setHeaderData(4, Qt::Horizontal, "Location");
    model->setHeaderData(6, Qt::Horizontal, "Fine ");
    model->setHeaderData(7, Qt::Horizontal, "Status");

    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(1);
    ui->tableView->hideColumn(5);


    ui->tableView->setStyleSheet(
        "QTableView { background: white; gridline-color: #e2e8f0; selection-background-color: #fecaca; "
        "selection-color: white; font-size: 14px; border: 1px solid #cbd5e1; border-radius: 12px; }"
        "QTableView::item { padding: 14px 10px; }"
        "QTableView::item:selected { background: #dc2626; color: white; font-weight: bold; }"
        "QTableView { alternate-background-color: #fdfdfd; }"
        "QHeaderView::section { background-color: #f8fafc; color: #1e293b; font-weight: bold; "
        "font-size: 14px; padding: 12px 8px; border: none; border-bottom: 2px solid #cbd5e1; text-align: center; }"
        );

    auto *header = ui->tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Interactive);
    header->setStretchLastSection(false);
    header->setDefaultAlignment(Qt::AlignCenter);

    ui->tableView->setColumnWidth(2, 150);
    ui->tableView->setColumnWidth(3, 190);
    ui->tableView->setColumnWidth(4, 200);
    ui->tableView->setColumnWidth(5, 160);
    ui->tableView->setColumnWidth(6, 110);
    ui->tableView->setColumnWidth(7, 130);

    ui->tableView->verticalHeader()->setDefaultSectionSize(64);
    ui->tableView->setAlternatingRowColors(true);

    model->select();
    applyStatusBadges();
    connect(model, &QSqlTableModel::dataChanged, this, &PoliceDashboard::applyStatusBadges);
}

void PoliceDashboard::applyStatusBadges()
{
    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex idx = model->index(row, 7);
        QString status = idx.data().toString();

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

void PoliceDashboard::refreshStats()
{
    QSqlQuery q(QSqlDatabase::database("TVMS"));


    q.exec("SELECT COUNT(*) FROM Violations");
    if (q.next()) ui->totalLabel->setText(q.value(0).toString());
    else ui->totalLabel->setText("0");


    q.exec("SELECT COUNT(*) FROM Violations WHERE status = 'Pending'");
    if (q.next()) ui->pendingLabel->setText(q.value(0).toString());
    else ui->pendingLabel->setText("0");


    q.exec("SELECT COUNT(*) FROM Violations WHERE status = 'Paid'");
    if (q.next()) ui->paidLabel->setText(q.value(0).toString());
    else ui->paidLabel->setText("0");
}

void PoliceDashboard::on_addButton_clicked()
{

    bool ok;
    QString username = QInputDialog::getText(
        this,
        "Select Driver",
        "Enter driver's username (email):",
        QLineEdit::Normal,
        "",
        &ok
        );

    if (!ok || username.isEmpty()) {
        return;
    }


    QSqlQuery findUser(QSqlDatabase::database("TVMS"));
    findUser.prepare("SELECT id FROM Users WHERE username = ? AND role = 'user'");
    findUser.addBindValue(username);

    if (!findUser.exec() || !findUser.next()) {
        QMessageBox::critical(this, "Error", "Driver not found or not a regular user.");
        return;
    }
    int userId = findUser.value(0).toInt();

    AddViolationDialog dlg(this);
    if (dlg.exec() != QDialog::Accepted) {
        return;  // User clicked Cancel
    }


    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare(R"(
        INSERT INTO Violations (user_id, plate, type, location, fine, status)
        VALUES (?, ?, ?, ?, ?, 'Pending')
    )");

    q.addBindValue(userId);
    q.addBindValue(dlg.plate());
    q.addBindValue(dlg.type());
    q.addBindValue(dlg.location());
    q.addBindValue(dlg.fine());


    if (q.exec()) {
        model->select();
        refreshStats();
        QMessageBox::information(this, "Success", "Violation added successfully!");
    } else {
        QMessageBox::critical(this, "Database Error", q.lastError().text());
    }
}

void PoliceDashboard::on_deleteButton_clicked()
{
    QModelIndex idx = ui->tableView->currentIndex();
    if (!idx.isValid()) {
        QMessageBox::information(this, "No Selection", "Please select a violation to delete.");
        return;
    }

    int row = idx.row();
    int id = model->data(model->index(row, 0)).toInt();

    if (QMessageBox::question(this, "Confirm Delete",
                              QString("Delete violation ID %1?").arg(id)) != QMessageBox::Yes) {
        return;
    }

    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare("DELETE FROM Violations WHERE violation_id = ?");
    q.addBindValue(id);

    if (q.exec()) {
        model->select();
        refreshStats();
        QMessageBox::information(this, "Success", "Violation deleted.");
    } else {
        QMessageBox::critical(this, "Error", q.lastError().text());
    }
}

void PoliceDashboard::on_UpdateButton_clicked()
{
    QModelIndex idx = ui->tableView->currentIndex();
    if (!idx.isValid()) {
        QMessageBox::information(this, "No Selection", "Please select a violation to update.");
        return;
    }

    int row = idx.row();
    int id = model->data(model->index(row, 0)).toInt();
    QString plate = model->data(model->index(row, 2)).toString();
    QString type = model->data(model->index(row, 3)).toString();
    QString location = model->data(model->index(row, 4)).toString();
    double fine = model->data(model->index(row, 6)).toDouble();

    UpdateViolationDialog dlg(id, plate, type, location, fine, this);

    if (dlg.exec() == QDialog::Accepted) {
        QSqlQuery q(QSqlDatabase::database("TVMS"));

        q.prepare(R"(UPDATE Violations
                     SET plate = ?, type = ?, location = ?, fine = ?
                     WHERE violation_id = ?)");

        q.addBindValue(dlg.plate());
        q.addBindValue(dlg.type());
        q.addBindValue(dlg.location());
        q.addBindValue(dlg.fine());
        q.addBindValue(id);

        if (q.exec()) {
            model->select();
            refreshStats();
            QMessageBox::information(this, "Updated", "Violation record updated.");
        } else {
            QMessageBox::critical(this, "Error", q.lastError().text());
        }
    }
}

void PoliceDashboard::on_searchButton_clicked()
{
    QString term = ui->searchEdit->text().trimmed();
    if (term.isEmpty()) {
        model->setFilter("");
    } else {
        QString like = "%" + term.replace("'", "''") + "%";
        model->setFilter(QString("plate LIKE '%1' OR type LIKE '%1' OR location LIKE '%1'").arg(like));
    }
    model->select();
    applyStatusBadges();
}
