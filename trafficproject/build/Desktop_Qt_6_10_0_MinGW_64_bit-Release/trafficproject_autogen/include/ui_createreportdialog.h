/********************************************************************************
** Form generated from reading UI file 'createreportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEREPORTDIALOG_H
#define UI_CREATEREPORTDIALOG_H

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

class Ui_CreateReportDialog
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

    void setupUi(QDialog *CreateReportDialog)
    {
        if (CreateReportDialog->objectName().isEmpty())
            CreateReportDialog->setObjectName("CreateReportDialog");
        CreateReportDialog->resize(500, 700);
        CreateReportDialog->setMinimumSize(QSize(500, 700));
        CreateReportDialog->setMaximumSize(QSize(500, 700));
        CreateReportDialog->setStyleSheet(QString::fromUtf8("\n"
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
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669);\n"
"				color: white;\n"
"				}\n"
"				QPushButton#cancelBtn { background: #64748b; color: white; }\n"
"				QPushButton:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(0,0,0,0.15); }\n"
"			"));
        verticalLayout = new QVBoxLayout(CreateReportDialog);
        verticalLayout->setSpacing(20);
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(CreateReportDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel, 0, Qt::AlignHCenter);

        groupBox = new QGroupBox(CreateReportDialog);
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

        cancelBtn = new QPushButton(CreateReportDialog);
        cancelBtn->setObjectName("cancelBtn");

        buttonLayout->addWidget(cancelBtn);

        submitBtn = new QPushButton(CreateReportDialog);
        submitBtn->setObjectName("submitBtn");

        buttonLayout->addWidget(submitBtn);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(CreateReportDialog);

        submitBtn->setDefault(true);


        QMetaObject::connectSlotsByName(CreateReportDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateReportDialog)
    {
        CreateReportDialog->setWindowTitle(QCoreApplication::translate("CreateReportDialog", "Create New Violation Report", nullptr));
        titleLabel->setText(QCoreApplication::translate("CreateReportDialog", "<html><head/><body><p align=\"center\"><span style=\"font-size:24pt; font-weight:bold;\">Report Traffic Violation</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateReportDialog", "Violation Details", nullptr));
        labelPlate->setText(QCoreApplication::translate("CreateReportDialog", "License Plate Number *", nullptr));
        plateEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "Enter plate (e.g. ABC 123)", nullptr));
        labelType->setText(QCoreApplication::translate("CreateReportDialog", "Violation Type *", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("CreateReportDialog", "Speeding", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("CreateReportDialog", "Running Red Light", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("CreateReportDialog", "Illegal Parking", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("CreateReportDialog", "No Seatbelt", nullptr));
        typeCombo->setItemText(4, QCoreApplication::translate("CreateReportDialog", "Using Phone While Driving", nullptr));
        typeCombo->setItemText(5, QCoreApplication::translate("CreateReportDialog", "Other", nullptr));

        labelLocation->setText(QCoreApplication::translate("CreateReportDialog", "Location *", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "e.g. Main St & 5th Ave, Downtown", nullptr));
        labelMessage->setText(QCoreApplication::translate("CreateReportDialog", "Description *", nullptr));
        messageEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "Describe what happened, time, direction, vehicle color/make, any proof (photo/video link), etc...", nullptr));
        cancelBtn->setText(QCoreApplication::translate("CreateReportDialog", "Cancel", nullptr));
        submitBtn->setText(QCoreApplication::translate("CreateReportDialog", "Submit Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateReportDialog: public Ui_CreateReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREPORTDIALOG_H
