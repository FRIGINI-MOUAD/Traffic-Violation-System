#include "policereportpage.h"
#include "ui_policereportpage.h"

#include <QTextEdit>
#include <QLabel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QInputDialog>
#include <QTimer>
#include <QDebug>
#include <QElapsedTimer>
#include <utility>

PoliceReportPage::PoliceReportPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::PoliceReportPage), model(new QSqlQueryModel(this))
{
    ui->setupUi(this);

    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setColumnHidden(0, true);
    connect(ui->tableView->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &PoliceReportPage::updateCurrentRow);


    connect(ui->searchBtn,  &QPushButton::clicked, this, &PoliceReportPage::on_searchBtn_clicked);
    connect(ui->approveBtn, &QPushButton::clicked, this, &PoliceReportPage::on_approveBtn_clicked);
    connect(ui->rejectBtn,  &QPushButton::clicked, this, &PoliceReportPage::on_rejectBtn_clicked);

    connect(ui->searchEdit, &QLineEdit::returnPressed, ui->searchBtn, &QPushButton::click);
    connect(ui->searchEdit, &QLineEdit::textChanged, this, [this](const QString &text){
        if (text.isEmpty()) loadReports();
    });
}

PoliceReportPage::~PoliceReportPage()
{
    delete ui;
}

void PoliceReportPage::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if (!dataLoaded) {
        QTimer::singleShot(0, this, [this]() {
            loadReports();
            dataLoaded = true;
        });
    }
}

void PoliceReportPage::loadReports()
{
    QSqlDatabase db = QSqlDatabase::database("TVMS");

    const QString sql = R"(
        SELECT TOP 300
               r.report_id,
               u.username,
               r.plate,
               r.type,
               r.location,
               CASE WHEN LEN(r.message) > 80
                    THEN LEFT(r.message, 77) + '...'
                    ELSE r.message END AS message,
               r.status
        FROM Reports r
        JOIN Users u ON r.user_id = u.id
        ORDER BY CASE WHEN r.status = 'Pending' THEN 0 ELSE 1 END,
                 r.report_id DESC
    )";

    model->setQuery(sql, db);

    if (model->lastError().isValid()) {
        QMessageBox::critical(this, tr("Database Error"), model->lastError().text());
        return;
    }

    ui->tableView->setModel(model);

    model->setHeaderData(1, Qt::Horizontal, "Citizen");
    model->setHeaderData(2, Qt::Horizontal, "License Plate");
    model->setHeaderData(3, Qt::Horizontal, "Violation Type");
    model->setHeaderData(4, Qt::Horizontal, "Location");
    model->setHeaderData(5, Qt::Horizontal, "Message Preview");
    model->setHeaderData(6, Qt::Horizontal, "Status");

    ui->tableView->setStyleSheet(
        "QTableView {"
        "    background: white;"
        "    gridline-color: #e2e8f0;"
        "    selection-background-color: #fecaca;"
        "    selection-color: white;"
        "    font-size: 14px;"
        "    border: 1px solid #cbd5e1;"
        "    border-radius: 12px;"
        "}"
        "QTableView::item {"
        "    padding: 14px 10px;"
        "}"
        "QTableView::item:selected {"
        "    background: #dc2626;"
        "    color: white;"
        "    font-weight: bold;"
        "}"
        "QTableView {"
        "    alternate-background-color: #fdfdfd;"
        "}"
        "QHeaderView::section {"
        "    background-color: #f8fafc;"
        "    color: #1e293b;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "    padding: 12px 8px;"
        "    border: none;"
        "    border-bottom: 2px solid #cbd5e1;"
        "    text-align: center;"
        "    margin: 0px;"
        "}"
        );

    auto *header = ui->tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Interactive);
    header->setStretchLastSection(false);
    header->setDefaultAlignment(Qt::AlignCenter);
    header->setHighlightSections(false);


    ui->tableView->setColumnWidth(0, 0);
    ui->tableView->setColumnWidth(1, 160);
    ui->tableView->setColumnWidth(2, 140);
    ui->tableView->setColumnWidth(3, 180);
    ui->tableView->setColumnWidth(4, 200);
    ui->tableView->setColumnWidth(5, 130);
    ui->tableView->setColumnWidth(6, 130);

    ui->tableView->setColumnHidden(0, true);


    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->verticalHeader()->setDefaultSectionSize(64);


    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex idx = model->index(row, 6);
        QString status = idx.data().toString();

        if (status == "Pending") {
            model->setData(idx, "  PENDING  ", Qt::DisplayRole);
            model->setData(idx, QColor("#fef3c7"), Qt::BackgroundRole);
            model->setData(idx, QColor("#92400e"), Qt::ForegroundRole);
        }
        else if (status == "Approved") {
            model->setData(idx, "  APPROVED  ", Qt::DisplayRole);
            model->setData(idx, QColor("#d1fae5"), Qt::BackgroundRole);
            model->setData(idx, QColor("#065f46"), Qt::ForegroundRole);
        }
        else if (status == "Rejected") {
            model->setData(idx, "  REJECTED  ", Qt::DisplayRole);
            model->setData(idx, QColor("#fee2e2"), Qt::BackgroundRole);
            model->setData(idx, QColor("#991b1b"), Qt::ForegroundRole);
        }

        QFont f; f.setBold(true);
        model->setData(idx, f, Qt::FontRole);
    }
}

