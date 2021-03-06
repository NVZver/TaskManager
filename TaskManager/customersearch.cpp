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
    QString condition = "abonents.contract like '"+arg1+"%'";
    updateSearchData(condition);

}

void CustomerSearch::on_lntPhoneNumber_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntLName->text() == 0)
    {
        for(int i=1; i<4; i++)
        {
            condition = "abonents.phone_number"+QString::number(i)+" like '"+arg1+"%'";
            if(updateSearchData(condition))
            {
                break;
            }
        }
    }
    else
    {
        for(int i=1; i<4; i++)
        {
            condition = "abonents.phone_number"+QString::number(i)+" like '"+arg1+"%' "
                        "and abonents.full_name like '"+ui->lntLName->text()+"%'";
            if(updateSearchData(condition))
            {
                break;
            }
        }
    }

}

void CustomerSearch::on_lntLName_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntPhoneNumber->text() !=0)
    {
        for(int i=1; i<4; i++)
        {
            condition = "abonents.phone_number"+QString::number(i)+" like '"+ui->lntPhoneNumber->text()+"%' "
                        "and abonents.full_name like '"+arg1+"%'";
            if(updateSearchData(condition))
            {
                break;
            }
        }
    }
    else
    {
        condition = "abonents.full_name like '"+arg1+"%'";
        updateSearchData(condition);
    }

}

void CustomerSearch::on_lntLocality_textChanged(const QString &arg1)
{
    QString condition = "localities.name like '"+arg1+"%'";
    updateSearchData(condition);
}

void CustomerSearch::on_lntStreet_textChanged(const QString &arg1)
{
    QString condition;
    if(ui->lntLocality->text() != "")
    {
        condition = "localities.name like '"+ui->lntLocality->text()+"%' "
                "and abonents.address like '"+arg1+"%'";
        updateSearchData(condition);
    }
    else
    {
        condition = "abonents.address like '"+arg1+"%'";
        updateSearchData(condition);
    }
}

bool CustomerSearch::updateSearchData(QString condition)
{
    QString command = "select "
            "abonents.contract as 'Договор',"
            "abonents.date_conclusion as 'Дата заключения',"
            "localities.name as 'Нас.пункт',"
            "abonents.address as 'Адрес',"
            "abonents.full_name as 'Полное имя',"
            "abonents.phone_number1 as 'Телефон1',"
            "abonents.phone_number2 as 'Телефон2',"
            "abonents.phone_number3 as 'Телефон3',"
            "abonents.birthday as 'День рождения',"
            "abonents.passport_series as 'Серия паспорта',"
            "abonents.passport_number as 'Номер паспорта' "
            "from abonents "
            "inner join localities on localities.idLocalities = abonents.idLocalities "
            "where "+condition;
    mConnToDB->enterCommand(command);
    ui->tvCustomers->setModel(mConnToDB->getQueryModel());
    ui->tvCustomers->resizeColumnsToContents();
    ui->tvCustomers->resizeRowsToContents();
    return mConnToDB->getQueryModel()->query().isValid();
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
    ui->tvCustomers->selectRow(index.row());
}
