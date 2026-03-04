/********************************************************************************
** Form generated from reading UI file 'resetpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORD_H
#define UI_RESETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResetPassword
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QVBoxLayout *mainLayout;
    QLabel *label;
    QLabel *instructionLabel;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *buttonLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ResetPassword)
    {
        if (ResetPassword->objectName().isEmpty())
            ResetPassword->setObjectName("ResetPassword");
        ResetPassword->resize(450, 300);
        ResetPassword->setStyleSheet(QString::fromUtf8("\n"
"				/* Main Widget */\n"
"				QWidget {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"				stop:0 #1e3c72, stop:0.5 #2a5298, stop:1 #1e3c72);\n"
"				font-family: 'Segoe UI', Arial, sans-serif;\n"
"				}\n"
"\n"
"				/* Frame Styling */\n"
"				QFrame {\n"
"				background: rgba(255, 255, 255, 0.95);\n"
"				border: 1px solid #e2e8f0;\n"
"				border-radius: 12px;\n"
"				padding: 20px;\n"
"				}\n"
"\n"
"				/* Label Styling */\n"
"				QLabel {\n"
"				color: #1e293b;\n"
"				font-size: 14px;\n"
"				}\n"
"\n"
"				QLabel[objectName=\"label\"] {\n"
"				font-size: 18px;\n"
"				font-weight: bold;\n"
"				color: #1e293b;\n"
"				padding: 10px 0px;\n"
"				}\n"
"\n"
"				/* Input Field */\n"
"				QLineEdit {\n"
"				background: #f8fafc;\n"
"				border: 2px solid #e2e8f0;\n"
"				border-radius: 8px;\n"
"				padding: 12px 15px;\n"
"				font-size: 14px;\n"
"				color: #2d3748;\n"
"				min-height: 40px;\n"
"				}\n"
"\n"
"				QLineEdit:focus {\n"
"				border-color: #3b82f6;\n"
"				background: #"
                        "ffffff;\n"
"				}\n"
"\n"
"				QLineEdit::placeholder {\n"
"				color: #94a3b8;\n"
"				font-style: italic;\n"
"				}\n"
"\n"
"				/* Button Styling */\n"
"				QPushButton {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #3b82f6, stop:1 #1d4ed8);\n"
"				color: white;\n"
"				border: none;\n"
"				border-radius: 8px;\n"
"				padding: 12px 20px;\n"
"				font-weight: bold;\n"
"				font-size: 14px;\n"
"				min-width: 80px;\n"
"				}\n"
"\n"
"				QPushButton:hover {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #2563eb, stop:1 #1e40af);\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"pushButton\"] {\n"
"				background: #64748b;\n"
"				color: white;\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"pushButton\"]:hover {\n"
"				background: #475569;\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"pushButton_2\"] {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #10b981, stop:1 #059669);\n"
"				}\n"
"\n"
"				QPushButton[objectName=\""
                        "pushButton_2\"]:hover {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #059669, stop:1 #047857);\n"
"				}\n"
"			"));
        gridLayout = new QGridLayout(ResetPassword);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(ResetPassword);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        mainLayout = new QVBoxLayout(frame);
        mainLayout->setObjectName("mainLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(label);

        instructionLabel = new QLabel(frame);
        instructionLabel->setObjectName("instructionLabel");
        instructionLabel->setStyleSheet(QString::fromUtf8("\n"
"													QLabel {\n"
"													color: #64748b;\n"
"													font-size: 13px;\n"
"													text-align: center;\n"
"													padding: 5px 0px 15px 0px;\n"
"													}\n"
"												"));
        instructionLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(instructionLabel);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        mainLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(verticalSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        buttonLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        buttonLayout->addWidget(pushButton_2);


        mainLayout->addLayout(buttonLayout);


        gridLayout_2->addWidget(frame, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(ResetPassword);

        QMetaObject::connectSlotsByName(ResetPassword);
    } // setupUi

    void retranslateUi(QWidget *ResetPassword)
    {
        ResetPassword->setWindowTitle(QCoreApplication::translate("ResetPassword", "Reset Password - TVM System", nullptr));
        label->setText(QCoreApplication::translate("ResetPassword", "\360\237\224\220 Reset Your Password", nullptr));
        instructionLabel->setText(QCoreApplication::translate("ResetPassword", "Enter your email address and we'll send you a password reset link.", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ResetPassword", "Enter your email address", nullptr));
        pushButton->setText(QCoreApplication::translate("ResetPassword", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ResetPassword", "Send Reset Link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetPassword: public Ui_ResetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H
