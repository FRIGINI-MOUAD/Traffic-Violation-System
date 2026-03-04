#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui { class LoginWindow; }

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();
    void on_signupButton_clicked();
    void on_forgotPasswordLabel_linkActivated(const QString &link);

private:
    Ui::LoginWindow *ui;
    QSqlDatabase db;

    bool validateLogin(const QString &username,
                       const QString &password,
                       QString &role,
                       int &userId);
    void closeDatabase();
    QString hashPassword(const QString &password);
};

#endif
