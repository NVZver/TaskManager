#include "customersearch.h"
#include "ui_customersearch.h"
#include "connecttodatabase.h"
#include "task.h"
#include "taskmanager.h"

CustomerSearch::CustomerSearch(ConnectToDataBase *connToDB, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerSearch)
{
    ui->setupUi(this);
    setConnToDB(connToDB);
}

CustomerSearch::~CustomerSearch()
{
    delete ui;
}

void CustomerSearch::on_lntContractNumber_textChanged(const QString &arg1)
{
    QString condition = "contracts.contract_number like '"+arg1+"%'";
    updateSearchData(condition);

}

void CustomerSearch::on_lntPhoneNumber_textChanged(const QString &arg1)
{
    QString condition = "contracts.phone_number like '"+arg1+"%'";
    updateSearchData(condition);
}

void CustomerSearch::on_lntLName_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntPhoneNumber->text() !=0)
    {
        condition = "contracts.phone_number like '"+ui->lntPhoneNumber->text()+"%' "
                    "contracts.last_name like '"+arg1+"%'";
    }
    else
    {
        condition = "contracts.last_name like '"+arg1+"%'";
        updateSearchData(condition);
    }

}

void CustomerSearch::on_lntLocality_textChanged(const QString &arg1)
{
    QString condition = "addresses.locality like '"+arg1+"%'";
    updateSearchData(condition);
}

void CustomerSearch::on_lntStreet_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntLocality->text() != "")
    {
        condition = "addresses.locality like '"+ui->lntLocality->text()+"%' "
                "and addresses.street like '"+arg1+"%'";
        updateSearchData(condition);
    }
    else
    {
        condition = "addresses.street like '"+arg1+"%'";
        updateSearchData(condition);
    }
}

void CustomerSearch::on_lntHouse_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntStreet->text() != "" && ui->lntLocality->text() != 0)
    {
        condition = "addresses.locality like '"+ui->lntLocality->text()+"%' "
                "and addresses.street like '"+ui->lntStreet->text()+"%' "
                "and addresses.house like '"+arg1+"%'";
        updateSearchData(condition);
    }
    else
    {
        ui->lntHouse->setText("");
    }
}

void CustomerSearch::on_lntApartment_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntStreet->text() != "" && ui->lntLocality->text() != 0 && ui->lntHouse->text()!="")
    {
        condition = "addresses.locality like '"+ui->lntLocality->text()+"%' "
                "and addresses.street like '"+ui->lntStreet->text()+"%' "
                "and addresses.house like '"+ui->lntHouse->text()+"%' "
                "and addresses.apartment like '"+arg1+"%'";
        updateSearchData(condition);
    }
    else
    {
        ui->lntApartment->setText("");
    }
}

void CustomerSearch::updateSearchData(QString condition)
{
    QString command = "select "
            "contracts.contract_number as 'Договор',"
            "contracts.date_conclusion as 'Дата заключения',"
            "addresses.locality as 'Нас.пункт',"
            "addresses.street as 'Улица',"
            "addresses.house as 'Дом',"
            "addresses.apartment as 'Квартира',"
            "contracts.last_name as 'Фамилия',"
            "contracts.first_name as 'Имя',"
            "contracts.patronymic as 'Отчество',"
            "contracts.phone_number as 'Телефон',"
            "contracts.birthday as 'День рождения',"
            "contracts.passport_series as 'Серия паспорта',"
            "contracts.passport_number as 'Номер паспорта' "
            "from contracts "
            "inner join addresses on addresses.idaddresses = contracts.idstreet "
            "where "+condition;
    mConnToDB->enterCommand(command);
    ui->tvCustomers->setModel(mConnToDB->getQueryModel());
    ui->tvCustomers->resizeColumnsToContents();
    ui->tvCustomers->resizeRowsToContents();

}

void CustomerSearch::openNewTask(QString contractNumber)
{
    Task* newTask = new Task(connToDB(), contractNumber, QDate::currentDate());
    connect(newTask, SIGNAL(CreationCompleted()), this, SIGNAL(CreationCompleted()));
    newTask->show();
}

ConnectToDataBase *CustomerSearch::connToDB() const
{
    return mConnToDB;
}

void CustomerSearch::setConnToDB(ConnectToDataBase *connToDB)
{
    mConnToDB = connToDB;

}

void CustomerSearch::on_tvCustomers_doubleClicked(const QModelIndex &index)
{
    openNewTask(ui->tvCustomers->model()->data(ui->tvCustomers->model()->index(index.row(),0),Qt::DisplayRole).toString());
}

void CustomerSearch::on_chbxNoCustomer_clicked()
{
    if(ui->chbxNoCustomer->isChecked())
    {
        ui->pbtnCreateTask->setEnabled(true);
        ui->tabWidget->setEnabled(false);
        ui->tvCustomers->setEnabled(false);
    }
    else
    {
        ui->pbtnCreateTask->setEnabled(false);
        ui->tabWidget->setEnabled(true);
        ui->tvCustomers->setEnabled(true);
    }
}

void CustomerSearch::on_pbtnCreateTask_clicked()
{
    if(ui->chbxNoCustomer->isChecked())
    {
        openNewTask("");
    }
    else
    {
        openNewTask(ui->tvCustomers->model()->data(ui->tvCustomers->model()->index(activeRow,0),Qt::DisplayRole).toString());
    }
}

void CustomerSearch::on_tvCustomers_pressed(const QModelIndex &index)
{

    activeRow = index.row();
    ui->pbtnCreateTask->setEnabled(true);
}
