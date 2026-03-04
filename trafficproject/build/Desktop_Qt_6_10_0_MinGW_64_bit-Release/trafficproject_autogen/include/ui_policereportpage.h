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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PoliceReportPage
{
public:
    QVBoxLayout *mainLayout;
    QLabel *title;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *approveBtn;
    QPushButton *rejectBtn;
    QLineEdit *searchEdit;
    QPushButton *searchBtn;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QTableView *tableView;

    void setupUi(QWidget *PoliceReportPage)
    {
        if (PoliceReportPage->objectName().isEmpty())
            PoliceReportPage->setObjectName("PoliceReportPage");
        PoliceReportPage->resize(1100, 700);
        PoliceReportPage->setMinimumSize(QSize(0, 0));
        PoliceReportPage->setMaximumSize(QSize(1100, 700));
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
"				background-color: #f8fafc;\n"
"				color: #1e293b;\n"
"				padding: 12px 8px;\n"
"				font-weight: bold;\n"
"				font-size: 14px;\n"
"				border: none;\n"
"				border-bottom: 2px solid #cbd5e1;\n"
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
        mainLayout->setContentsMargins(-1, -1, 20, -1);
        title = new QLabel(PoliceReportPage);
        title->setObjectName("title");
        title->setMaximumSize(QSize(16777215, 120));
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(title);

        frame = new QFrame(PoliceReportPage);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 100));
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        approveBtn = new QPushButton(frame);
        approveBtn->setObjectName("approveBtn");

        horizontalLayout->addWidget(approveBtn, 0, Qt::AlignmentFlag::AlignVCenter);

        rejectBtn = new QPushButton(frame);
        rejectBtn->setObjectName("rejectBtn");

        horizontalLayout->addWidget(rejectBtn);

        searchEdit = new QLineEdit(frame);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setMinimumSize(QSize(0, 82));
        searchEdit->setMaximumSize(QSize(16777215, 55));

        horizontalLayout->addWidget(searchEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        searchBtn = new QPushButton(frame);
        searchBtn->setObjectName("searchBtn");

        horizontalLayout->addWidget(searchBtn);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        mainLayout->addWidget(frame);

        frame_2 = new QFrame(PoliceReportPage);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        tableView = new QTableView(frame_2);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(1046, 440));
        tableView->setMaximumSize(QSize(1046, 440));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableView->setAutoScroll(true);
        tableView->setAutoScrollMargin(5);
        tableView->setGridStyle(Qt::PenStyle::SolidLine);

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        mainLayout->addWidget(frame_2);


        retranslateUi(PoliceReportPage);

        QMetaObject::connectSlotsByName(PoliceReportPage);
    } // setupUi

    void retranslateUi(QWidget *PoliceReportPage)
    {
        title->setText(QCoreApplication::translate("PoliceReportPage", "Citizen Reports \342\200\242 Review and Process", nullptr));
        approveBtn->setText(QCoreApplication::translate("PoliceReportPage", "Approve", nullptr));
        rejectBtn->setText(QCoreApplication::translate("PoliceReportPage", "Reject", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("PoliceReportPage", "Search by plate, citizen name, subject...", nullptr));
        searchBtn->setText(QCoreApplication::translate("PoliceReportPage", "Search", nullptr));
        (void)PoliceReportPage;
    } // retranslateUi

};

namespace Ui {
    class PoliceReportPage: public Ui_PoliceReportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICEREPORTPAGE_H
