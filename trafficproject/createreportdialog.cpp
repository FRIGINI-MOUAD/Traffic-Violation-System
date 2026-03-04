#include "createreportdialog.h"
#include "ui_createreportdialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

CreateReportDialog::CreateReportDialog(int userId, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateReportDialog)
    , currentUserId(userId)
{
    ui->setupUi(this);
    setModal(true);
}

CreateReportDialog::~CreateReportDialog()
{
    delete ui;
}

bool CreateReportDialog::validateInput()
{
    if (ui->plateEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Missing Field", "Please enter license plate number.");
        ui->plateEdit->setFocus();
        return false;
    }
    if (ui->locationEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Missing Field", "Please enter location.");
        ui->locationEdit->setFocus();
        return false;
    }
    QString msg = ui->messageEdit->toPlainText().trimmed();
    if (msg.isEmpty() || msg.length() < 20) {
        QMessageBox::warning(this, "Message Too Short", "Please write at least 20 characters.");
        ui->messageEdit->setFocus();
        return false;
    }
    return true;
}

void CreateReportDialog::on_submitBtn_clicked()
{
    if (!validateInput()) return;

    QSqlDatabase db = QSqlDatabase::database("TVMS");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database not connected.");
        return;
    }

    QSqlQuery q(db);
    q.prepare(R"(
        INSERT INTO Reports (user_id, plate, type, location, message, status)
        VALUES (?, ?, ?, ?, ?, 'Pending')
    )");

    q.addBindValue(currentUserId);
    q.addBindValue(ui->plateEdit->text().trimmed().toUpper());
    q.addBindValue(ui->typeCombo->currentText());
    q.addBindValue(ui->locationEdit->text().trimmed());
    q.addBindValue(ui->messageEdit->toPlainText().trimmed());

    if (q.exec()) {
        accept();
    } else {
        QMessageBox::critical(this, "Submit Failed", q.lastError().text());
        qDebug() << "Insert error:" << q.lastError();
    }
}

void CreateReportDialog::on_cancelBtn_clicked()
{
    reject();
}
