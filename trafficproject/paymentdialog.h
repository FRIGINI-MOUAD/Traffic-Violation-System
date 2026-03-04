#ifndef PAYMENTDIALOG_H
#define PAYMENTDIALOG_H

#include <QDialog>

namespace Ui {
class PaymentDialog;
}

class PaymentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PaymentDialog(QWidget *parent = nullptr);
    ~PaymentDialog();


    void setFineDetails(int violationId,
                        const QString &reference,
                        const QString &plate,
                        const QString &offence,
                        const QString &location,
                        double amount);


    QString cardNumber() const;
    QString cardHolder() const;
    QString expiry() const;
    QString cvv() const;
    QString cardType() const;

private slots:
    void on_payButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::PaymentDialog *ui;
    int m_violationId;
};

#endif
