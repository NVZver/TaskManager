#include "connecttodatabase.h"

ConnectToDataBase::ConnectToDataBase()
{
    if(!db.open())
    {
        connectingToDB();
    }
}
QSqlQueryModel *ConnectToDataBase::getQueryModel() const
{
    return queryModel;
}

void ConnectToDataBase::setQueryModel(QSqlQueryModel *value)
{
    queryModel = value;
}

QSqlTableModel *ConnectToDataBase::getTableModel() const
{
    return tableModel;
}

void ConnectToDataBase::setTableModel(QSqlTableModel *value)
{
    tableModel = value;
}

void ConnectToDataBase::enterCommand(QString command)
{
    if(db.isOpen())
    {
        QSqlQuery query(db);
        query.exec(command);
        qDebug()<<"Query: "<<query.lastQuery();
        queryModel = new QSqlQueryModel();
        queryModel->setQuery(query);
        query.clear();
    }
    else
    {
        qDebug()<<"Connect problem";
    }

}

void ConnectToDataBase::insertData(QString table, QList<QString> colunms_names, QList<QString> values)
{
    if(colunms_names.count() == values.count())
    {
        QString str_comand = "";
        QString str_colNames = "";
        QString str_values = "";
        int j = values.count()-1;
        for(int i=0; i<values.count();++i)
        {
            str_colNames += colunms_names[i];
            str_values += "'"+values[i]+"'";
            if(i!= j)
            {
                str_colNames+=", ";
                str_values+=", ";
            }
        }
        str_comand = "insert into "+table+" ("+str_colNames+") values ("+str_values+")";
        str_comand.toUtf8();
        enterCommand(str_comand);
    }
    else
    {
        qDebug()<<"ERROR: colunms_names.count() != values.count(): " << colunms_names.count() << " != "<<values.count();
    }
}

void ConnectToDataBase::removeData(QString table, QString conditions)
{
    QString str_comand = "";
    str_comand = "delete from "+table+" "+conditions;
    enterCommand(str_comand);
}

void ConnectToDataBase::selectData(QString table, QString columns_names, QString conditions)
{
    QString str_comand = "";
    if(conditions != "")
    {
        str_comand = "select "+columns_names+" from "+table+" "+conditions;
        enterCommand(str_comand);
    }
    else
    {
        str_comand = "select "+columns_names+" from "+table;
        enterCommand(str_comand);
    }
}


// Метод соеденения с базой данных
void ConnectToDataBase::connectingToDB()
{
    db = QSqlDatabase::addDatabase("QMYSQL", "mydb");
    db.setHostName("localhost");
    db.setDatabaseName("linkoddb");
    db.setUserName("root");
    db.setPassword("qwertyu1");
    if(db.open()){qDebug()<<"Подлючено...";}
    tableModel = new QSqlTableModel(0,db);
}




