/********************************************************************************
** Form generated from reading UI file 'paymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTDIALOG_H
#define UI_PAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PaymentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_1;
    QLabel *refLabel;
    QLabel *label_2;
    QLabel *plateLabel;
    QLabel *label_3;
    QLabel *offenceLabel;
    QLabel *label_4;
    QLabel *locationLabel;
    QLabel *label_5;
    QLabel *amountLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *cardTypeCombo;
    QLineEdit *cardNumberEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *expiryEdit;
    QLineEdit *cvvEdit;
    QLineEdit *cardHolderEdit;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *payButton;

    void setupUi(QDialog *PaymentDialog)
    {
        if (PaymentDialog->objectName().isEmpty())
            PaymentDialog->setObjectName("PaymentDialog");
        PaymentDialog->resize(480, 570);
        PaymentDialog->setMaximumSize(QSize(16777215, 570));
        PaymentDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background-color: #f8fafc; }\n"
"				QLabel { font-size: 11px; }\n"
"				QGroupBox { font-size: 12px; font-weight: bold; padding-top: 8px; }\n"
"				QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top left; padding: 2px 5px; }\n"
"				QLineEdit, QComboBox { padding: 6px; border: 1px solid #cbd5e1; border-radius: 5px; font-size: 12px; }\n"
"				QPushButton#payButton { background-color: #10b981; color: white; font-weight: bold; padding: 8px; border-radius: 6px; font-size: 13px; }\n"
"				QPushButton#payButton:hover { background-color: #059669; }\n"
"				QPushButton#cancelButton { background-color: #ef4444; color: white; font-weight: bold; padding: 8px; border-radius: 6px; font-size: 13px; }\n"
"				QPushButton#cancelButton:hover { background-color: #dc2626; }\n"
"			"));
        verticalLayout = new QVBoxLayout(PaymentDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(12, 8, 12, 8);
        titleLabel = new QLabel(PaymentDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel, 0, Qt::AlignmentFlag::AlignVCenter);

        groupBox_3 = new QGroupBox(PaymentDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(5);
        gridLayout_2->setContentsMargins(8, 6, 8, 6);
        label_1 = new QLabel(groupBox_3);
        label_1->setObjectName("label_1");

        gridLayout_2->addWidget(label_1, 0, 0, 1, 1);

        refLabel = new QLabel(groupBox_3);
        refLabel->setObjectName("refLabel");
        QFont font;
        font.setBold(true);
        refLabel->setFont(font);

        gridLayout_2->addWidget(refLabel, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        plateLabel = new QLabel(groupBox_3);
        plateLabel->setObjectName("plateLabel");

        gridLayout_2->addWidget(plateLabel, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        offenceLabel = new QLabel(groupBox_3);
        offenceLabel->setObjectName("offenceLabel");

        gridLayout_2->addWidget(offenceLabel, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        locationLabel = new QLabel(groupBox_3);
        locationLabel->setObjectName("locationLabel");

        gridLayout_2->addWidget(locationLabel, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        label_5->setTextFormat(Qt::TextFormat::RichText);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        amountLabel = new QLabel(groupBox_3);
        amountLabel->setObjectName("amountLabel");
        amountLabel->setStyleSheet(QString::fromUtf8("color: #dc2626; font-weight: bold; font-size: 15px;"));

        gridLayout_2->addWidget(amountLabel, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(PaymentDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(8, 6, 8, 6);
        cardTypeCombo = new QComboBox(groupBox);
        cardTypeCombo->addItem(QString());
        cardTypeCombo->addItem(QString());
        cardTypeCombo->addItem(QString());
        cardTypeCombo->setObjectName("cardTypeCombo");

        verticalLayout_3->addWidget(cardTypeCombo);

        cardNumberEdit = new QLineEdit(groupBox);
        cardNumberEdit->setObjectName("cardNumberEdit");
        cardNumberEdit->setMaxLength(19);

        verticalLayout_3->addWidget(cardNumberEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        expiryEdit = new QLineEdit(groupBox);
        expiryEdit->setObjectName("expiryEdit");
        expiryEdit->setMaxLength(5);

        horizontalLayout->addWidget(expiryEdit);

        cvvEdit = new QLineEdit(groupBox);
        cvvEdit->setObjectName("cvvEdit");
        cvvEdit->setMaxLength(4);
        cvvEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(cvvEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        cardHolderEdit = new QLineEdit(groupBox);
        cardHolderEdit->setObjectName("cardHolderEdit");

        verticalLayout_3->addWidget(cardHolderEdit);


        verticalLayout->addWidget(groupBox);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(8);
        buttonLayout->setObjectName("buttonLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(PaymentDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMinimumSize(QSize(90, 32));

        buttonLayout->addWidget(cancelButton);

        payButton = new QPushButton(PaymentDialog);
        payButton->setObjectName("payButton");
        payButton->setMinimumSize(QSize(90, 32));

        buttonLayout->addWidget(payButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(PaymentDialog);
        QObject::connect(cancelButton, &QPushButton::clicked, PaymentDialog, qOverload<>(&QDialog::reject));

        payButton->setDefault(true);


        QMetaObject::connectSlotsByName(PaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *PaymentDialog)
    {
        PaymentDialog->setWindowTitle(QCoreApplication::translate("PaymentDialog", "Payment - Traffic Fine", nullptr));
        titleLabel->setText(QCoreApplication::translate("PaymentDialog", "<h4 style='margin:0;'>Pay Traffic Fine</h4>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PaymentDialog", "Violation Details", nullptr));
        label_1->setText(QCoreApplication::translate("PaymentDialog", "Reference:", nullptr));
        refLabel->setText(QCoreApplication::translate("PaymentDialog", "VIO-1234567", nullptr));
        label_2->setText(QCoreApplication::translate("PaymentDialog", "Plate:", nullptr));
        plateLabel->setText(QCoreApplication::translate("PaymentDialog", "ABC-123", nullptr));
        label_3->setText(QCoreApplication::translate("PaymentDialog", "Offence:", nullptr));
        offenceLabel->setText(QCoreApplication::translate("PaymentDialog", "Speeding", nullptr));
        label_4->setText(QCoreApplication::translate("PaymentDialog", "Location:", nullptr));
        locationLabel->setText(QCoreApplication::translate("PaymentDialog", "Downtown Highway", nullptr));
        label_5->setText(QCoreApplication::translate("PaymentDialog", "<b>Amount:</b>", nullptr));
        amountLabel->setText(QCoreApplication::translate("PaymentDialog", "$150.00 ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PaymentDialog", "Payment Method", nullptr));
        cardTypeCombo->setItemText(0, QCoreApplication::translate("PaymentDialog", "MasterCard", nullptr));
        cardTypeCombo->setItemText(1, QCoreApplication::translate("PaymentDialog", "Visa", nullptr));
        cardTypeCombo->setItemText(2, QCoreApplication::translate("PaymentDialog", "Credit Card", nullptr));

        cardNumberEdit->setPlaceholderText(QCoreApplication::translate("PaymentDialog", "Card Number", nullptr));
        expiryEdit->setPlaceholderText(QCoreApplication::translate("PaymentDialog", "MM/YY", nullptr));
        cvvEdit->setPlaceholderText(QCoreApplication::translate("PaymentDialog", "CVV", nullptr));
        cardHolderEdit->setPlaceholderText(QCoreApplication::translate("PaymentDialog", "Cardholder Name", nullptr));
        cancelButton->setText(QCoreApplication::translate("PaymentDialog", "Cancel", nullptr));
        payButton->setText(QCoreApplication::translate("PaymentDialog", "Pay Now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaymentDialog: public Ui_PaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTDIALOG_H
