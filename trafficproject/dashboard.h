#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QString>
#include <QAbstractButton>
#include <QButtonGroup>

namespace Ui {
class Dashboard;
}

class LoginWindow;
class UserDashboard;
class PoliceDashboard;
class UserReportPage;
class PoliceReportPage;

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(const QString &role, int userId, LoginWindow *loginWindow, QWidget *parent = nullptr);
    ~Dashboard() override;

private slots:
    void on_sidebarButtonClicked(QAbstractButton *button);   // ← EXACT SIGNATURE
    void on_logoutButton_clicked();

private:
    Ui::Dashboard *ui;

    QString m_role;
    int m_userId;
    LoginWindow *m_loginWindow = nullptr;

    UserDashboard     *m_userPage = nullptr;
    PoliceDashboard   *m_policePage = nullptr;
    UserReportPage    *m_userReportPage = nullptr;
    PoliceReportPage  *m_policeReportPage = nullptr;

    void setupSidebar();
    void animatePageTransition(QWidget *page);
};

#endif
