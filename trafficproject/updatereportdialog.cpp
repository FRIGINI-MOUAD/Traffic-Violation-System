#include "updatereportdialog.h"
#include "ui_updatereportdialog.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

UpdateReportDialog::UpdateReportDialog(int reportId, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateReportDialog)
    , m_reportId(reportId)
{
    ui->setupUi(this);
    setModal(true);
    loadReportData();
}

UpdateReportDialog::~UpdateReportDialog()
{
    delete ui;
}

void UpdateReportDialog::loadReportData()
{
    QSqlDatabase db = QSqlDatabase::database("TVMS");
    QSqlQuery q(db);
    q.prepare("SELECT plate, type, location, message FROM Reports WHERE report_id = ? AND status = 'Pending'");
    q.addBindValue(m_reportId);

    if (q.exec() && q.next()) {
        ui->plateEdit->setText(q.value(0).toString());
        ui->typeCombo->setCurrentText(q.value(1).toString());
        ui->locationEdit->setText(q.value(2).toString());
        ui->messageEdit->setPlainText(q.value(3).toString());
    } else {
        QMessageBox::critical(this, "Error", "Report not found or no longer editable.");
        reject();
    }
}

bool UpdateReportDialog::validateInput()
{
    if (ui->plateEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Error", "Plate cannot be empty.");
        return false;
    }
    if (ui->locationEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Error", "Location cannot be empty.");
        return false;
    }
    if (ui->messageEdit->toPlainText().trimmed().length() < 20) {
        QMessageBox::warning(this, "Error", "Message must be at least 20 characters.");
        return false;
    }
    return true;
}

void UpdateReportDialog::on_submitBtn_clicked()
{
    if (!validateInput()) return;

    QSqlDatabase db = QSqlDatabase::database("TVMS");
    QSqlQuery q(db);
    q.prepare(R"(
        UPDATE Reports
        SET plate = ?, type = ?, location = ?, message = ?
        WHERE report_id = ? AND status = 'Pending'
    )");

    q.addBindValue(ui->plateEdit->text().trimmed().toUpper());
    q.addBindValue(ui->typeCombo->currentText());
    q.addBindValue(ui->locationEdit->text().trimmed());
    q.addBindValue(ui->messageEdit->toPlainText().trimmed());
    q.addBindValue(m_reportId);

    if (q.exec() && q.numRowsAffected() > 0) {
        accept();
    } else {
        QMessageBox::critical(this, "Update Failed", "Report may have been processed already.");
    }
}

void UpdateReportDialog::on_cancelBtn_clicked()
{
    reject();
}