void PoliceReportPage::on_searchBtn_clicked()
{
    QString term = ui->searchEdit->text().trimmed();
    if (term.isEmpty()) {
        loadReports();
        return;
    }

    QString like = term + "%";
    QSqlDatabase db = QSqlDatabase::database("TVMS");

    QSqlQuery q(db);
    q.prepare(R"(
        SELECT r.report_id, u.username, r.plate, r.type, r.location,
               r.message, r.status
        FROM Reports r
        JOIN Users u ON r.user_id = u.id
        WHERE u.username LIKE ?
           OR r.plate    LIKE ?
           OR r.type     LIKE ?
           OR r.location LIKE ?
        ORDER BY CASE WHEN r.status = 'Pending' THEN 0 ELSE 1 END,
                 r.report_id DESC
    )");

    for (int i = 0; i < 4; ++i) q.addBindValue(like);

    if (!q.exec()) {
        QMessageBox::critical(this, "Search Error", q.lastError().text());
        return;
    }

    model->setQuery(std::move(q));

    model->setHeaderData(1, Qt::Horizontal, "Citizen");
    model->setHeaderData(2, Qt::Horizontal, "Plate");
    model->setHeaderData(3, Qt::Horizontal, "Type");
    model->setHeaderData(4, Qt::Horizontal, "Location");
    model->setHeaderData(5, Qt::Horizontal, "Message");
    model->setHeaderData(6, Qt::Horizontal, "Status");

    ui->tableView->resizeColumnsToContents();
}

