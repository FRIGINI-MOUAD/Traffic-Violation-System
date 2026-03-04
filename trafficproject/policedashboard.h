#ifndef POLICEDASHBOARD_H
#define POLICEDASHBOARD_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTimer>

namespace Ui { class PoliceDashboard; }

class PoliceDashboard : public QWidget
{
    Q_OBJECT

public:
    explicit PoliceDashboard(QWidget *parent = nullptr);
    ~PoliceDashboard();

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();

    void on_UpdateButton_clicked();
    void on_searchButton_clicked();

private:
    Ui::PoliceDashboard *ui;
    QSqlTableModel *model = nullptr;
    QTimer *refreshTimer = nullptr;
    bool isRefreshing = false;
    bool dataLoaded = false;
    void setupTable();
    void refreshStats();
    void applyStatusBadges();
};

#endif
