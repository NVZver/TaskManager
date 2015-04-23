#include "task.h"
#include "ui_task.h"
#include "connecttodatabase.h"
#include "problem.h"

Task::Task(ConnectToDataBase *connToDB, QString contractNumber, QDate dateCompletion, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Task)
{
    ui->setupUi(this);
    setConnToDB(connToDB);
    fillingDetails(contractNumber);
    updateProblemsData();
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
    ui->lntHouse->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,3),Qt::DisplayRole).toString());
    ui->lntApartment->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,4),Qt::DisplayRole).toString());

}

/// Заполняет списки наименований проблем и результатов
/// \brief Task::updateProblemsData
///
void Task::updateProblemsData()
{
    mProblemsIDList.clear();
    mProblemsNamesList.clear();
    mResultIDList.clear();
    mResultsNameslist.clear();

    mConnToDB->enterCommand("select problems.idproblem, problems.name from problems");
    while(mConnToDB->getQueryModel()->query().next())
    {
        mProblemsIDList<<mConnToDB->getQueryModel()->query().value(0).toString();
        mProblemsNamesList<<mConnToDB->getQueryModel()->query().value(1).toString();
    }
    mConnToDB->enterCommand("select task_results.idtask_result, task_results.result_name from task_results");
    while(mConnToDB->getQueryModel()->query().next())
    {
        mResultIDList<<mConnToDB->getQueryModel()->query().value(0).toString();
        mResultsNameslist<<mConnToDB->getQueryModel()->query().value(1).toString();
    }
}

/// Заполняет gbxProblems
/// \brief Task::updateTaskData
/// \param idTask - Номер задачи
///
void Task::updateTaskData(QString contractNumber, QDate searchDate)
{
    mProblemsList.clear();
    ui->dteDeadline->setDate(searchDate);
    QString command = "select tasks.idtask, problems.name, task_results.result_name , tasks.comment "
                      "from tasks "
                      "inner join problems on problems.idproblem = tasks.problem "
                      "inner join task_results on task_results.idtask_result = tasks.result "
                      "where contract_number = "+contractNumber+" and date_completion like '"+searchDate.toString("yyyy-MM-dd")+"%'";
    mConnToDB->enterCommand(command);
    for(int i = 0; i < mConnToDB->getQueryModel()->rowCount(); ++i)
    {
        createProblem(mProblemsNamesList,mResultsNameslist);
        mProblemsList[i]->setTaskID(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(i,0)).toString());
        mProblemsList[i]->setStrProblemValue(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(i,1)).toString());
        mProblemsList[i]->setStrResultValue(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(i,2)).toString());
        mProblemsList[i]->setIsNew(false);
        ui->txtComment->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(i,3)).toString());
    }

}

/// Создание проблемы и добавление ее на форму
/// \brief Task::createProblem
///
void Task::createProblem(QList<QString> problemsNames, QList<QString> resultsNames)
{
    Problem* nProblem = new Problem(mProblemsList.count(), problemsNames, resultsNames);
    nProblem->setProblemsID(mProblemsIDList);
    nProblem->setResultsID(mResultIDList);
    connect(nProblem, SIGNAL(removeProblem(int)), SLOT(slotRemoveProblem(int)));
    mProblemsList << nProblem;
    ui->vblProblems->addWidget(nProblem);
}

/// Удаление проблемы
/// \brief Task::removeProblem
/// \param id
///
void Task::removeProblem(int id)
{
    qDebug()<<"ID="<<id;
    for(int i = id; i<mProblemsList.count() -1 ; ++i)
    {
        int ii = i;
        ++ii;
        mProblemsList[ii]->setId(i);
    }
    delete mProblemsList[id];
    ui->vblProblems->removeWidget(mProblemsList[id]);
    mProblemsList.removeAt(id);
}

/// Создает новую задачу
/// \brief Task::createTask
/// \param index
///
void Task::createTask(int index)
{
    QList<QString> columnsNamesList;
    QList<QString> valuesList;
    columnsNamesList.clear();
    valuesList.clear();
    columnsNamesList << "date_creation"
                     << "locality"
                     << "street"
                     << "house"
                     << "apartment"
                     << "problem"
                     << "performer"
                     << "date_completion"
                     << "completed"
                     << "result"
                     << "contract_number"
                     << "comment";
    valuesList<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    valuesList<<ui->lntLocality->text();
    valuesList<<ui->lntStreet->text();
    valuesList<<ui->lntHouse->text();
    valuesList<<ui->lntApartment->text();
    valuesList<<mProblemsList[index]->getProblemID();
    valuesList<<"1"; // PERFORMER
    valuesList<<ui->dteDeadline->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    if(mProblemsList[index]->getStrResultValue() != "Завершина"){ valuesList<<"0";}
    else {valuesList<<"1";}
    valuesList<<mProblemsList[index]->getResultID();
    valuesList<<ui->lntContractNumber->text();
    valuesList<<ui->txtComment->toPlainText();
    mConnToDB->insertData("tasks", columnsNamesList, valuesList);
}

/// Обновляет задачу
/// \brief Task::updateTask
/// \param index
///
void Task::updateTask(int index)
{
    QString strCompleted;
    if(mProblemsList[index]->getResultID() == "3"){strCompleted = "1";}
    else {strCompleted = "0";}
    QString command = "UPDATE tasks"
                      " SET result = "+mProblemsList[index]->getResultID()+
                      ", completed = "+strCompleted+
                      ", comment = '"+ui->txtComment->toPlainText()+"'"
                      " WHERE idtask = "+mProblemsList[index]->getTaskID();
    mConnToDB->enterCommand(command);
}

void Task::on_pbtnCreate_clicked()
{
    if(ui->txtComment->toPlainText() != "")
    {
        for(int i = 0; i < mProblemsList.count(); ++i)
        {
            if(mProblemsList[i]->getIsNew())
            {
                createTask(i);
            }
            else
            {
                updateTask(i);
            }
        }
        CreationCompleted();
        this->close();
    }
    else
    {
        ui->txtComment->setStyleSheet("border: 3px solid red;");
    }

}

void Task::on_pbtnCancel_clicked()
{
    this->close();
}

void Task::on_pbtnAddProblem_clicked()
{
    createProblem(mProblemsNamesList,mResultsNameslist);
}

void Task::slotRemoveProblem(int id)
{
    removeProblem(id);
}


ConnectToDataBase *Task::connToDB() const
{
    return mConnToDB;
}

void Task::setConnToDB(ConnectToDataBase *connToDB)
{
    mConnToDB = connToDB;
}