void PoliceReportPage::on_approveBtn_clicked()
{
    int row = ui->tableView->currentIndex().row();
    if (row < 0) {
        QMessageBox::warning(this, tr("No Selection"), tr("Please select a report first."));
        return;
    }

    int reportId = model->index(row, 0).data().toInt();
    QString plate   = model->index(row, 2).data().toString();
    QString type    = model->index(row, 3).data().toString();


    QDialog dlg(this);
    dlg.setWindowTitle(tr("Approve Report"));
    dlg.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    dlg.setFixedSize(480, 340);
    dlg.setStyleSheet(R"(
        QDialog { background: #ffffff; border-radius: 18px; border: 1px solid #e2e8f0; }
        QLabel { color: #1e293b; font-family: 'Segoe UI'; }
        QLabel#title { font-size: 22px; font-weight: bold; color: #059669; }
        QLabel#msg   { font-size: 15px; color: #475569; }
        QPushButton {
            border: none; border-radius: 14px; padding: 14px 32px;
            font-weight: bold; font-size: 15px; min-width: 120px;
        }
        QPushButton#cancel { background: #e2e8f0; color: #475569; }
        QPushButton#cancel:hover { background: #cbd5e1; }
        QPushButton#approve {
            background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #10b981, stop:1 #059669);
            color: white;
        }
        QPushButton#approve:hover {
            background: #059669;
            transform: translateY(-3px);
            box-shadow: 0 15px 30px rgba(5,150,105,0.3);
        }
    )");

    auto *layout = new QVBoxLayout(&dlg);
    layout->setContentsMargins(30, 30, 30, 30);
    layout->setSpacing(20);


    auto *header = new QHBoxLayout;
    QLabel *title = new QLabel(tr("Approve Report?"));
    title->setObjectName("title");
    header->addWidget(title, 1);
    header->addStretch();

    QLabel *msg = new QLabel(tr(
                                 "<b>Plate:</b> %1<br>"
                                 "<b>Type:</b> %2<br><br>"
                                 "Approving this report will:<br>"
                                 "• Cancel all pending fines for this vehicle<br>"
                                 "• Mark the report as <span style='color:#059669;font-weight:bold'>Approved</span><br>"
                                 "• Notify the citizen"
                                 ).arg(plate.toHtmlEscaped(), type.toHtmlEscaped()));
    msg->setObjectName("msg");
    msg->setWordWrap(true);

    auto *btns = new QHBoxLayout;
    btns->addStretch();
    QPushButton *cancel = new QPushButton(tr("Cancel"));
    cancel->setObjectName("cancel");
    cancel->setDefault(true);
    QPushButton *approve = new QPushButton(tr("Approve Report"));
    approve->setObjectName("approve");

    btns->addWidget(cancel);
    btns->addWidget(approve);

    layout->addLayout(header);
    layout->addSpacing(10);
    layout->addWidget(msg);
    layout->addStretch();
    layout->addLayout(btns);

    connect(cancel,  &QPushButton::clicked, &dlg, &QDialog::reject);
    connect(approve, &QPushButton::clicked, &dlg, &QDialog::accept);

    if (dlg.exec() != QDialog::Accepted)
        return;


    QSqlDatabase db = QSqlDatabase::database("TVMS");
    db.transaction();

    QSqlQuery q(db);
    q.prepare("UPDATE Reports SET status = 'Approved' WHERE report_id = ?");
    q.addBindValue(reportId);
    q.exec();

    q.prepare("UPDATE Violations SET status = 'Cancelled' WHERE plate = ? AND status = 'Pending'");
    q.addBindValue(plate);
    q.exec();

    if (q.lastError().isValid()) {
        db.rollback();
        QMessageBox::critical(this, tr("Database Error"), q.lastError().text());
    } else {
        db.commit();
        loadReports();

        QMessageBox::information(this, tr("Success"),
                                 tr("Report approved!\nAll pending fines have been cancelled.").arg(plate),
                                 QMessageBox::Ok);
    }
}

