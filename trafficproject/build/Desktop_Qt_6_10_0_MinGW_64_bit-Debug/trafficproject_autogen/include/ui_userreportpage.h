/********************************************************************************
** Form generated from reading UI file 'userreportpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREPORTPAGE_H
#define UI_USERREPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserReportPage
{
public:
    QVBoxLayout *mainLayout;
    QLabel *title;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *createBtn;
    QPushButton *deleteBtn;
    QPushButton *updateBtn;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *searchBtn;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QTableView *tableView;
    QLabel *infoLabel;

    void setupUi(QWidget *UserReportPage)
    {
        if (UserReportPage->objectName().isEmpty())
            UserReportPage->setObjectName("UserReportPage");
        UserReportPage->resize(1064, 700);
        UserReportPage->setMinimumSize(QSize(1064, 700));
        UserReportPage->setMaximumSize(QSize(1064, 720));
        UserReportPage->setStyleSheet(QString::fromUtf8("\n"
"				QWidget { background:#f8fafc; font-family:'Segoe UI',Arial,sans-serif; }\n"
"\n"
"				/* Title with gradient text */\n"
"				QLabel#title {\n"
"				color:#1e293b;\n"
"				font-size:34px;\n"
"				font-weight:bold;\n"
"				padding:30px 0;\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"				stop:0 #3b82f6, stop:1 #6366f1);\n"
"				-webkit-background-clip: text;\n"
"				-webkit-text-fill-color: transparent;\n"
"				}\n"
"\n"
"				/* Action Buttons - Same style as PoliceDashboard */\n"
"				QPushButton {\n"
"				color:white;\n"
"				border:none;\n"
"				border-radius:12px;\n"
"				padding:14px 24px;\n"
"				font-weight:bold;\n"
"				font-size:15px;\n"
"				min-width:140px;\n"
"				}\n"
"\n"
"				QPushButton#createBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669); }\n"
"				QPushButton#updateBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #3b82f6, stop:1 #1d4ed8); }\n"
"				QPushButton#deleteBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y"
                        "2:0, stop:0 #ef4444, stop:1 #dc2626); }\n"
"				QPushButton#searchBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #f59e0b, stop:1 #d97706); }\n"
"\n"
"				QPushButton:hover {\n"
"				transform: translateY(-2px);\n"
"				box-shadow: 0 10px 20px rgba(0,0,0,0.15);\n"
"				}\n"
"\n"
"				QLineEdit#searchEdit {\n"
"				background:#ffffff;\n"
"				border:2px solid #e2e8f0;\n"
"				border-radius:12px;\n"
"				padding:14px 18px;\n"
"				font-size:15px;\n"
"				min-height:48px;\n"
"				}\n"
"				QLineEdit#searchEdit:focus { border-color:#3b82f6; }\n"
"\n"
"				QGroupBox {\n"
"				background:#ffffff;\n"
"				border:2.5px solid #e2e8f0;\n"
"				border-radius:18px;\n"
"				margin-top:20px;\n"
"				padding-top:25px;\n"
"				font-weight:bold;\n"
"				color:#475569;\n"
"				box-shadow: 0 12px 30px rgba(0,0,0,0.06);\n"
"				}\n"
"\n"
"				QGroupBox::title {\n"
"				subcontrol-origin: margin;\n"
"				subcontrol-position: top center;\n"
"				padding: 0 25px;\n"
"				background: #f8fafc;\n"
"				color: #64748b;\n"
""
                        "				font-size:16px;\n"
"				}\n"
"\n"
"				QTableView {\n"
"				background:#ffffff;\n"
"				border:2px solid #e2e8f0;\n"
"				border-radius:16px;\n"
"				font-size:15px;\n"
"				selection-background-color:#dbeafe;\n"
"				gridline-color:#f1f5f9;\n"
"				}\n"
"\n"
"				QHeaderView::section {\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"				stop:0 #1e40af, stop:1 #3b82f6);\n"
"				color:white;\n"
"				padding:18px;\n"
"				font-weight:bold;\n"
"				font-size:16px;\n"
"				border:none;\n"
"				text-transform:uppercase;\n"
"				letter-spacing:1px;\n"
"				}\n"
"\n"
"				QLabel#infoLabel {\n"
"				color:#64748b;\n"
"				font-size:15px;\n"
"				font-style:italic;\n"
"				padding:20px;\n"
"				}\n"
"			"));
        mainLayout = new QVBoxLayout(UserReportPage);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        title = new QLabel(UserReportPage);
        title->setObjectName("title");
        title->setMinimumSize(QSize(0, 130));
        title->setMaximumSize(QSize(16777215, 130));
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(title);

        frame_2 = new QFrame(UserReportPage);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 120));
        frame_2->setMaximumSize(QSize(16777215, 150));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        createBtn = new QPushButton(frame_2);
        createBtn->setObjectName("createBtn");
        createBtn->setMinimumSize(QSize(180, 60));
        createBtn->setMaximumSize(QSize(180, 60));

        horizontalLayout->addWidget(createBtn, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        deleteBtn = new QPushButton(frame_2);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setMinimumSize(QSize(180, 60));
        deleteBtn->setMaximumSize(QSize(180, 60));

        horizontalLayout->addWidget(deleteBtn, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        updateBtn = new QPushButton(frame_2);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setMinimumSize(QSize(180, 60));
        updateBtn->setMaximumSize(QSize(180, 60));

        horizontalLayout->addWidget(updateBtn, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchEdit = new QLineEdit(frame_2);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setEnabled(true);
        searchEdit->setMinimumSize(QSize(150, 50));
        searchEdit->setMaximumSize(QSize(150, 50));
        searchEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        searchEdit->setAutoFillBackground(false);
        searchEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(searchEdit, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        searchBtn = new QPushButton(frame_2);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setMinimumSize(QSize(100, 60));
        searchBtn->setMaximumSize(QSize(100, 60));
        searchBtn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout->addWidget(searchBtn, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        mainLayout->addWidget(frame_2);

        groupBox = new QGroupBox(UserReportPage);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 300));
        groupBox->setMaximumSize(QSize(16777215, 300));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName("vboxLayout");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(0, 200));
        tableView->setMaximumSize(QSize(16777215, 200));

        vboxLayout->addWidget(tableView);


        mainLayout->addWidget(groupBox);

        infoLabel = new QLabel(UserReportPage);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setMinimumSize(QSize(0, 80));
        infoLabel->setMaximumSize(QSize(16777215, 80));
        infoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(infoLabel, 0, Qt::AlignmentFlag::AlignBottom);


        retranslateUi(UserReportPage);

        QMetaObject::connectSlotsByName(UserReportPage);
    } // setupUi

    void retranslateUi(QWidget *UserReportPage)
    {
        title->setText(QCoreApplication::translate("UserReportPage", "My Reports", nullptr));
        createBtn->setText(QCoreApplication::translate("UserReportPage", "Create New Report", nullptr));
        deleteBtn->setText(QCoreApplication::translate("UserReportPage", "Delete Selected", nullptr));
        updateBtn->setText(QCoreApplication::translate("UserReportPage", "Update Report", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("UserReportPage", "Search by plate, subject, or status...", nullptr));
        searchBtn->setText(QCoreApplication::translate("UserReportPage", "Search", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UserReportPage", "My Submitted Reports", nullptr));
        infoLabel->setText(QCoreApplication::translate("UserReportPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-style:italic;\">You can create, update, or delete your reports before they are processed by officers.</span></p></body></html>", nullptr));
        (void)UserReportPage;
    } // retranslateUi

};

namespace Ui {
    class UserReportPage: public Ui_UserReportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREPORTPAGE_H
