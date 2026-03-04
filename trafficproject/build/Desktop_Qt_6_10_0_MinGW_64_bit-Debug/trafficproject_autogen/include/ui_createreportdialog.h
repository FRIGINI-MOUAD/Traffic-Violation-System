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

    void setupUi(QDialog *CreateReportDialog)
    {
        if (CreateReportDialog->objectName().isEmpty())
            CreateReportDialog->setObjectName("CreateReportDialog");
        CreateReportDialog->resize(520, 650);
        CreateReportDialog->setMinimumSize(QSize(0, 640));
        CreateReportDialog->setMaximumSize(QSize(16777215, 740));
        CreateReportDialog->setStyleSheet(QString::fromUtf8("\n"
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
"				QPushButton#submitBtn { background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669); color: white; }\n"
"				QPushButton#cancelBtn { background: #64748b; color: white; }\n"
"				QPushButton:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(0,0,0,0.15); }\n"
"			"));
        verticalLayout = new QVBoxLayout(CreateReportDialog);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(CreateReportDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        labelPlate = new QLabel(CreateReportDialog);
        labelPlate->setObjectName("labelPlate");

        verticalLayout->addWidget(labelPlate);

        plateEdit = new QLineEdit(CreateReportDialog);
        plateEdit->setObjectName("plateEdit");

        verticalLayout->addWidget(plateEdit);

        labelType = new QLabel(CreateReportDialog);
        labelType->setObjectName("labelType");

        verticalLayout->addWidget(labelType);

        typeCombo = new QComboBox(CreateReportDialog);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName("typeCombo");

        verticalLayout->addWidget(typeCombo);

        labelLocation = new QLabel(CreateReportDialog);
        labelLocation->setObjectName("labelLocation");

        verticalLayout->addWidget(labelLocation);

        locationEdit = new QLineEdit(CreateReportDialog);
        locationEdit->setObjectName("locationEdit");

        verticalLayout->addWidget(locationEdit);

        labelMessage = new QLabel(CreateReportDialog);
        labelMessage->setObjectName("labelMessage");

        verticalLayout->addWidget(labelMessage);

        messageEdit = new QTextEdit(CreateReportDialog);
        messageEdit->setObjectName("messageEdit");
        messageEdit->setMinimumSize(QSize(0, 200));
        messageEdit->setMaximumSize(QSize(16777215, 200));

        verticalLayout->addWidget(messageEdit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(CreateReportDialog);
        cancelBtn->setObjectName("cancelBtn");

        hboxLayout->addWidget(cancelBtn);

        submitBtn = new QPushButton(CreateReportDialog);
        submitBtn->setObjectName("submitBtn");

        hboxLayout->addWidget(submitBtn);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(CreateReportDialog);

        QMetaObject::connectSlotsByName(CreateReportDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateReportDialog)
    {
        CreateReportDialog->setWindowTitle(QCoreApplication::translate("CreateReportDialog", "Create New Violation Report", nullptr));
        titleLabel->setText(QCoreApplication::translate("CreateReportDialog", "<h2>Report Traffic Violation</h2>", nullptr));
        labelPlate->setText(QCoreApplication::translate("CreateReportDialog", "License Plate Number *", nullptr));
        plateEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "Enter plate (e.g. ABC 123)", nullptr));
        labelType->setText(QCoreApplication::translate("CreateReportDialog", "Violation Type *", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("CreateReportDialog", "Speeding", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("CreateReportDialog", "Running Red Light", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("CreateReportDialog", "Illegal Parking", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("CreateReportDialog", "No Seatbelt", nullptr));
        typeCombo->setItemText(4, QCoreApplication::translate("CreateReportDialog", "Using Phone While Driving", nullptr));

        labelLocation->setText(QCoreApplication::translate("CreateReportDialog", "Location *", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "e.g. Main St & 5th Ave, Downtown", nullptr));
        labelMessage->setText(QCoreApplication::translate("CreateReportDialog", "Detailed Message to Officer *", nullptr));
        messageEdit->setPlaceholderText(QCoreApplication::translate("CreateReportDialog", "Describe what happened, time, direction, vehicle color, any proof (photo/video), etc...", nullptr));
        cancelBtn->setText(QCoreApplication::translate("CreateReportDialog", "Cancel", nullptr));
        submitBtn->setText(QCoreApplication::translate("CreateReportDialog", "Submit Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateReportDialog: public Ui_CreateReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEREPORTDIALOG_H
