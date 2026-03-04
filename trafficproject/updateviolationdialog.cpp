#include "updateviolationdialog.h"
#include "ui_updateviolationdialog.h"
#include <QMessageBox>

UpdateViolationDialog::UpdateViolationDialog(int id, const QString &plate, const QString &type,
                                             const QString &location, double fine, QWidget *parent)
    : QDialog(parent), ui(new Ui::UpdateViolationDialog), m_id(id)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);

    // Pre-fill fields
    ui->plateEdit->setText(plate);
    int typeIdx = ui->typeCombo->findText(type);
    if (typeIdx >= 0) ui->typeCombo->setCurrentIndex(typeIdx);
    ui->locationEdit->setText(location);
    ui->fineSpinBox->setValue(fine);
}

UpdateViolationDialog::~UpdateViolationDialog()
{
    delete ui;
}

QString UpdateViolationDialog::plate() const
{
    return ui->plateEdit->text().trimmed().toUpper();
}

QString UpdateViolationDialog::type() const
{
    return ui->typeCombo->currentText();
}

QString UpdateViolationDialog::location() const
{
    return ui->locationEdit->text().trimmed();
}

double UpdateViolationDialog::fine() const
{
    return ui->fineSpinBox->value();
}

void UpdateViolationDialog::on_saveButton_clicked()
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

void UpdateViolationDialog::on_cancelButton_clicked()
{
    reject();
}
