#include "addviolationdialog.h"
#include "ui_addviolationdialog.h"
#include <QMessageBox>

AddViolationDialog::AddViolationDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::AddViolationDialog)
{
    ui->setupUi(this);
}

AddViolationDialog::~AddViolationDialog()
{
    delete ui;
}

QString AddViolationDialog::plate() const
{
    return ui->plateEdit->text().trimmed().toUpper();
}

QString AddViolationDialog::type() const
{
    return ui->userCombo->currentText();
}

QString AddViolationDialog::location() const
{
    return ui->locationEdit->text().trimmed();
}

double AddViolationDialog::fine() const
{
    return ui->fineSpinBox->value();
}

void AddViolationDialog::on_saveButton_clicked()
{
    if (plate().isEmpty() || location().isEmpty()) {
        QMessageBox::warning(this, "Missing Information",
                             "Please enter Plate Number and Location.");
        return;
    }

    if (plate().length() < 4) {
        QMessageBox::warning(this, "Invalid Plate",
                             "Plate number looks too short.");
        return;
    }

    accept();
}

void AddViolationDialog::on_cancelButton_clicked()
{
    reject();
}
