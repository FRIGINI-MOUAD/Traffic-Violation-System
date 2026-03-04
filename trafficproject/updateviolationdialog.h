#ifndef UPDATEVIOLATIONDIALOG_H
#define UPDATEVIOLATIONDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateViolationDialog;
}

class UpdateViolationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateViolationDialog(int id, const QString &plate, const QString &type,
                                   const QString &location, double fine, QWidget *parent = nullptr);
    ~UpdateViolationDialog();


    int id() const { return m_id; }
    QString plate() const;
    QString type() const;
    QString location() const;
    double fine() const;

private slots:
    void on_saveButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::UpdateViolationDialog *ui;
    int m_id;
};

#endif
