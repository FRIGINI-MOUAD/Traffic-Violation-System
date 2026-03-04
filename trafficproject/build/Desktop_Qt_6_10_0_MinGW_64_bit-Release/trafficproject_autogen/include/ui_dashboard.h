/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *sidebar;
    QVBoxLayout *sidebarLayout;
    QPushButton *logoButton;
    QPushButton *dashboardBtn;
    QPushButton *reportBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *logoutButton;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1200, 800);
        Dashboard->setStyleSheet(QString::fromUtf8("\n"
"				/* Main Window */\n"
"				QMainWindow {\n"
"				background: #f8fafc;\n"
"				font-family: 'Segoe UI', Arial, sans-serif;\n"
"				}\n"
"\n"
"				/* Sidebar Styling */\n"
"				QFrame#sidebar {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #1e293b, stop:1 #0f172a);\n"
"				border: none;\n"
"				}\n"
"\n"
"				QPushButton {\n"
"				background: transparent;\n"
"				color: #cbd5e1;\n"
"				border: none;\n"
"				border-radius: 8px;\n"
"				padding: 12px 15px;\n"
"				margin: 4px 8px;\n"
"				text-align: left;\n"
"				font-size: 14px;\n"
"				font-weight: normal;\n"
"				}\n"
"\n"
"				QPushButton:hover {\n"
"				background: #334155;\n"
"				color: #ffffff;\n"
"				}\n"
"\n"
"				QPushButton:pressed {\n"
"				background: #3b82f6;\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"logoButton\"] {\n"
"				background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"				stop:0 #3b82f6, stop:1 #1d4ed8);\n"
"				color: white;\n"
"				font-size: 18px;\n"
"				font-weight: bold;\n"
"				text-ali"
                        "gn: center;\n"
"				padding: 15px;\n"
"				margin: 10px 8px;\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"logoutButton\"] {\n"
"				background: #dc2626;\n"
"				color: white;\n"
"				margin-top: auto;\n"
"				}\n"
"\n"
"				QPushButton[objectName=\"logoutButton\"]:hover {\n"
"				background: #b91c1c;\n"
"				}\n"
"\n"
"				/* Remove the overly broad QWidget rule - it was breaking child widgets */\n"
"				/* Instead, only style the centralwidget specifically */\n"
"				QWidget#centralwidget {\n"
"				background: #ffffff;\n"
"				}\n"
"\n"
"				QLabel {\n"
"				color: #1e293b;\n"
"				font-size: 24px;\n"
"				font-weight: bold;\n"
"				padding: 20px;\n"
"				}\n"
"			"));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(250, 0));
        sidebar->setMaximumSize(QSize(280, 16777215));
        sidebarLayout = new QVBoxLayout(sidebar);
        sidebarLayout->setObjectName("sidebarLayout");
        logoButton = new QPushButton(sidebar);
        logoButton->setObjectName("logoButton");

        sidebarLayout->addWidget(logoButton, 0, Qt::AlignmentFlag::AlignHCenter);

        dashboardBtn = new QPushButton(sidebar);
        dashboardBtn->setObjectName("dashboardBtn");
        dashboardBtn->setCheckable(true);

        sidebarLayout->addWidget(dashboardBtn);

        reportBtn = new QPushButton(sidebar);
        reportBtn->setObjectName("reportBtn");
        reportBtn->setStyleSheet(QString::fromUtf8("\n"
"											QPushButton:checked {\n"
"											background: #3b82f6;\n"
"											color: white;\n"
"											font-weight: bold;\n"
"											}\n"
"										"));
        reportBtn->setCheckable(true);

        sidebarLayout->addWidget(reportBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout->addItem(verticalSpacer);

        logoutButton = new QPushButton(sidebar);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setMinimumSize(QSize(0, 0));
        logoutButton->setMaximumSize(QSize(16777215, 100));

        sidebarLayout->addWidget(logoutButton, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(sidebar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");

        horizontalLayout->addWidget(stackedWidget);

        Dashboard->setCentralWidget(centralwidget);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Traffic Violation Management System", nullptr));
        logoButton->setText(QCoreApplication::translate("Dashboard", "\360\237\233\241\357\270\217 TVM System", nullptr));
        dashboardBtn->setText(QCoreApplication::translate("Dashboard", "\360\237\223\212 Dashboard", nullptr));
        reportBtn->setText(QCoreApplication::translate("Dashboard", "\360\237\223\210 Report", nullptr));
        logoutButton->setText(QCoreApplication::translate("Dashboard", "\342\254\205 Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
