#include "paymentdialog.h"
#include "ui_paymentdialog.h"

#include <QMessageBox>

PaymentDialog::PaymentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PaymentDialog)
    , m_violationId(0)
{
    ui->setupUi(this);
    connect(ui->payButton,    &QPushButton::clicked, this, &PaymentDialog::on_payButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &PaymentDialog::on_cancelButton_clicked);
}

PaymentDialog::~PaymentDialog()
{
    delete ui;
}

void PaymentDialog::setFineDetails(int violationId,
                                   const QString &reference,
                                   const QString &plate,
                                   const QString &offence,
                                   const QString &location,
                                   double amount)
{
    m_violationId = violationId;

    ui->refLabel->setText(reference);
    ui->plateLabel->setText(plate);
    ui->offenceLabel->setText(offence);
    ui->locationLabel->setText(location);
    ui->amountLabel->setText(QString("<h3>$%1 </h3>").arg(amount, 0, 'f', 2));
}

void PaymentDialog::on_payButton_clicked()
{
    QString cardNum = ui->cardNumberEdit->text().remove(' ').trimmed();
    if (cardNum.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please enter a card number.");
        return;
    }
    if (cardNum.length() < 13 || cardNum.length() > 19) {
        QMessageBox::warning(this, "Invalid Card", "Card number must be 13-19 digits.");
        return;
    }
    QRegularExpression digitOnly("^[0-9]+$");
    if (!digitOnly.match(cardNum).hasMatch()) {
        QMessageBox::warning(this, "Invalid Card", "Card number must contain only digits.");
        return;
    }

    QString cardHolder = ui->cardHolderEdit->text().trimmed();
    if (cardHolder.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please enter cardholder name.");
        return;
    }

    QString expiry = ui->expiryEdit->text().trimmed();
    if (expiry.length() != 5) {
        QMessageBox::warning(this, "Invalid Expiry", "Expiry date must be in MM/YY format.");
        return;
    }
    if (!expiry.contains('/')) {
        QMessageBox::warning(this, "Invalid Expiry", "Use MM/YY format (e.g., 12/25).");
        return;
    }

    QString cvv = ui->cvvEdit->text().trimmed();
    if (cvv.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please enter CVV.");
        return;
    }
    if (cvv.length() < 3 || cvv.length() > 4) {
        QMessageBox::warning(this, "Invalid CVV", "CVV must be 3 or 4 digits.");
        return;
    }
    QRegularExpression cvvPattern("^[0-9]{3,4}$");
    if (!cvvPattern.match(cvv).hasMatch()) {
        QMessageBox::warning(this, "Invalid CVV", "CVV must contain only digits.");
        return;
    }

    QMessageBox::information(this,
                             "Payment Successful",
                             QString("Fine paid successfully!\nReference: %1").arg(ui->refLabel->text()));
    accept();
}

void PaymentDialog::on_cancelButton_clicked()
{
    reject();
}


QString PaymentDialog::cardNumber() const { return ui->cardNumberEdit->text().remove(' '); }
QString PaymentDialog::cardHolder() const { return ui->cardHolderEdit->text(); }
QString PaymentDialog::expiry() const     { return ui->expiryEdit->text(); }
QString PaymentDialog::cvv() const        { return ui->cvvEdit->text(); }
QString PaymentDialog::cardType() const   { return ui->cardTypeCombo->currentText(); }
