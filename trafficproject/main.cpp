#include <QApplication>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QFile>

#include "login.h"

int main(int argc, char *argv[]) {


    QApplication app(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "TVMS");
    db.setDatabaseName(
        "Driver={ODBC Driver 18 for SQL Server};"
        "Server=.\\SQLEXPRESS;"
        "Database=TVMS;"
        "Trusted_Connection=Yes;"
        "Encrypt=no;"
        "TrustServerCertificate=yes;"
        );

    if (!db.open()) {
        QMessageBox::critical(nullptr, "Cannot Start App",
                              "<h3>Database Connection Failed</h3>",
                              QMessageBox::Ok);
        return -1;
    }

    LoginWindow w;
    w.show();
    return app.exec();
}
