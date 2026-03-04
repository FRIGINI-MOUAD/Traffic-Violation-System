#ifndef USERREPORTPAGE_H
#define USERREPORTPAGE_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui { class UserReportPage; }

class UserReportPage : public QWidget
{
    Q_OBJECT

public:
    explicit UserReportPage(int userId, QWidget *parent = nullptr);
    ~UserReportPage();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_createBtn_clicked();
    void on_updateBtn_clicked();
    void on_deleteBtn_clicked();

private:
    void loadMyData();

    Ui::UserReportPage *ui;
    QSqlQueryModel *model;
    int currentUserId;
};

#endif
