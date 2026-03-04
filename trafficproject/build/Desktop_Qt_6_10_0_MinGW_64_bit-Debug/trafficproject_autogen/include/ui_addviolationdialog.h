/********************************************************************************
** Form generated from reading UI file 'addviolationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVIOLATIONDIALOG_H
#define UI_ADDVIOLATIONDIALOG_H

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

class Ui_AddViolationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *titleLabel;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_plate;
    QLineEdit *plateEdit;
    QLabel *label_type;
    QComboBox *userCombo;
    QLabel *label_location;
    QLineEdit *locationEdit;
    QLabel *label_fine;
    QDoubleSpinBox *fineSpinBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    void setupUi(QDialog *AddViolationDialog)
    {
        if (AddViolationDialog->objectName().isEmpty())
            AddViolationDialog->setObjectName("AddViolationDialog");
        AddViolationDialog->resize(586, 600);
        AddViolationDialog->setStyleSheet(QString::fromUtf8("\n"
"				QDialog { background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f0f9ff, stop:1 #e0f2fe); }\n"
"				QLabel { color: #1e40af; font-weight: bold; font-size: 16px; }\n"
"				QLineEdit, QComboBox, QDoubleSpinBox {\n"
"				padding: 14px;\n"
"				border: 2px solid #bae6fd;\n"
"				border-radius: 12px;\n"
"				font-size: 16px;\n"
"				background: white;\n"
"				}\n"
"				QLineEdit:focus, QComboBox:focus, QDoubleSpinBox:focus { border-color: #0ea5e9; }\n"
"				QPushButton#saveButton {\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669);\n"
"				color: white; font-weight: bold; font-size: 16px; padding: 14px; border-radius: 12px;\n"
"				}\n"
"				QPushButton#cancelButton {\n"
"				background: #e2e8f0; color: #475569; font-weight: bold; font-size: 16px; padding: 14px; border-radius: 12px;\n"
"				}\n"
"			"));
        AddViolationDialog->setModal(true);
        vboxLayout = new QVBoxLayout(AddViolationDialog);
        vboxLayout->setObjectName("vboxLayout");
        titleLabel = new QLabel(AddViolationDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout->addWidget(titleLabel);

        groupBox = new QGroupBox(AddViolationDialog);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label_plate = new QLabel(groupBox);
        label_plate->setObjectName("label_plate");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_plate);

        plateEdit = new QLineEdit(groupBox);
        plateEdit->setObjectName("plateEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, plateEdit);

        label_type = new QLabel(groupBox);
        label_type->setObjectName("label_type");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_type);

        userCombo = new QComboBox(groupBox);
        userCombo->addItem(QString());
        userCombo->addItem(QString());
        userCombo->addItem(QString());
        userCombo->addItem(QString());
        userCombo->addItem(QString());
        userCombo->addItem(QString());
        userCombo->setObjectName("userCombo");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, userCombo);

        label_location = new QLabel(groupBox);
        label_location->setObjectName("label_location");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_location);

        locationEdit = new QLineEdit(groupBox);
        locationEdit->setObjectName("locationEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, locationEdit);

        label_fine = new QLabel(groupBox);
        label_fine->setObjectName("label_fine");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_fine);

        fineSpinBox = new QDoubleSpinBox(groupBox);
        fineSpinBox->setObjectName("fineSpinBox");
        fineSpinBox->setMinimum(100.000000000000000);
        fineSpinBox->setMaximum(2000.000000000000000);
        fineSpinBox->setSingleStep(50.000000000000000);
        fineSpinBox->setValue(150.000000000000000);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, fineSpinBox);


        vboxLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(AddViolationDialog);
        cancelButton->setObjectName("cancelButton");

        hboxLayout->addWidget(cancelButton);

        saveButton = new QPushButton(AddViolationDialog);
        saveButton->setObjectName("saveButton");

        hboxLayout->addWidget(saveButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(AddViolationDialog);

        QMetaObject::connectSlotsByName(AddViolationDialog);
    } // setupUi

    void retranslateUi(QDialog *AddViolationDialog)
    {
        AddViolationDialog->setWindowTitle(QCoreApplication::translate("AddViolationDialog", "Add New Traffic Violation", nullptr));
        titleLabel->setStyleSheet(QCoreApplication::translate("AddViolationDialog", "color: #1e40af; font-size: 26px; font-weight: bold; padding: 20px;", nullptr));
        titleLabel->setText(QCoreApplication::translate("AddViolationDialog", "<h2>Record New Traffic Violation</h2>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddViolationDialog", "Violation Details", nullptr));
        label_plate->setText(QCoreApplication::translate("AddViolationDialog", "Plate Number:", nullptr));
        plateEdit->setInputMask(QCoreApplication::translate("AddViolationDialog", ">AAAA9999", nullptr));
        plateEdit->setPlaceholderText(QCoreApplication::translate("AddViolationDialog", "AB1234", nullptr));
        label_type->setText(QCoreApplication::translate("AddViolationDialog", "Violation Type:", nullptr));
        userCombo->setItemText(0, QCoreApplication::translate("AddViolationDialog", "Speeding", nullptr));
        userCombo->setItemText(1, QCoreApplication::translate("AddViolationDialog", "Illegal Parking", nullptr));
        userCombo->setItemText(2, QCoreApplication::translate("AddViolationDialog", "Red Light Violation", nullptr));
        userCombo->setItemText(3, QCoreApplication::translate("AddViolationDialog", "Using Mobile Phone", nullptr));
        userCombo->setItemText(4, QCoreApplication::translate("AddViolationDialog", "No Seatbelt", nullptr));
        userCombo->setItemText(5, QCoreApplication::translate("AddViolationDialog", "Improper Lane Change", nullptr));

        label_location->setText(QCoreApplication::translate("AddViolationDialog", "Location:", nullptr));
        locationEdit->setPlaceholderText(QCoreApplication::translate("AddViolationDialog", "e.g. Nathan Road, Tsim Sha Tsui", nullptr));
        label_fine->setText(QCoreApplication::translate("AddViolationDialog", "Fine Amount:", nullptr));
        fineSpinBox->setPrefix(QCoreApplication::translate("AddViolationDialog", "$ ", nullptr));
        fineSpinBox->setSuffix(QCoreApplication::translate("AddViolationDialog", " .00", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddViolationDialog", "Cancel", nullptr));
        saveButton->setText(QCoreApplication::translate("AddViolationDialog", "Add Violation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddViolationDialog: public Ui_AddViolationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVIOLATIONDIALOG_H
