/********************************************************************************
** Form generated from reading UI file 'updatereportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEREPORTDIALOG_H
#define UI_UPDATEREPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateReportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *labelPlate;
    QLineEdit *plateEdit;
    QLabel *labelType;
    QComboBox *typeCombo;
    QLabel *labelLocation;
    QLineEdit *locationEdit;
    QLabel *labelMessage;
    QTextEdit *messageEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *submitBtn;

    void setupUi(QDialog *UpdateReportDialog)
    {
        if (UpdateReportDialog->objectName().isEmpty())
            UpdateReportDialog->setObjectName("UpdateReportDialog");
        UpdateReportDialog->resize(520, 620);
        UpdateReportDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background: #f8fafc; font-family: 'Segoe UI'; }\n"
"				QLabel { font-size: 14px; color: #1e293b; font-weight: bold; }\n"
"				QLineEdit, QComboBox, QTextEdit {\n"
"				border: 2px solid #e2e8f0;\n"
"				border-radius: 12px;\n"
"				padding: 12px;\n"
"				font-size: 14px;\n"
"				background: white;\n"
"				}\n"
"				QLineEdit:focus, QComboBox:focus, QTextEdit:focus { border-color: #3b82f6; }\n"
"				QPushButton {\n"
"				border: none;\n"
"				border-radius: 12px;\n"
"				padding: 14px 28px;\n"
"				font-weight: bold;\n"
"				font-size: 15px;\n"
"				min-width: 120px;\n"
"				}\n"
"				QPushButton#submitBtn { background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #3b82f6, stop:1 #1d4ed8); color: white; }\n"
"				QPushButton#cancelBtn { background: #64748b; color: white; }\n"
"				QPushButton:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(0,0,0,0.15); }\n"
"			"));
        verticalLayout = new QVBoxLayout(UpdateReportDialog);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(UpdateReportDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        labelPlate = new QLabel(UpdateReportDialog);
        labelPlate->setObjectName("labelPlate");

        verticalLayout->addWidget(labelPlate);

        plateEdit = new QLineEdit(UpdateReportDialog);
        plateEdit->setObjectName("plateEdit");

        verticalLayout->addWidget(plateEdit);

        labelType = new QLabel(UpdateReportDialog);
        labelType->setObjectName("labelType");

        verticalLayout->addWidget(labelType);

        typeCombo = new QComboBox(UpdateReportDialog);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName("typeCombo");

        verticalLayout->addWidget(typeCombo);

        labelLocation = new QLabel(UpdateReportDialog);
        labelLocation->setObjectName("labelLocation");

        verticalLayout->addWidget(labelLocation);

        locationEdit = new QLineEdit(UpdateReportDialog);
        locationEdit->setObjectName("locationEdit");

        verticalLayout->addWidget(locationEdit);

        labelMessage = new QLabel(UpdateReportDialog);
        labelMessage->setObjectName("labelMessage");

        verticalLayout->addWidget(labelMessage);

        messageEdit = new QTextEdit(UpdateReportDialog);
        messageEdit->setObjectName("messageEdit");

        verticalLayout->addWidget(messageEdit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(UpdateReportDialog);
        cancelBtn->setObjectName("cancelBtn");

        hboxLayout->addWidget(cancelBtn);

        submitBtn = new QPushButton(UpdateReportDialog);
        submitBtn->setObjectName("submitBtn");

        hboxLayout->addWidget(submitBtn);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(UpdateReportDialog);

        QMetaObject::connectSlotsByName(UpdateReportDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateReportDialog)
    {
        UpdateReportDialog->setWindowTitle(QCoreApplication::translate("UpdateReportDialog", "Update Violation Report", nullptr));
        titleLabel->setText(QCoreApplication::translate("UpdateReportDialog", "<h2>Update Your Report</h2>", nullptr));
        labelPlate->setText(QCoreApplication::translate("UpdateReportDialog", "License Plate Number *", nullptr));
        plateEdit->setPlaceholderText(QCoreApplication::translate("UpdateReportDialog", "Enter plate (e.g. ABC 123)", nullptr));
        labelType->setText(QCoreApplication::translate("UpdateReportDialog", "Violation Type *", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("UpdateReportDialog", "Speeding", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("UpdateReportDialog", "Running Red Light", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("UpdateReportDialog", "Illegal Parking", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("UpdateReportDialog", "No Seatbelt", nullptr));
        typeCombo->setItemText(4, QCoreApplication::translate("UpdateReportDialog", "Using Phone While Driving", nullptr));

        labelLocation->setText(QCoreApplication::translate("UpdateReportDialog", "Location *", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("UpdateReportDialog", "e.g. Main St & 5th Ave, Downtown", nullptr));
        labelMessage->setText(QCoreApplication::translate("UpdateReportDialog", "Detailed Message to Officer *", nullptr));
        messageEdit->setPlaceholderText(QCoreApplication::translate("UpdateReportDialog", "Add more details or clarify your report...", nullptr));
        cancelBtn->setText(QCoreApplication::translate("UpdateReportDialog", "Cancel", nullptr));
        submitBtn->setText(QCoreApplication::translate("UpdateReportDialog", "Save Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateReportDialog: public Ui_UpdateReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEREPORTDIALOG_H
