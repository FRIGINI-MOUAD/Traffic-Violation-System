#ifndef CREATEREPORTDIALOG_H
#define CREATEREPORTDIALOG_H

#include <QDialog>

namespace Ui {
class CreateReportDialog;
}

class CreateReportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateReportDialog(int userId, QWidget *parent = nullptr);
    ~CreateReportDialog();

private slots:
    void on_submitBtn_clicked();
    void on_cancelBtn_clicked();


private:
    Ui::CreateReportDialog *ui;
    int currentUserId;

    bool validateInput();
};

#endif
