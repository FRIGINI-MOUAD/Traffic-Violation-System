#ifndef ADDVIOLATIONDIALOG_H
#define ADDVIOLATIONDIALOG_H

#include <QDialog>

namespace Ui {
class AddViolationDialog;
}

class AddViolationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddViolationDialog(QWidget *parent = nullptr);
    ~AddViolationDialog();

    QString plate() const;
    QString type() const;
    QString location() const;
    double fine() const;

private slots:
    void on_saveButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::AddViolationDialog *ui;
};

#endif
