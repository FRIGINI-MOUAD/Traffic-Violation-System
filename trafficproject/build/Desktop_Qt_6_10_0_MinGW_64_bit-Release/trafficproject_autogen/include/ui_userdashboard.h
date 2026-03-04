/********************************************************************************
** Form generated from reading UI file 'userdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDASHBOARD_H
#define UI_USERDASHBOARD_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDashboard
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *Titlelabel;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *payButton;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *totalBox;
    QVBoxLayout *vboxLayout;
    QLabel *totalLabel;
    QGroupBox *pendingBox;
    QVBoxLayout *vboxLayout1;
    QLabel *pendingLabel;
    QGroupBox *violationsTableBox;
    QVBoxLayout *vboxLayout2;
    QTableView *tableView;

    void setupUi(QWidget *UserDashboard)
    {
        if (UserDashboard->objectName().isEmpty())
            UserDashboard->setObjectName("UserDashboard");
        UserDashboard->resize(1064, 703);
        UserDashboard->setMinimumSize(QSize(0, 700));
        UserDashboard->setMaximumSize(QSize(16777215, 703));
        UserDashboard->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        UserDashboard->setStyleSheet(QString::fromUtf8("\n"
"    QWidget { background:#f8fafc; font-family:'Segoe UI',Arial,sans-serif; }\n"
"    QLabel#titleLabel { color:#1e293b; font-size:28px; font-weight:bold; padding:20px 0px; }\n"
"    QPushButton { background:qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"                      stop:0 #3b82f6, stop:1 #1d4ed8);\n"
"                  color:white; border:none; border-radius:8px;\n"
"                  padding:10px 15px; font-weight:bold; font-size:14px; min-width:80px; }\n"
"    QPushButton:hover { background:qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"                      stop:0 #2563eb, stop:1 #1e40af); }\n"
"    QLineEdit { background:#fff; border:2px solid #e2e8f0; border-radius:8px;\n"
"                padding:10px 15px; font-size:14px; color:#2d3748; min-height:40px; }\n"
"    QLineEdit:focus { border-color:#3b82f6; }\n"
"    QLineEdit::placeholder { color:#94a3b8; font-style:italic; }\n"
"    QGroupBox { background:qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"                stop:0 #fff, stop:1 #f8fafc);\n"
"        "
                        "        border:2px solid #e2e8f0; border-radius:12px;\n"
"                margin-top:10px; padding-top:15px; font-weight:bold; color:#475569; }\n"
"    QGroupBox::title { subcontrol-origin:margin; subcontrol-position:top center;\n"
"                       padding:0px 10px; background:transparent; color:#64748b; font-size:14px; }\n"
"    QLabel#totalLabel, QLabel#pendingLabel, QLabel#paidLabel {\n"
"        color:#3b82f6; font-size:32px; font-weight:bold; text-align:center; }\n"
"    QTableView { background:#fff; border:1px solid #e2e8f0; border-radius:8px; }\n"
"    QHeaderView::section { background:qlineargradient(x1:0,y1:0,x2:1,y2:0,\n"
"                stop:0 #1e293b, stop:1 #334155);\n"
"                color:white; padding:8px; font-weight:bold; }\n"
"   "));
        verticalLayout = new QVBoxLayout(UserDashboard);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        frame_2 = new QFrame(UserDashboard);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 100));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        Titlelabel = new QLabel(frame_2);
        Titlelabel->setObjectName("Titlelabel");
        Titlelabel->setMinimumSize(QSize(0, 70));
        Titlelabel->setMaximumSize(QSize(16777215, 70));

        verticalLayout_2->addWidget(Titlelabel);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(UserDashboard);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 95));
        frame_3->setMaximumSize(QSize(16777215, 95));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        payButton = new QPushButton(frame_3);
        payButton->setObjectName("payButton");
        payButton->setMinimumSize(QSize(110, 60));
        payButton->setMaximumSize(QSize(200, 60));

        horizontalLayout_2->addWidget(payButton, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        searchEdit = new QLineEdit(frame_3);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setMinimumSize(QSize(500, 64));
        searchEdit->setMaximumSize(QSize(500, 50));

        horizontalLayout_2->addWidget(searchEdit, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        searchButton = new QPushButton(frame_3);
        searchButton->setObjectName("searchButton");
        searchButton->setMinimumSize(QSize(110, 60));
        searchButton->setMaximumSize(QSize(110, 60));

        horizontalLayout_2->addWidget(searchButton, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_3);

        frame = new QFrame(UserDashboard);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 150));
        frame->setMaximumSize(QSize(16777215, 150));
        frame->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        totalBox = new QGroupBox(frame);
        totalBox->setObjectName("totalBox");
        totalBox->setMinimumSize(QSize(300, 121));
        totalBox->setMaximumSize(QSize(300, 121));
        vboxLayout = new QVBoxLayout(totalBox);
        vboxLayout->setObjectName("vboxLayout");
        totalLabel = new QLabel(totalBox);
        totalLabel->setObjectName("totalLabel");
        totalLabel->setMinimumSize(QSize(250, 75));
        totalLabel->setMaximumSize(QSize(16777215, 75));
        totalLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout->addWidget(totalLabel, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(totalBox, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        pendingBox = new QGroupBox(frame);
        pendingBox->setObjectName("pendingBox");
        pendingBox->setMinimumSize(QSize(300, 121));
        pendingBox->setMaximumSize(QSize(300, 121));
        vboxLayout1 = new QVBoxLayout(pendingBox);
        vboxLayout1->setObjectName("vboxLayout1");
        pendingLabel = new QLabel(pendingBox);
        pendingLabel->setObjectName("pendingLabel");
        pendingLabel->setMinimumSize(QSize(250, 75));
        pendingLabel->setMaximumSize(QSize(16777215, 75));
        pendingLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout1->addWidget(pendingLabel, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(pendingBox, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        violationsTableBox = new QGroupBox(UserDashboard);
        violationsTableBox->setObjectName("violationsTableBox");
        violationsTableBox->setMinimumSize(QSize(0, 346));
        violationsTableBox->setMaximumSize(QSize(16777215, 346));
        vboxLayout2 = new QVBoxLayout(violationsTableBox);
        vboxLayout2->setObjectName("vboxLayout2");
        tableView = new QTableView(violationsTableBox);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(0, 302));
        tableView->setMaximumSize(QSize(16777215, 250));
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        vboxLayout2->addWidget(tableView, 0, Qt::AlignmentFlag::AlignVCenter);


        verticalLayout->addWidget(violationsTableBox, 0, Qt::AlignmentFlag::AlignVCenter);


        retranslateUi(UserDashboard);

        QMetaObject::connectSlotsByName(UserDashboard);
    } // setupUi

    void retranslateUi(QWidget *UserDashboard)
    {
        UserDashboard->setWindowTitle(QCoreApplication::translate("UserDashboard", "User Dashboard \342\200\223 Traffic Violation Management System", nullptr));
        Titlelabel->setText(QCoreApplication::translate("UserDashboard", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Citizen Dashboard</span></p></body></html>", nullptr));
        payButton->setText(QCoreApplication::translate("UserDashboard", "Pay Selected Fine", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("UserDashboard", "Search by plate, type or location\342\200\246", nullptr));
        searchButton->setText(QCoreApplication::translate("UserDashboard", "Search", nullptr));
        totalBox->setTitle(QCoreApplication::translate("UserDashboard", "Total Violations", nullptr));
        totalLabel->setText(QCoreApplication::translate("UserDashboard", "0", nullptr));
        pendingBox->setTitle(QCoreApplication::translate("UserDashboard", "Pending Fines", nullptr));
        pendingLabel->setText(QCoreApplication::translate("UserDashboard", "$0", nullptr));
        violationsTableBox->setTitle(QCoreApplication::translate("UserDashboard", "Your Violation Records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDashboard: public Ui_UserDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
