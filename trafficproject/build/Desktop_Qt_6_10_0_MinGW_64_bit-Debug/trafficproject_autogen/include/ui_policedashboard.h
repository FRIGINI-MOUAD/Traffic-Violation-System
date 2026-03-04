/********************************************************************************
** Form generated from reading UI file 'policedashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICEDASHBOARD_H
#define UI_POLICEDASHBOARD_H

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

class Ui_PoliceDashboard
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *actionLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QHBoxLayout *statsLayout;
    QGroupBox *totalBox;
    QVBoxLayout *vboxLayout;
    QLabel *totalLabel;
    QGroupBox *pendingBox;
    QVBoxLayout *vboxLayout1;
    QLabel *pendingLabel;
    QGroupBox *paidBox;
    QVBoxLayout *vboxLayout2;
    QLabel *paidLabel;
    QGroupBox *violationsTableBox;
    QVBoxLayout *vboxLayout3;
    QTableView *tableView;

    void setupUi(QWidget *PoliceDashboard)
    {
        if (PoliceDashboard->objectName().isEmpty())
            PoliceDashboard->setObjectName("PoliceDashboard");
        PoliceDashboard->resize(1200, 800);
        PoliceDashboard->setStyleSheet(QString::fromUtf8("\n"
"				QWidget { background:#f8fafc; font-family:'Segoe UI',Arial,sans-serif; }\n"
"				QLabel#titleLabel { color:#1e293b; font-size:28px; font-weight:bold; padding:20px 0px; }\n"
"				QPushButton { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #3b82f6, stop:1 #1d4ed8); color:white; border:none; border-radius:8px; padding:10px 15px; font-weight:bold; font-size:14px; min-width:80px; }\n"
"				QPushButton:hover { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #2563eb, stop:1 #1e40af); }\n"
"				QPushButton#addButton { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669); }\n"
"				QPushButton#deleteButton { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #ef4444, stop:1 #dc2626); }\n"
"				QPushButton#refreshButton { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #f59e0b, stop:1 #d97706); }\n"
"				QLineEdit { background:#fff; border:2px solid #e2e8f0; border-radius:8px; padding:10px 15px; font-size:14px; color:#2d3748; min-height:40px; }\n"
"				QLine"
                        "Edit:focus { border-color:#3b82f6; }\n"
"				QLineEdit::placeholder { color:#94a3b8; font-style:italic; }\n"
"				QGroupBox { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #fff, stop:1 #f8fafc); border:2px solid #e2e8f0; border-radius:12px; margin-top:10px; padding-top:15px; font-weight:bold; color:#475569; }\n"
"				QGroupBox::title { subcontrol-origin:margin; subcontrol-position:top center; padding:0px 10px; background:transparent; color:#64748b; font-size:14px; }\n"
"				QLabel#totalLabel, QLabel#pendingLabel, QLabel#paidLabel { color:#3b82f6; font-size:32px; font-weight:bold; text-align:center; }\n"
"				QTableView { background:#fff; border:1px solid #e2e8f0; border-radius:8px; }\n"
"				QHeaderView::section { background:qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #1e293b, stop:1 #334155); color:white; padding:8px; font-weight:bold; }\n"
"			"));
        verticalLayout = new QVBoxLayout(PoliceDashboard);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(PoliceDashboard);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        actionLayout = new QHBoxLayout();
        actionLayout->setObjectName("actionLayout");
        addButton = new QPushButton(PoliceDashboard);
        addButton->setObjectName("addButton");

        actionLayout->addWidget(addButton);

        deleteButton = new QPushButton(PoliceDashboard);
        deleteButton->setObjectName("deleteButton");

        actionLayout->addWidget(deleteButton);

        UpdateButton = new QPushButton(PoliceDashboard);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        actionLayout->addWidget(UpdateButton, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        horizontalSpacer = new QSpacerItem(100, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        actionLayout->addItem(horizontalSpacer);

        searchEdit = new QLineEdit(PoliceDashboard);
        searchEdit->setObjectName("searchEdit");

        actionLayout->addWidget(searchEdit);

        searchButton = new QPushButton(PoliceDashboard);
        searchButton->setObjectName("searchButton");

        actionLayout->addWidget(searchButton);


        verticalLayout->addLayout(actionLayout);

        statsLayout = new QHBoxLayout();
        statsLayout->setObjectName("statsLayout");
        totalBox = new QGroupBox(PoliceDashboard);
        totalBox->setObjectName("totalBox");
        vboxLayout = new QVBoxLayout(totalBox);
        vboxLayout->setObjectName("vboxLayout");
        totalLabel = new QLabel(totalBox);
        totalLabel->setObjectName("totalLabel");
        totalLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout->addWidget(totalLabel);


        statsLayout->addWidget(totalBox);

        pendingBox = new QGroupBox(PoliceDashboard);
        pendingBox->setObjectName("pendingBox");
        vboxLayout1 = new QVBoxLayout(pendingBox);
        vboxLayout1->setObjectName("vboxLayout1");
        pendingLabel = new QLabel(pendingBox);
        pendingLabel->setObjectName("pendingLabel");
        pendingLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout1->addWidget(pendingLabel);


        statsLayout->addWidget(pendingBox);

        paidBox = new QGroupBox(PoliceDashboard);
        paidBox->setObjectName("paidBox");
        vboxLayout2 = new QVBoxLayout(paidBox);
        vboxLayout2->setObjectName("vboxLayout2");
        paidLabel = new QLabel(paidBox);
        paidLabel->setObjectName("paidLabel");
        paidLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        vboxLayout2->addWidget(paidLabel);


        statsLayout->addWidget(paidBox);


        verticalLayout->addLayout(statsLayout);

        violationsTableBox = new QGroupBox(PoliceDashboard);
        violationsTableBox->setObjectName("violationsTableBox");
        vboxLayout3 = new QVBoxLayout(violationsTableBox);
        vboxLayout3->setObjectName("vboxLayout3");
        tableView = new QTableView(violationsTableBox);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(0, 400));

        vboxLayout3->addWidget(tableView);


        verticalLayout->addWidget(violationsTableBox);


        retranslateUi(PoliceDashboard);

        QMetaObject::connectSlotsByName(PoliceDashboard);
    } // setupUi

    void retranslateUi(QWidget *PoliceDashboard)
    {
        titleLabel->setText(QCoreApplication::translate("PoliceDashboard", "Police Control Panel", nullptr));
        addButton->setText(QCoreApplication::translate("PoliceDashboard", "Add Violation", nullptr));
        deleteButton->setText(QCoreApplication::translate("PoliceDashboard", "Delete Selected", nullptr));
        UpdateButton->setText(QCoreApplication::translate("PoliceDashboard", "Update", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("PoliceDashboard", "Search by plate, type, or location...", nullptr));
        searchButton->setText(QCoreApplication::translate("PoliceDashboard", "Search", nullptr));
        totalBox->setTitle(QCoreApplication::translate("PoliceDashboard", "Total Violations", nullptr));
        totalLabel->setText(QCoreApplication::translate("PoliceDashboard", "0", nullptr));
        pendingBox->setTitle(QCoreApplication::translate("PoliceDashboard", "Pending", nullptr));
        pendingLabel->setText(QCoreApplication::translate("PoliceDashboard", "0", nullptr));
        paidBox->setTitle(QCoreApplication::translate("PoliceDashboard", "Paid", nullptr));
        paidLabel->setText(QCoreApplication::translate("PoliceDashboard", "0", nullptr));
        violationsTableBox->setTitle(QCoreApplication::translate("PoliceDashboard", "Recent Violations", nullptr));
        (void)PoliceDashboard;
    } // retranslateUi

};

namespace Ui {
    class PoliceDashboard: public Ui_PoliceDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICEDASHBOARD_H
