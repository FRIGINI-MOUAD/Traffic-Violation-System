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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelPlate;
    QLineEdit *plateEdit;
    QLabel *labelType;
    QComboBox *typeCombo;
    QLabel *labelLocation;
    QLineEdit *locationEdit;
    QLabel *labelMessage;
    QTextEdit *messageEdit;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *submitBtn;

    void setupUi(QDialog *UpdateReportDialog)
    {
        if (UpdateReportDialog->objectName().isEmpty())
            UpdateReportDialog->setObjectName("UpdateReportDialog");
        UpdateReportDialog->resize(500, 700);
        UpdateReportDialog->setMinimumSize(QSize(500, 700));
        UpdateReportDialog->setMaximumSize(QSize(500, 700));
        UpdateReportDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background: #f8fafc; font-family: 'Segoe UI', Arial; }\n"
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
"				QPushButton#submitBtn {\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #3b82f6, stop:1 #1d4ed8);\n"
"				color: white;\n"
"				}\n"
"				QPushButton#cancelBtn { background: #64748b; color: white; }\n"
"				QPushButton:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(0,0,0,0.15); }\n"
"			"));
        verticalLayout = new QVBoxLayout(UpdateReportDialog);
        verticalLayout->setSpacing(20);
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(UpdateReportDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel, 0, Qt::AlignHCenter);

        groupBox = new QGroupBox(UpdateReportDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setVerticalSpacing(12);
        gridLayout_2->setContentsMargins(20, 20, 20, 20);
        labelPlate = new QLabel(groupBox);
        labelPlate->setObjectName("labelPlate");

        gridLayout_2->addWidget(labelPlate, 0, 0, 1, 1);

        plateEdit = new QLineEdit(groupBox);
        plateEdit->setObjectName("plateEdit");

        gridLayout_2->addWidget(plateEdit, 0, 1, 1, 1);

        labelType = new QLabel(groupBox);
        labelType->setObjectName("labelType");

        gridLayout_2->addWidget(labelType, 1, 0, 1, 1);

        typeCombo = new QComboBox(groupBox);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName("typeCombo");

        gridLayout_2->addWidget(typeCombo, 1, 1, 1, 1);

        labelLocation = new QLabel(groupBox);
        labelLocation->setObjectName("labelLocation");

        gridLayout_2->addWidget(labelLocation, 2, 0, 1, 1);

        locationEdit = new QLineEdit(groupBox);
        locationEdit->setObjectName("locationEdit");

        gridLayout_2->addWidget(locationEdit, 2, 1, 1, 1);

        labelMessage = new QLabel(groupBox);
        labelMessage->setObjectName("labelMessage");

        gridLayout_2->addWidget(labelMessage, 3, 0, 1, 1);

        messageEdit = new QTextEdit(groupBox);
        messageEdit->setObjectName("messageEdit");

        gridLayout_2->addWidget(messageEdit, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(UpdateReportDialog);
        cancelBtn->setObjectName("cancelBtn");

        buttonLayout->addWidget(cancelBtn);

        submitBtn = new QPushButton(UpdateReportDialog);
        submitBtn->setObjectName("submitBtn");

        buttonLayout->addWidget(submitBtn);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(UpdateReportDialog);

        submitBtn->setDefault(true);


        QMetaObject::connectSlotsByName(UpdateReportDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateReportDialog)
    {
        UpdateReportDialog->setWindowTitle(QCoreApplication::translate("UpdateReportDialog", "Update Violation Report", nullptr));
        titleLabel->setText(QCoreApplication::translate("UpdateReportDialog", "<html><head/><body><p align=\"center\"><span style=\"font-size:24pt; font-weight:bold;\">Update Your Report</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UpdateReportDialog", "Report Details", nullptr));
        labelPlate->setText(QCoreApplication::translate("UpdateReportDialog", "License Plate Number *", nullptr));
        plateEdit->setPlaceholderText(QCoreApplication::translate("UpdateReportDialog", "Enter plate (e.g. ABC 123)", nullptr));
        labelType->setText(QCoreApplication::translate("UpdateReportDialog", "Violation Type *", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("UpdateReportDialog", "Speeding", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("UpdateReportDialog", "Running Red Light", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("UpdateReportDialog", "Illegal Parking", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("UpdateReportDialog", "No Seatbelt", nullptr));
        typeCombo->setItemText(4, QCoreApplication::translate("UpdateReportDialog", "Using Phone While Driving", nullptr));
        typeCombo->setItemText(5, QCoreApplication::translate("UpdateReportDialog", "Other", nullptr));

        labelLocation->setText(QCoreApplication::translate("UpdateReportDialog", "Location *", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("UpdateReportDialog", "e.g. Main St & 5th Ave, Downtown", nullptr));
        labelMessage->setText(QCoreApplication::translate("UpdateReportDialog", "Description *", nullptr));
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
