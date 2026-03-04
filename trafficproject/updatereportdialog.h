#ifndef UPDATEREPORTDIALOG_H
#define UPDATEREPORTDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateReportDialog;
}

class UpdateReportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateReportDialog(int reportId, QWidget *parent = nullptr);
    ~UpdateReportDialog();

private slots:
    void on_submitBtn_clicked();
    void on_cancelBtn_clicked();

private:
    Ui::UpdateReportDialog *ui;
    int m_reportId;

    void loadReportData();
    bool validateInput();
};

#endif
