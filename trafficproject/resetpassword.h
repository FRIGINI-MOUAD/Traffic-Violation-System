#ifndef RESETPASSWORD_H
#define RESETPASSWORD_H

#include <QDialog>

namespace Ui {
class ResetPassword;
}

class ResetPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ResetPassword(QWidget *parent = nullptr);
    ~ResetPassword();

private slots:
    void on_pushButton_2_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ResetPassword *ui;
};

#endif
