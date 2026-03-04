/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *loginCard;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *titleLabel;
    QTabWidget *loginTabs;
    QWidget *loginTab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QLabel *usernameLabel;
    QLineEdit *usernameTextBox;
    QLabel *passwordLabel;
    QLineEdit *passwordBox;
    QLabel *forgotPasswordLabel;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QWidget *signupTab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *nationalIdLabel;
    QLineEdit *signupNationalIdTextBox;
    QSpacerItem *verticalSpacer_8;
    QLabel *phoneLabel;
    QLineEdit *signupPhoneTextBox;
    QSpacerItem *verticalSpacer_7;
    QLabel *emailLabel;
    QLineEdit *signupEmailTextBox;
    QSpacerItem *verticalSpacer_6;
    QLabel *signupPasswordLabel;
    QLineEdit *signupPasswordBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *confirmPasswordLabel;
    QLineEdit *signupConfirmPasswordBox;
    QSpacerItem *verticalSpacer_9;
    QPushButton *signupButton;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(400, 700);
        LoginWindow->setMinimumSize(QSize(400, 700));
        LoginWindow->setMaximumSize(QSize(400, 930));
        LoginWindow->setStyleSheet(QString::fromUtf8("\n"
"				/* Main Window Styling */\n"
"				QMainWindow {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"				stop:0 #1e3c72, stop:0.5 #2a5298, stop:1 #1e3c72);\n"
"				border-radius: 12px;\n"
"				}\n"
"\n"
"				/* Login Card Styling */\n"
"				QFrame#loginCard {\n"
"				background: rgba(255, 255, 255, 0.95);\n"
"				border-radius: 15px;\n"
"				border: 1px solid #e2e8f0;\n"
"				padding: 20px;\n"
"				}\n"
"\n"
"				/* Label Styling */\n"
"				QLabel {\n"
"				color: #2d3748;\n"
"				font-family: 'Segoe UI', Arial, sans-serif;\n"
"				font-size: 14px;\n"
"				}\n"
"\n"
"				QLabel[objectName=\"titleLabel\"] {\n"
"				font-size: 24px;\n"
"				font-weight: bold;\n"
"				color: #1e293b;\n"
"				padding: 10px 0px;\n"
"				}\n"
"\n"
"				QLabel[objectName=\"logoLabel\"] {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"				stop:0 #3b82f6, stop:1 #1d4ed8);\n"
"				border-radius: 20px;\n"
"				font-size: 40px;\n"
"				color: white;\n"
"				}\n"
"\n"
"				/* Input Field Styling */\n"
""
                        "				QLineEdit {\n"
"				background: #f8fafc;\n"
"				border: 2px solid #e2e8f0;\n"
"				border-radius: 8px;\n"
"				padding: 12px 15px;\n"
"				font-size: 14px;\n"
"				color: #2d3748;\n"
"				font-family: 'Segoe UI', Arial, sans-serif;\n"
"				selection-background-color: #3b82f6;\n"
"				}\n"
"\n"
"				QLineEdit:focus {\n"
"				border-color: #3b82f6;\n"
"				background: #ffffff;\n"
"				outline: none;\n"
"				}\n"
"\n"
"				QLineEdit:placeholder {\n"
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
"				padding: 14px;\n"
"				font-weight: bold;\n"
"				font-size: 14px;\n"
"				font-family: 'Segoe UI', Arial, sans-serif;\n"
"				}\n"
"\n"
"				QPushButton:hover {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #2563eb, stop:1 #1e40af);\n"
"				}\n"
""
                        "\n"
"				QPushButton:pressed {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #1e40af, stop:1 #1e3a8a);\n"
"				}\n"
"\n"
"				/* Tab Widget Styling */\n"
"				QTabWidget::pane {\n"
"				border: none;\n"
"				background: transparent;\n"
"				margin-top: 10px;\n"
"				}\n"
"\n"
"				QTabWidget::tab-bar {\n"
"				alignment: center;\n"
"				}\n"
"\n"
"				QTabBar::tab {\n"
"				background: transparent;\n"
"				color: #64748b;\n"
"				padding: 12px 24px;\n"
"				margin: 0 2px;\n"
"				border-bottom: 3px solid transparent;\n"
"				font-weight: bold;\n"
"				font-size: 14px;\n"
"				min-width: 100px;\n"
"				}\n"
"\n"
"				QTabBar::tab:selected {\n"
"				color: #3b82f6;\n"
"				border-bottom: 3px solid #3b82f6;\n"
"				background: rgba(59, 130, 246, 0.1);\n"
"				}\n"
"\n"
"				QTabBar::tab:hover:!selected {\n"
"				background: rgba(59, 130, 246, 0.05);\n"
"				color: #475569;\n"
"				}\n"
"\n"
"				/* Link Label Styling */\n"
"				QLabel[objectName=\"forgotPasswordLabel\"] {\n"
"				colo"
                        "r: #3b82f6;\n"
"				font-size: 13px;\n"
"				}\n"
"\n"
"				QLabel[objectName=\"forgotPasswordLabel\"]:hover {\n"
"				color: #2563eb;\n"
"				text-decoration: underline;\n"
"				}\n"
"\n"
"				/* Footer Label */\n"
"				QLabel[objectName=\"label\"] {\n"
"				color: #64748b;\n"
"				font-size: 12px;\n"
"				font-style: italic;\n"
"				}\n"
"			"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        loginCard = new QFrame(centralwidget);
        loginCard->setObjectName("loginCard");
        loginCard->setMinimumSize(QSize(380, 400));
        loginCard->setMaximumSize(QSize(400, 690));
        verticalLayout_2 = new QVBoxLayout(loginCard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        titleLabel = new QLabel(loginCard);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(0, 100));
        titleLabel->setMaximumSize(QSize(16777215, 100));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(titleLabel);

        loginTabs = new QTabWidget(loginCard);
        loginTabs->setObjectName("loginTabs");
        loginTab = new QWidget();
        loginTab->setObjectName("loginTab");
        verticalLayout_3 = new QVBoxLayout(loginTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        usernameLabel = new QLabel(loginTab);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(usernameLabel);

        usernameTextBox = new QLineEdit(loginTab);
        usernameTextBox->setObjectName("usernameTextBox");
        usernameTextBox->setMinimumSize(QSize(0, 42));

        verticalLayout_6->addWidget(usernameTextBox);

        passwordLabel = new QLabel(loginTab);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(passwordLabel);

        passwordBox = new QLineEdit(loginTab);
        passwordBox->setObjectName("passwordBox");
        passwordBox->setMinimumSize(QSize(0, 42));
        passwordBox->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_6->addWidget(passwordBox);

        forgotPasswordLabel = new QLabel(loginTab);
        forgotPasswordLabel->setObjectName("forgotPasswordLabel");
        forgotPasswordLabel->setMaximumSize(QSize(16777215, 20));
        forgotPasswordLabel->setAlignment(Qt::AlignmentFlag::AlignRight);

        verticalLayout_6->addWidget(forgotPasswordLabel);

        loginButton = new QPushButton(loginTab);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(0, 48));

        verticalLayout_6->addWidget(loginButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        label = new QLabel(loginTab);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        verticalLayout_3->addLayout(verticalLayout_6);

        loginTabs->addTab(loginTab, QString());
        signupTab = new QWidget();
        signupTab->setObjectName("signupTab");
        verticalLayout_4 = new QVBoxLayout(signupTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        nationalIdLabel = new QLabel(signupTab);
        nationalIdLabel->setObjectName("nationalIdLabel");
        nationalIdLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(nationalIdLabel);

        signupNationalIdTextBox = new QLineEdit(signupTab);
        signupNationalIdTextBox->setObjectName("signupNationalIdTextBox");
        signupNationalIdTextBox->setMinimumSize(QSize(0, 46));
        signupNationalIdTextBox->setMaximumSize(QSize(16777215, 46));

        verticalLayout_5->addWidget(signupNationalIdTextBox);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_8);

        phoneLabel = new QLabel(signupTab);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(phoneLabel);

        signupPhoneTextBox = new QLineEdit(signupTab);
        signupPhoneTextBox->setObjectName("signupPhoneTextBox");
        signupPhoneTextBox->setMinimumSize(QSize(0, 46));
        signupPhoneTextBox->setMaximumSize(QSize(16777215, 46));

        verticalLayout_5->addWidget(signupPhoneTextBox);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_7);

        emailLabel = new QLabel(signupTab);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(emailLabel);

        signupEmailTextBox = new QLineEdit(signupTab);
        signupEmailTextBox->setObjectName("signupEmailTextBox");
        signupEmailTextBox->setMinimumSize(QSize(0, 46));
        signupEmailTextBox->setMaximumSize(QSize(16777215, 46));

        verticalLayout_5->addWidget(signupEmailTextBox);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        signupPasswordLabel = new QLabel(signupTab);
        signupPasswordLabel->setObjectName("signupPasswordLabel");
        signupPasswordLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(signupPasswordLabel);

        signupPasswordBox = new QLineEdit(signupTab);
        signupPasswordBox->setObjectName("signupPasswordBox");
        signupPasswordBox->setMinimumSize(QSize(0, 46));
        signupPasswordBox->setMaximumSize(QSize(16777215, 46));
        signupPasswordBox->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_5->addWidget(signupPasswordBox);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_5);

        confirmPasswordLabel = new QLabel(signupTab);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(confirmPasswordLabel);

        signupConfirmPasswordBox = new QLineEdit(signupTab);
        signupConfirmPasswordBox->setObjectName("signupConfirmPasswordBox");
        signupConfirmPasswordBox->setMinimumSize(QSize(0, 46));
        signupConfirmPasswordBox->setMaximumSize(QSize(16777215, 46));
        signupConfirmPasswordBox->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_5->addWidget(signupConfirmPasswordBox);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_9);

        signupButton = new QPushButton(signupTab);
        signupButton->setObjectName("signupButton");
        signupButton->setMinimumSize(QSize(0, 45));

        verticalLayout_5->addWidget(signupButton);

        verticalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);


        verticalLayout_4->addLayout(verticalLayout_5);

        loginTabs->addTab(signupTab, QString());

        verticalLayout_2->addWidget(loginTabs);


        verticalLayout->addWidget(loginCard);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        loginTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Traffic Violation Management System - Login", nullptr));
        titleLabel->setText(QCoreApplication::translate("LoginWindow", "\n"
"											<html><head/><body>\n"
"											<p style=\"margin: 10px 0px;\">Traffic Violation</p>\n"
"											<p style=\"font-size: 16px; color: #64748b; margin: 5px 0px;\">Management System</p>\n"
"											</body></html>\n"
"										", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginWindow", "Email", nullptr));
        usernameTextBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        passwordBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your password", nullptr));
        forgotPasswordLabel->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><a href=\"#\">Forgot Password?</a></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Secure Access \342\200\242 Traffic Management", nullptr));
        loginTabs->setTabText(loginTabs->indexOf(loginTab), QCoreApplication::translate("LoginWindow", "Login", nullptr));
        nationalIdLabel->setText(QCoreApplication::translate("LoginWindow", "National ID", nullptr));
        signupNationalIdTextBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your national ID", nullptr));
        phoneLabel->setText(QCoreApplication::translate("LoginWindow", "Phone Number", nullptr));
        signupPhoneTextBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your phone number", nullptr));
        emailLabel->setText(QCoreApplication::translate("LoginWindow", "Email", nullptr));
        signupEmailTextBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your email address", nullptr));
        signupPasswordLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        signupPasswordBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Create a password", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("LoginWindow", "Confirm Password", nullptr));
        signupConfirmPasswordBox->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Confirm your password", nullptr));
        signupButton->setText(QCoreApplication::translate("LoginWindow", "Create Account", nullptr));
        loginTabs->setTabText(loginTabs->indexOf(signupTab), QCoreApplication::translate("LoginWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
