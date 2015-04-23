#ifndef CUSTOMERSEARCH_H
#define CUSTOMERSEARCH_H

#include <QWidget>
#include <QDebug>
#include <QDate>

namespace Ui {
class CustomerSearch;
}

class ConnectToDataBase;
class CustomerSearch : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerSearch(ConnectToDataBase* connToDB, QWidget *parent = 0);
    ~CustomerSearch();

    ConnectToDataBase *connToDB() const;
    void setConnToDB(ConnectToDataBase *connToDB);
signals:
    void CreationCompleted();
private slots:
    void on_lntContractNumber_textChanged(const QString &arg1);

    void on_lntPhoneNumber_textChanged(const QString &arg1);

    void on_lntLName_textChanged(const QString &arg1);

    void on_lntLocality_textChanged(const QString &arg1);

    void on_lntStreet_textChanged(const QString &arg1);

    void on_lntHouse_textChanged(const QString &arg1);

    void on_lntApartment_textChanged(const QString &arg1);

    void on_tvCustomers_doubleClicked(const QModelIndex &index);



    void on_chbxNoCustomer_clicked();

    void on_pbtnCreateTask_clicked();

private:
    ConnectToDataBase* mConnToDB;
    Ui::CustomerSearch *ui;

    void updateSearchData(QString condition);
    void openNewTask(QString contractNumber);
};

#endif // CUSTOMERSEARCH_H
