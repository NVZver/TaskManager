#ifndef CONNECTTODATABASE_H
#define CONNECTTODATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlRelationalTableModel>

class ConnectToDataBase
{
public:
    ConnectToDataBase();

    void enterCommand(QString command);
    void insertData(QString table, QList<QString> colunms_names, QList<QString> values);
    void removeData(QString table, QString conditions);
    void selectData(QString table,QString columns_names, QString conditions);

    QSqlQueryModel *getQueryModel() const;
    void setQueryModel(QSqlQueryModel *value);

    QSqlTableModel *getTableModel() const;
    void setTableModel(QSqlTableModel *value);

    QSqlRelationalTableModel *getRelationalTableModel() const;
    void setRelationalTableModel(QSqlRelationalTableModel *value);

private:
    QSqlDatabase db;
    QSqlQueryModel* queryModel;
    QSqlTableModel* tableModel;
    QSqlRelationalTableModel *relationalTableModel;

    void connectingToDB();
    void disconnectingToDB();

};

#endif // CONNECTTODATABASE_H
