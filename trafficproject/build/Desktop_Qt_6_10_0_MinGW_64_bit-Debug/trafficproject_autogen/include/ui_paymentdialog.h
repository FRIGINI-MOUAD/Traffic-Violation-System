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
#include <QtWidgets/QFormLayout>
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
    QGroupBox *groupBox;
    QFormLayout *formLayout;
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
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
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
        PaymentDialog->resize(480, 640);
        PaymentDialog->setMinimumSize(QSize(0, 640));
        PaymentDialog->setMaximumSize(QSize(16777215, 640));
        PaymentDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background-color: #f8fafc; }\n"
"				QLabel { font-size: 13px; }\n"
"				QLineEdit, QComboBox { padding: 10px; border: 1px solid #cbd5e1; border-radius: 8px; font-size: 14px; }\n"
"				QPushButton#payButton { background-color: #10b981; color: white; font-weight: bold; padding: 12px; border-radius: 10px; }\n"
"				QPushButton#payButton:hover { background-color: #059669; }\n"
"				QPushButton#cancelButton { background-color: #ef4444; color: white; font-weight: bold; padding: 12px; border-radius: 10px; }\n"
"				QPushButton#cancelButton:hover { background-color: #dc2626; }\n"
"			"));
        verticalLayout = new QVBoxLayout(PaymentDialog);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(PaymentDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMaximumSize(QSize(16777215, 60));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        groupBox = new QGroupBox(PaymentDialog);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label_1 = new QLabel(groupBox);
        label_1->setObjectName("label_1");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_1);

        refLabel = new QLabel(groupBox);
        refLabel->setObjectName("refLabel");
        QFont font;
        font.setBold(true);
        refLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, refLabel);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        plateLabel = new QLabel(groupBox);
        plateLabel->setObjectName("plateLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, plateLabel);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        offenceLabel = new QLabel(groupBox);
        offenceLabel->setObjectName("offenceLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, offenceLabel);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        locationLabel = new QLabel(groupBox);
        locationLabel->setObjectName("locationLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, locationLabel);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setTextFormat(Qt::TextFormat::RichText);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        amountLabel = new QLabel(groupBox);
        amountLabel->setObjectName("amountLabel");
        amountLabel->setStyleSheet(QString::fromUtf8("color: #dc2626; font-weight: bold;"));

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, amountLabel);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PaymentDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        cardTypeCombo = new QComboBox(groupBox_2);
        cardTypeCombo->addItem(QString());
        cardTypeCombo->addItem(QString());
        cardTypeCombo->addItem(QString());
        cardTypeCombo->setObjectName("cardTypeCombo");

        verticalLayout_2->addWidget(cardTypeCombo);

        cardNumberEdit = new QLineEdit(groupBox_2);
        cardNumberEdit->setObjectName("cardNumberEdit");
        cardNumberEdit->setMaxLength(19);

        verticalLayout_2->addWidget(cardNumberEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        expiryEdit = new QLineEdit(groupBox_2);
        expiryEdit->setObjectName("expiryEdit");
        expiryEdit->setMaxLength(5);

        horizontalLayout->addWidget(expiryEdit);

        cvvEdit = new QLineEdit(groupBox_2);
        cvvEdit->setObjectName("cvvEdit");
        cvvEdit->setMaxLength(4);
        cvvEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(cvvEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        cardHolderEdit = new QLineEdit(groupBox_2);
        cardHolderEdit->setObjectName("cardHolderEdit");

        verticalLayout_2->addWidget(cardHolderEdit);


        verticalLayout->addWidget(groupBox_2);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(PaymentDialog);
        cancelButton->setObjectName("cancelButton");

        buttonLayout->addWidget(cancelButton);

        payButton = new QPushButton(PaymentDialog);
        payButton->setObjectName("payButton");

        buttonLayout->addWidget(payButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(PaymentDialog);
        QObject::connect(cancelButton, &QPushButton::clicked, PaymentDialog, qOverload<>(&QDialog::reject));
        QObject::connect(payButton, &QPushButton::clicked, PaymentDialog, qOverload<>(&QDialog::accept));

        payButton->setDefault(true);


        QMetaObject::connectSlotsByName(PaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *PaymentDialog)
    {
        PaymentDialog->setWindowTitle(QCoreApplication::translate("PaymentDialog", "Payment - Traffic Fine", nullptr));
        titleLabel->setText(QCoreApplication::translate("PaymentDialog", "<h2>Pay Traffic Fine</h2>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PaymentDialog", "Violation Details", nullptr));
        label_1->setText(QCoreApplication::translate("PaymentDialog", "Reference:", nullptr));
        refLabel->setText(QCoreApplication::translate("PaymentDialog", "VIO-1234567", nullptr));
        label_2->setText(QCoreApplication::translate("PaymentDialog", "Plate:", nullptr));
        plateLabel->setText(QCoreApplication::translate("PaymentDialog", "ABC-123", nullptr));
        label_3->setText(QCoreApplication::translate("PaymentDialog", "Offence:", nullptr));
        offenceLabel->setText(QCoreApplication::translate("PaymentDialog", "Speeding", nullptr));
        label_4->setText(QCoreApplication::translate("PaymentDialog", "Location:", nullptr));
        locationLabel->setText(QCoreApplication::translate("PaymentDialog", "Downtown Highway", nullptr));
        label_5->setText(QCoreApplication::translate("PaymentDialog", "<b>Amount Due:</b>", nullptr));
        amountLabel->setText(QCoreApplication::translate("PaymentDialog", "<html><head/><body><h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large;\">$150.00 </span></h3></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PaymentDialog", "Payment Method", nullptr));
        cardTypeCombo->setItemText(0, QCoreApplication::translate("PaymentDialog", "MasterCard", nullptr));
        cardTypeCombo->setItemText(1, QCoreApplication::translate("PaymentDialog", "Visa", nullptr));
        cardTypeCombo->setItemText(2, QCoreApplication::translate("PaymentDialog", "Credit Card", nullptr));

        cardNumberEdit->setPlaceholderText(QCoreApplication::translate("PaymentDialog", "Card Number (1234 5678 9012 3456)", nullptr));
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
