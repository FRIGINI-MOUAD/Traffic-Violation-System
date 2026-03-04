#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QTimer>
#include <QModelIndex>

namespace Ui {
class UserDashboard;
}

class PayButtonDelegate;


class UserDashboard : public QWidget
{
    Q_OBJECT

public:
    explicit UserDashboard(int userId, QWidget *parent = nullptr);
    ~UserDashboard() override;

private slots:
    void on_searchButton_clicked();
    void on_payButton_clicked();


private:
    Ui::UserDashboard *ui;
    QSqlQueryModel *model;
    QTimer *refreshTimer = nullptr;
    bool isRefreshing = false;
    int currentUserId;
    QString userRole;


    void loadViolations();

    void setupTable();
    void refreshStats();
    void refreshData();
};

#endif
