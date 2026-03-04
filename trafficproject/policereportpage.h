#ifndef POLICEREPORTPAGE_H
#define POLICEREPORTPAGE_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui { class PoliceReportPage; }

class PoliceReportPage : public QWidget
{
    Q_OBJECT

public:
    explicit PoliceReportPage(QWidget *parent = nullptr);
    ~PoliceReportPage();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_approveBtn_clicked();
    void on_rejectBtn_clicked();
    void on_searchBtn_clicked();

private:
    Ui::PoliceReportPage *ui;
    QSqlQueryModel *model;
    bool dataLoaded = false;
    int m_currentRow = -1;

    void loadReports();
    void updateCurrentRow();
};

#endif
