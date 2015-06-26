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
            "abonents.idAbonent, "
            "abonents.contract, "
            "localities.name, "
            "localities.idLocalities, "
            "abonents.address "
            "from abonents "
            "inner join localities on localities.idLocalities = abonents.idLocalities "
            "where abonents.contract = '"+contractNumber+"'";
    mConnToDB->enterCommand(command);
    this->setAbonentID(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toString());
    ui->lntContractNumber->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,1),Qt::DisplayRole).toString());
    ui->lntLocality->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,2),Qt::DisplayRole).toString());
    this->setLocalityID(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,3),Qt::DisplayRole).toInt());
    ui->lntAddress->setText(mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,4),Qt::DisplayRole).toString());
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

    mConnToDB->enterCommand("select problems.idProblems, problems.name from problems");
    while(mConnToDB->getQueryModel()->query().next())
    {
        mProblemsIDList<<mConnToDB->getQueryModel()->query().value(0).toString();
        mProblemsNamesList<<mConnToDB->getQueryModel()->query().value(1).toString();
    }
    mConnToDB->enterCommand("select task_results.idResults, task_results.name from task_results");
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
    QString command = "select tasks.idTasks, problems.name, task_results.name , tasks.comment "
                      "from tasks "
                      "inner join problems on problems.idProblems = tasks.problem "
                      "inner join task_results on task_results.idResults = tasks.result "
                      "where idAbonent = (select idAbonent from abonents where contract = "+contractNumber+") and date_completion like '"+searchDate.toString("yyyy-MM-dd")+"%'";
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
    //ЗДЕСЬ ЮЗАЕТСЯ
    QDateTime dateCompleted;
    dateCompleted = this->selectDateCompletion(this->getLocalityID(), QDateTime::currentDateTime());
    this->selectPerformer(dateCompleted);
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
    nProblem->cbxResults->setCurrentIndex(nProblem->cbxResults->findText("Ожидание"));
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
                     << "idAbonent"
                     << "problem"
                     << "performer"
                     << "date_completion"
                     << "result"
                     << "completed"
                     << "comment";
    valuesList<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); //????
    valuesList<<getAbonentID();
    valuesList<<mProblemsList[index]->getProblemID();
    valuesList<<"7"; // PERFORMER
    valuesList<<ui->dteDeadline->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    valuesList<<mProblemsList[index]->getResultID();
    if(mProblemsList[index]->getStrResultValue() != "Завершена"){ valuesList<<"0";}
    else {valuesList<<"1";}
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

    for(int i = 0; i<mProblemsList.count();++i)
    {
        if(mProblemsList[i]->getResultID() != "3")
        {
            strCompleted = "0";
            break;
        }
        else
        {
            strCompleted = "1";
        }
    }
    QString command = "UPDATE tasks"
                      " SET result = "+mProblemsList[index]->getResultID()+
                      ", completed = "+strCompleted+
                      ", comment = '"+ui->txtComment->toPlainText()+"'"
                      " WHERE idtask = "+mProblemsList[index]->getTaskID();
    mConnToDB->enterCommand(command);
}

int Task::selectPerformer(QDateTime datetime)
{
    QString command = "select "
                      "performer, "
                      "date_completion "
                      "from tasks "
                      "where date_completion = (select min(date_completion) from tasks where date_completion like '"+datetime.date().toString("yyy-MM-dd")+"%')";
    mConnToDB->enterCommand(command);
    qDebug()<<"PERFORMER = "<<mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toInt();
    return mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toInt();
}

QDateTime Task::selectDateCompletion(int localityID, QDateTime date_creation)
{
    int dayID;

    QString command = "select weekday from timetable where locality = "+QString::number(localityID);
    mConnToDB->enterCommand(command);
    dayID = mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toInt();

    int dayNumber;
    command.clear();
    command = "select day_number from weekdays where idweekday = "+QString::number(dayID);
    mConnToDB->enterCommand(command);
    dayNumber = mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toInt();

    QDateTime dateCompletion = date_creation;
    QDate date;
    date = dateCompletion.date();

    while(dayNumber != dateCompletion.date().dayOfWeek())
    {
        qDebug()<<dateCompletion.date().dayOfWeek();
        dateCompletion.setDate(date.addDays(+1));
        date = dateCompletion.date();
    }
    int totalRuntime = 0;
    for(int i =0; i<this->mProblemsList.count(); i++)
    {
        command.clear();
        command = "select runtime_minute from problems where idProblems = "+this->mProblemsList[i]->getResultID();
        mConnToDB->enterCommand(command);
        totalRuntime += mConnToDB->getQueryModel()->data(mConnToDB->getQueryModel()->index(0,0),Qt::DisplayRole).toInt();
    }
    totalRuntime *= 60;
    dateCompletion.time().addSecs((int)totalRuntime);
    qDebug()<<"TOTAL_RUNTIME = " << totalRuntime;
    qDebug()<<"DATE_COMPLETION = "<< dateCompletion.toString("yyyy-MM-dd hh:mm:ss");
    return dateCompletion;
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
int Task::getLocalityID() const
{
    return localityID;
}

void Task::setLocalityID(int value)
{
    localityID = value;
}


QString Task::getAbonentID() const
{
    return abonentID;
}

void Task::setAbonentID(const QString &value)
{
    abonentID = value;
}

ConnectToDataBase *Task::connToDB() const
{
    return mConnToDB;
}

void Task::setConnToDB(ConnectToDataBase *connToDB)
{
    mConnToDB = connToDB;
}

