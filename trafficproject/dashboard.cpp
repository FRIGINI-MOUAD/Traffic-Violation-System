#include "dashboard.h"
#include "ui_dashboard.h"

#include "userdashboard.h"
#include "policedashboard.h"
#include "userreportpage.h"
#include "policereportpage.h"
#include "login.h"

#include <QButtonGroup>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QMessageBox>

Dashboard::Dashboard(const QString &role, int userId, LoginWindow *loginWindow, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
    , m_role(role.toLower())
    , m_userId(userId)
    , m_loginWindow(loginWindow)
{
    ui->setupUi(this);
    setWindowTitle("Traffic Violation Management System - " + role.toUpper());
    if (m_role == "police") {
        m_policePage = new PoliceDashboard(this);
        m_policeReportPage = new PoliceReportPage(this);

        ui->stackedWidget->addWidget(m_policePage);
        ui->stackedWidget->addWidget(m_policeReportPage);
    } else {
        m_userPage = new UserDashboard(m_userId, this);
        m_userReportPage = new UserReportPage(m_userId, this);

        ui->stackedWidget->addWidget(m_userPage);
        ui->stackedWidget->addWidget(m_userReportPage);
    }

    setupSidebar();
    ui->dashboardBtn->setChecked(true);
    on_sidebarButtonClicked(ui->dashboardBtn);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::setupSidebar()
{
    QButtonGroup *group = new QButtonGroup(this);
    group->setExclusive(true);

    group->addButton(ui->dashboardBtn, 0);
    group->addButton(ui->reportBtn, 1);

    connect(group, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),
            this, &Dashboard::on_sidebarButtonClicked);

    connect(ui->logoutButton, &QPushButton::clicked, this, &Dashboard::on_logoutButton_clicked);
}

void Dashboard::on_sidebarButtonClicked(QAbstractButton *btn)
{
    if (!btn) {
        btn = ui->dashboardBtn;
    }

    QWidget *targetPage = nullptr;

    if (btn == ui->dashboardBtn) {
        targetPage = (m_role == "police") ? static_cast<QWidget*>(m_policePage)
                                          : static_cast<QWidget*>(m_userPage);
    }
    else if (btn == ui->reportBtn) {
        targetPage = (m_role == "police") ? static_cast<QWidget*>(m_policeReportPage)
                                          : static_cast<QWidget*>(m_userReportPage);
    }

    if (targetPage && ui->stackedWidget->currentWidget() != targetPage) {
        animatePageTransition(targetPage);
    }
}

void Dashboard::animatePageTransition(QWidget *page)
{
    ui->stackedWidget->setCurrentWidget(page);

    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(page);
    page->setGraphicsEffect(effect);

    QPropertyAnimation *anim = new QPropertyAnimation(effect, "opacity", this);
    anim->setDuration(400);
    anim->setStartValue(0.0);
    anim->setEndValue(1.0);
    anim->setEasingCurve(QEasingCurve::OutCubic);
    anim->start(QPropertyAnimation::DeleteWhenStopped);

    connect(anim, &QPropertyAnimation::finished, this, [page]() {
        if (page) {
            page->setGraphicsEffect(nullptr);
        }
    });
}

void Dashboard::on_logoutButton_clicked()
{

    this->hide();

    if (m_loginWindow) {
        m_loginWindow->show();
        m_loginWindow->activateWindow();
        m_loginWindow->raise();
    }

    this->deleteLater();
}
