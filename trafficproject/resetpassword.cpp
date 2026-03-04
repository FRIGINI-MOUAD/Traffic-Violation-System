#include "resetpassword.h"
#include "ui_resetpassword.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>

ResetPassword::ResetPassword(QWidget *parent)
    : QDialog(parent), ui(new Ui::ResetPassword)
{
    ui->setupUi(this);
}

ResetPassword::~ResetPassword()
{
    delete ui;
}

void ResetPassword::on_cancelButton_clicked()
{
    reject();
}

void ResetPassword::on_pushButton_2_clicked()
{
    QString email = ui->lineEdit->text().trimmed();
    if (email.isEmpty()) {
        QMessageBox::warning(this, "Missing Information",
                             "Please enter your email address.");
        ui->lineEdit->setFocus();
        return;
    }

    QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Invalid Email",
                             "Please enter a valid email address.");
        ui->lineEdit->setFocus();
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("TVMS");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error",
                              "Cannot connect to database.\nPlease try again later.");
        return;
    }


    QSqlQuery query(db);
    query.prepare("SELECT id, username FROM Users WHERE username = ?");
    query.addBindValue(email);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error",
                              "An error occurred while checking your email.\n" +
                                  query.lastError().text());
        qDebug() << "Reset password query error:" << query.lastError().text();
        return;
    }

    if (query.next()) {
        QMessageBox::information(this, "Email Sent",
                                 "A password reset link has been sent to your email.\n\n"
                                 "Please check your inbox and follow the instructions to reset your password.");

        accept();

    } else {
        QMessageBox::warning(this, "Email Not Found",
                             "Your email does not exist in the system.\n\n"
                             "Please sign up for a new account.");
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
}