void PoliceReportPage::on_rejectBtn_clicked()
{
    int row = ui->tableView->currentIndex().row();
    if (row < 0) {
        QMessageBox::warning(this, tr("No Selection"), tr("Please select a report first."));
        return;
    }

    int reportId = model->index(row, 0).data().toInt();
    QString citizen = model->index(row, 1).data().toString();
    QString plate   = model->index(row, 2).data().toString();


    QDialog dlg(this);
    dlg.setWindowTitle(tr("Reject Report"));
    dlg.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    dlg.setFixedSize(500, 460);
    dlg.setStyleSheet(R"(
        QDialog { background: #ffffff; border-radius: 18px; border: 1px solid #e2e8f0; }
        QLabel { color: #1e293b; font-family: 'Segoe UI', Arial, sans-serif; }
        QLabel#title { font-size: 22px; font-weight: bold; color: #dc2626; }
        QLabel#msg   { font-size: 15px; color: #475569; }
        QTextEdit {
            border: 2px solid #fee2e2; border-radius: 14px;
            padding: 14px; font-size: 15px; background: #fffbfb;
        }
        QTextEdit:focus { border-color: #fca5a5; }
        QPushButton {
            border: none; border-radius: 14px; padding: 14px 32px;
            font-weight: bold; font-size: 15px; min-width: 120px;
        }
        QPushButton#cancel { background: #e2e8f0; color: #475569; }
        QPushButton#cancel:hover { background: #cbd5e1; }
        QPushButton#reject {
            background: qlineargradient(x1:0,y1:0,x2:1,y2:0, stop:0 #ef4444, stop:1 #dc2626);
            color: white;
        }
        QPushButton#reject:hover {
            background: #dc2626;
            transform: translateY(-3px);
            box-shadow: 0 15px 30px rgba(220,38,38,0.3);
        }
    )");

    auto *layout = new QVBoxLayout(&dlg);
    layout->setContentsMargins(30, 30, 30, 30);
    layout->setSpacing(20);


    auto *header = new QHBoxLayout;


    QLabel *title = new QLabel(tr("Reject Report"), &dlg);
    title->setObjectName("title");
    header->addWidget(title, 1);
    header->addStretch();

    QLabel *info = new QLabel(tr(
                                  "<b>Citizen:</b> %1<br>"
                                  "<b>Plate:</b> %2<br><br>"
                                  "<b style='color:#dc2626;'>You must provide a reason.</b><br>"
                                  "The citizen will see this message."
                                  ).arg(citizen.toHtmlEscaped(), plate.toHtmlEscaped()), &dlg);
    info->setObjectName("msg");
    info->setWordWrap(true);


    QTextEdit *reasonEdit = new QTextEdit(&dlg);
    reasonEdit->setPlaceholderText(tr("Enter rejection reason here:"));
    reasonEdit->setMinimumHeight(120);


    auto *btns = new QHBoxLayout;
    btns->addStretch();

    QPushButton *cancelBtn = new QPushButton(tr("Cancel"), &dlg);
    cancelBtn->setObjectName("cancel");
    cancelBtn->setDefault(true);

    QPushButton *rejectBtn = new QPushButton(tr("Reject Report"), &dlg);
    rejectBtn->setObjectName("reject");

    btns->addWidget(cancelBtn);
    btns->addWidget(rejectBtn);

    layout->addLayout(header);
    layout->addSpacing(10);
    layout->addWidget(info);
    layout->addWidget(reasonEdit);
    layout->addStretch();
    layout->addLayout(btns);


    connect(cancelBtn, &QPushButton::clicked, &dlg, &QDialog::reject);

    connect(rejectBtn, &QPushButton::clicked, &dlg, [&dlg, reasonEdit]() {
        QString reason = reasonEdit->toPlainText().trimmed();
        if (reason.isEmpty()) {
            QMessageBox::warning(&dlg, tr("Required Field"), tr("Please enter a rejection reason."));
            return;
        }
        dlg.accept();
    });

    if (dlg.exec() != QDialog::Accepted) {
        return;
    }


    QString reason = reasonEdit->toPlainText().trimmed();

    QSqlQuery q(QSqlDatabase::database("TVMS"));
    q.prepare("UPDATE Reports SET status = 'Rejected', rejection_reason = ? WHERE report_id = ?");
    q.addBindValue(reason);
    q.addBindValue(reportId);

    if (!q.exec()) {
        QMessageBox::critical(this, tr("Database Error"), q.lastError().text());
        return;
    }

    loadReports();

    QMessageBox::information(this, tr("Success"),
                             tr("Report has been <b>rejected</b>.<br>"
                                "Reason has been sent to the citizen."));
}

void PoliceReportPage::updateCurrentRow()
{
    m_currentRow = ui->tableView->currentIndex().row();
}
