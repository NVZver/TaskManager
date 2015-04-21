#include "task.h"
#include "ui_task.h"
#include "connecttodatabase.h"

Task::Task(ConnectToDataBase *connToDB, QString contractNumber, QDate dateCompletion, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Task)
{
    ui->setupUi(this);
    setConnToDB(connToDB);
    fillingDetails(contractNumber);
    updateTaskData(contractNumber, dateCompletion);
}

Task::~Task()
{
    delete ui;
}

/// Заполнение реквизитов клиента
/// \brief Task::fillingDetails
/// \param contractNumber - Номер контракта
///
void Task::fillingDetails(QString contractNumber)
{
    QString command = "select "
            "contracts.contract_number, "
            "addresses.locality, "
            "addresses.street, "
            "addresses.house, "
            "addresses.apartment "
            "from contracts "
            "inner join addresses on addresses.idaddresses = contracts.idstreet "
            "where contracts.contract_number = '"+contractNumber+"'";
    mConnToDB->enterCommand(command);
    ui->lntContractNumber->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toString());
    ui->lntLocality->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,1),Qt::DisplayRole).toString());
    ui->lntStreet->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,2),Qt::DisplayRole).toString());
    ui->lntHosue->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,3),Qt::DisplayRole).toString());
    ui->lntApartment->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,4),Qt::DisplayRole).toString());

}

/// Заполняет gbxProblems
/// \brief Task::updateTaskData
/// \param idTask - Номер задачи
///
void Task::updateTaskData(QString contractNumber, QDate searchDate)
{
    ui->dteDeadline->setDate(searchDate);
    QString command = "select idtask, problem, result "
                      "from tasks "
                      "where contract_number = "+contractNumber+" and date_completion like '"+searchDate.toString("yyyy-MM-dd")+"%'";
    mConnToDB->enterCommand(command);
    qDebug()<<"QUERY"<<mConnToDB->getQueryModel();

}

void Task::on_pbtnCreate_clicked()
{

}

void Task::on_pbtnCancel_clicked()
{

}

void Task::on_pbtnAddProblem_clicked()
{

}


ConnectToDataBase *Task::connToDB() const
{
    return mConnToDB;
}

void Task::setConnToDB(ConnectToDataBase *connToDB)
{
    mConnToDB = connToDB;
}

