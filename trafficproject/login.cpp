#include "login.h"
#include "ui_login.h"
#include "dashboard.h"
#include "resetpassword.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QCryptographicHash>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    connect(ui->signupButton, &QPushButton::clicked, this, &LoginWindow::on_signupButton_clicked);
    connect(ui->forgotPasswordLabel, &QLabel::linkActivated, this, &LoginWindow::on_forgotPasswordLabel_linkActivated);

    db = QSqlDatabase::database("TVMS");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::closeDatabase()
{
    if (db.isValid() && db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase("TVMS");
}

QString LoginWindow::hashPassword(const QString &password)
{
    return QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
}

bool LoginWindow::validateLogin(const QString &username,
                                const QString &password,
                                QString &role,
                                int &userId)
{
    QSqlQuery query(db);
    query.prepare("SELECT id, password, role FROM Users WHERE username = ?");
    query.addBindValue(username);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return false;
    }
    if (!query.next()) {
        QMessageBox::warning(this, "Login Failed", "User not found.");
        return false;
    }

    userId = query.value("id").toInt();

    if (query.value("password").toString() != password) {
        QMessageBox::warning(this, "Login Failed", "Wrong password.");
        return false;
    }

    role = query.value("role").toString().toLower();
    return true;

}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameTextBox->text().trimmed();
    QString password = ui->passwordBox->text();

    QString role;
    int userId = -1;

    if (!validateLogin(username, password, role, userId)) {
        return;
    }


    this->hide();

    Dashboard *dash = new Dashboard(role, userId, this);
    dash->setAttribute(Qt::WA_DeleteOnClose);
    dash->show();
}

void LoginWindow::on_signupButton_clicked()
{
    QString nationalId = ui->signupNationalIdTextBox->text().trimmed();
    QString phone = ui->signupPhoneTextBox->text().trimmed();
    QString email = ui->signupEmailTextBox->text().trimmed();
    QString password = ui->signupPasswordBox->text();
    QString confirm = ui->signupConfirmPasswordBox->text();

    if (nationalId.isEmpty() || phone.isEmpty() || email.isEmpty() ||
        password.isEmpty() || confirm.isEmpty()) {
        QMessageBox::warning(this, "Sign-up Error", "All fields are required.");
        return;
    }

    if (password != confirm) {
        QMessageBox::warning(this, "Sign-up Error", "Passwords do not match.");
        return;
    }

    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM Users WHERE username = :username");
    checkQuery.bindValue(":username", email);
    if (!checkQuery.exec() || !checkQuery.next()) {
        QMessageBox::critical(this, "Database Error", "Failed to check username.");
        return;
    }

    if (checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Sign-up Error", "This email is already registered.");
        return;
    }

    QSqlQuery insertQuery(db);
    insertQuery.prepare("INSERT INTO Users (username, password, role) VALUES (:username, :password, :role)");
    insertQuery.bindValue(":username", email);
    insertQuery.bindValue(":password", password);
    insertQuery.bindValue(":role", "user");

    if (insertQuery.exec()) {
        QMessageBox::information(this, "Success", "Account created successfully!\nYou can now log in.");
        ui->loginTabs->setCurrentIndex(0);
        ui->usernameTextBox->setText(email);
    } else {
        QMessageBox::critical(this, "Sign-up Error", "Failed to create account:\n" + insertQuery.lastError().text());
    }
}

void LoginWindow::on_forgotPasswordLabel_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    ResetPassword *reset = new ResetPassword(this);
    reset->setModal(true);
    reset->show();
}
