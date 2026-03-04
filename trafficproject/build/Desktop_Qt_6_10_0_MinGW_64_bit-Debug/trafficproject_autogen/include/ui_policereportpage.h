/********************************************************************************
** Form generated from reading UI file 'policereportpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICEREPORTPAGE_H
#define UI_POLICEREPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_PoliceReportPage
{
public:
    QVBoxLayout *mainLayout;
    QLabel *title;
    QHBoxLayout *actionBar;
    QPushButton *reviewBtn;
    QPushButton *approveBtn;
    QPushButton *rejectBtn;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchEdit;
    QPushButton *searchBtn;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QTableView *tableView;
    QLabel *infoLabel;

    void setupUi(QWidget *PoliceReportPage)
    {
        if (PoliceReportPage->objectName().isEmpty())
            PoliceReportPage->setObjectName("PoliceReportPage");
        PoliceReportPage->resize(1200, 891);
        PoliceReportPage->setStyleSheet(QString::fromUtf8("\n"
"				QWidget { background:#f8fafc; font-family:'Segoe UI',Arial,sans-serif; }\n"
"\n"
"				/* Official Police Title - Red Authority */\n"
"				QLabel#title {\n"
"				color:#1e293b;\n"
"				font-size:34px;\n"
"				font-weight:bold;\n"
"				padding:30px 0;\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"				stop:0 #dc2626, stop:1 #ef4444);\n"
"				-webkit-background-clip: text;\n"
"				-webkit-text-fill-color: transparent;\n"
"				}\n"
"\n"
"				/* Police Action Buttons - Same as PoliceDashboard */\n"
"				QPushButton {\n"
"				color:white;\n"
"				border:none;\n"
"				border-radius:12px;\n"
"				padding:14px 26px;\n"
"				font-weight:bold;\n"
"				font-size:15px;\n"
"				min-width:160px;\n"
"				}\n"
"\n"
"				QPushButton#reviewBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #f59e0b, stop:1 #d97706); }\n"
"				QPushButton#approveBtn  { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669); }\n"
"				QPushButton#rejectBtn   { background:qlineargradient(x1"
                        ":0,y1:0,x2:1,y2:0, stop:0 #ef4444, stop:1 #dc2626); }\n"
"				QPushButton#searchBtn   { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #3b82f6, stop:1 #1d4ed8); }\n"
"\n"
"				QPushButton:hover {\n"
"				transform: translateY(-3px);\n"
"				box-shadow: 0 15px 30px rgba(0,0,0,0.2);\n"
"				}\n"
"\n"
"				QLineEdit#searchEdit {\n"
"				background:#ffffff;\n"
"				border:2px solid #e2e8f0;\n"
"				border-radius:12px;\n"
"				padding:14px 20px;\n"
"				font-size:15px;\n"
"				min-height:50px;\n"
"				}\n"
"				QLineEdit#searchEdit:focus { border-color:#dc2626; }\n"
"\n"
"				QGroupBox {\n"
"				background:#ffffff;\n"
"				border:3px solid #fee2e2;\n"
"				border-radius:20px;\n"
"				margin-top:20px;\n"
"				padding-top:28px;\n"
"				font-weight:bold;\n"
"				color:#991b1b;\n"
"				box-shadow: 0 15px 35px rgba(220,38,38,0.1);\n"
"				}\n"
"\n"
"				QGroupBox::title {\n"
"				subcontrol-origin: margin;\n"
"				subcontrol-position: top center;\n"
"				padding: 0 30px;\n"
"				background: #f8fafc;\n"
"				colo"
                        "r: #dc2626;\n"
"				font-size:17px;\n"
"				font-weight:bold;\n"
"				}\n"
"\n"
"				QTableView {\n"
"				background:#ffffff;\n"
"				border:2px solid #fee2e2;\n"
"				border-radius:16px;\n"
"				font-size:15px;\n"
"				selection-background-color:#fecaca;\n"
"				gridline-color:#fee2e2;\n"
"				}\n"
"\n"
"				QHeaderView::section {\n"
"				background: qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"				stop:0 #991b1b, stop:1 #dc2626);\n"
"				color:white;\n"
"				padding:20px;\n"
"				font-weight:bold;\n"
"				font-size:17px;\n"
"				border:none;\n"
"				text-transform:uppercase;\n"
"				letter-spacing:1.5px;\n"
"				}\n"
"\n"
"				QLabel#infoLabel {\n"
"				color:#991b1b;\n"
"				font-size:16px;\n"
"				font-weight:600;\n"
"				padding:25px;\n"
"				background:#fef2f2;\n"
"				border-radius:12px;\n"
"				border:1px solid #fecaca;\n"
"				}\n"
"			"));
        mainLayout = new QVBoxLayout(PoliceReportPage);
        mainLayout->setObjectName("mainLayout");
        title = new QLabel(PoliceReportPage);
        title->setObjectName("title");
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(title);

        actionBar = new QHBoxLayout();
        actionBar->setObjectName("actionBar");
        actionBar->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        reviewBtn = new QPushButton(PoliceReportPage);
        reviewBtn->setObjectName("reviewBtn");

        actionBar->addWidget(reviewBtn);

        approveBtn = new QPushButton(PoliceReportPage);
        approveBtn->setObjectName("approveBtn");

        actionBar->addWidget(approveBtn);

        rejectBtn = new QPushButton(PoliceReportPage);
        rejectBtn->setObjectName("rejectBtn");

        actionBar->addWidget(rejectBtn);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        actionBar->addItem(horizontalSpacer);

        searchEdit = new QLineEdit(PoliceReportPage);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setMinimumSize(QSize(0, 82));
        searchEdit->setMaximumSize(QSize(16777215, 55));

        actionBar->addWidget(searchEdit);

        searchBtn = new QPushButton(PoliceReportPage);
        searchBtn->setObjectName("searchBtn");

        actionBar->addWidget(searchBtn);


        mainLayout->addLayout(actionBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        mainLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(PoliceReportPage);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 600));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        vboxLayout->addWidget(tableView);

        infoLabel = new QLabel(groupBox);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout->addWidget(infoLabel);


        mainLayout->addWidget(groupBox);


        retranslateUi(PoliceReportPage);

        QMetaObject::connectSlotsByName(PoliceReportPage);
    } // setupUi

    void retranslateUi(QWidget *PoliceReportPage)
    {
        title->setText(QCoreApplication::translate("PoliceReportPage", "Citizen Reports \342\200\242 Review and Process", nullptr));
        reviewBtn->setText(QCoreApplication::translate("PoliceReportPage", "Review ", nullptr));
        approveBtn->setText(QCoreApplication::translate("PoliceReportPage", "Approve", nullptr));
        rejectBtn->setText(QCoreApplication::translate("PoliceReportPage", "Reject", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("PoliceReportPage", "Search by plate, citizen name, subject...", nullptr));
        searchBtn->setText(QCoreApplication::translate("PoliceReportPage", "Search", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PoliceReportPage", "All Citizen-Submitted Reports", nullptr));
        infoLabel->setText(QCoreApplication::translate("PoliceReportPage", "Only reports with status \"Pending\" can be processed. Approved reports will cancel related fines.", nullptr));
        (void)PoliceReportPage;
    } // retranslateUi

};

namespace Ui {
    class PoliceReportPage: public Ui_PoliceReportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICEREPORTPAGE_H
