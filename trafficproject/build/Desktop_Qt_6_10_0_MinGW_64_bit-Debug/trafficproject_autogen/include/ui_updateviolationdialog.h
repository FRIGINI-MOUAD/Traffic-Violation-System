/********************************************************************************
** Form generated from reading UI file 'updateviolationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEVIOLATIONDIALOG_H
#define UI_UPDATEVIOLATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateViolationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *numberlabel;
    QLineEdit *plateEdit;
    QLabel *violationlabel;
    QComboBox *typeCombo;
    QLabel *locationlabel;
    QLineEdit *locationEdit;
    QLabel *amountlabel;
    QDoubleSpinBox *fineSpinBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    void setupUi(QDialog *UpdateViolationDialog)
    {
        if (UpdateViolationDialog->objectName().isEmpty())
            UpdateViolationDialog->setObjectName("UpdateViolationDialog");
        UpdateViolationDialog->resize(520, 620);
        UpdateViolationDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #fefce8, stop:1 #fef3c7); }\n"
"				QLabel { color: #92400e; font-weight: bold; font-size: 16px; }\n"
"				QLineEdit, QComboBox, QDoubleSpinBox {\n"
"				padding: 14px; border: 2px solid #fcd34d; border-radius: 12px; font-size: 16px; background: white;\n"
"				}\n"
"				QLineEdit:focus, QComboBox:focus, QDoubleSpinBox:focus { border-color: #f59e0b; }\n"
"				QPushButton#saveButton {\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #f59e0b, stop:1 #d97706);\n"
"				color: white; font-weight: bold; font-size: 16px; padding: 14px; border-radius: 12px;\n"
"				}\n"
"				QPushButton#cancelButton {\n"
"				background: #e2e8f0; color: #475569; font-weight: bold; font-size: 16px; padding: 14px; border-radius: 12px;\n"
"				}\n"
"			"));
        UpdateViolationDialog->setModal(true);
        vboxLayout = new QVBoxLayout(UpdateViolationDialog);
        vboxLayout->setObjectName("vboxLayout");
        titleLabel = new QLabel(UpdateViolationDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout->addWidget(titleLabel);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vboxLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(UpdateViolationDialog);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        numberlabel = new QLabel(groupBox);
        numberlabel->setObjectName("numberlabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, numberlabel);

        plateEdit = new QLineEdit(groupBox);
        plateEdit->setObjectName("plateEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, plateEdit);

        violationlabel = new QLabel(groupBox);
        violationlabel->setObjectName("violationlabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, violationlabel);

        typeCombo = new QComboBox(groupBox);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName("typeCombo");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, typeCombo);

        locationlabel = new QLabel(groupBox);
        locationlabel->setObjectName("locationlabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, locationlabel);

        locationEdit = new QLineEdit(groupBox);
        locationEdit->setObjectName("locationEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, locationEdit);

        amountlabel = new QLabel(groupBox);
        amountlabel->setObjectName("amountlabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, amountlabel);

        fineSpinBox = new QDoubleSpinBox(groupBox);
        fineSpinBox->setObjectName("fineSpinBox");
        fineSpinBox->setMinimum(100.000000000000000);
        fineSpinBox->setMaximum(2000.000000000000000);
        fineSpinBox->setValue(150.000000000000000);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, fineSpinBox);


        vboxLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        hboxLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(UpdateViolationDialog);
        cancelButton->setObjectName("cancelButton");

        hboxLayout->addWidget(cancelButton);

        saveButton = new QPushButton(UpdateViolationDialog);
        saveButton->setObjectName("saveButton");

        hboxLayout->addWidget(saveButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(UpdateViolationDialog);

        QMetaObject::connectSlotsByName(UpdateViolationDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateViolationDialog)
    {
        UpdateViolationDialog->setWindowTitle(QCoreApplication::translate("UpdateViolationDialog", "Update Traffic Violation", nullptr));
        titleLabel->setStyleSheet(QCoreApplication::translate("UpdateViolationDialog", "color: #b45309; font-size: 26px; font-weight: bold; padding: 20px;", nullptr));
        titleLabel->setText(QCoreApplication::translate("UpdateViolationDialog", "<h2>Update Violation Record</h2>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UpdateViolationDialog", "Edit Details", nullptr));
        numberlabel->setText(QCoreApplication::translate("UpdateViolationDialog", "Plate Number:", nullptr));
        violationlabel->setText(QCoreApplication::translate("UpdateViolationDialog", "Violation Type:", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("UpdateViolationDialog", "Speeding", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("UpdateViolationDialog", "Illegal Parking", nullptr));
        typeCombo->setItemText(2, QCoreApplication::translate("UpdateViolationDialog", "Red Light Violation", nullptr));
        typeCombo->setItemText(3, QCoreApplication::translate("UpdateViolationDialog", "Using Mobile Phone", nullptr));
        typeCombo->setItemText(4, QCoreApplication::translate("UpdateViolationDialog", "No Seatbelt", nullptr));
        typeCombo->setItemText(5, QCoreApplication::translate("UpdateViolationDialog", "Improper Lane Change", nullptr));

        locationlabel->setText(QCoreApplication::translate("UpdateViolationDialog", "Location:", nullptr));
        amountlabel->setText(QCoreApplication::translate("UpdateViolationDialog", "Fine Amount:", nullptr));
        fineSpinBox->setPrefix(QCoreApplication::translate("UpdateViolationDialog", "$ ", nullptr));
        cancelButton->setText(QCoreApplication::translate("UpdateViolationDialog", "Cancel", nullptr));
        saveButton->setText(QCoreApplication::translate("UpdateViolationDialog", "Update Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateViolationDialog: public Ui_UpdateViolationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEVIOLATIONDIALOG_H
