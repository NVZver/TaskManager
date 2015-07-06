#include "taskmanager.h"
#include "ui_taskmanager.h"
#include "customersearch.h"
#include "connecttodatabase.h"
#include "task.h"

// Главная форма приложения
// Отображается: информация о задачах на сегодня
// Пропущенные звонки
// Возможность поиска задач и звонков по дате
// Переход на формы поиска клиента, создания задачи, просмотр/изменение состояния задачи

TaskManager::TaskManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskManager)
{
    ui->setupUi(this);
    setConnToDB(new ConnectToDataBase());
    ui->dteSearch->setDate(QDate::currentDate());
    ui->dteSearch->setCalendarPopup(true);
    refreshData();
    this->createActions();
}

TaskManager::~TaskManager()
{
    delete ui;
}

ConnectToDataBase *TaskManager::connToDB() const
{
    return mConnToDB;

}

void TaskManager::setConnToDB(ConnectToDataBase *connToDB)
{
    mConnToDB = connToDB;
}

void TaskManager::updateTimeTable()
{
    mConnToDB->getRelationalTableModel()->setTable("timetable");
    connect(ui->tvTimeTable->model(), SIGNAL(dataChanged(QModelIndex,QModelIndex)),
            this, SLOT(slotTimeTableDataChanged(QModelIndex,QModelIndex)));

    mConnToDB->getRelationalTableModel()->setRelation(1,QSqlRelation("localities", "idLocalities", "name"));
    mConnToDB->getRelationalTableModel()->setRelation(2,QSqlRelation("performers", "idPerformers", "full_name"));
    mConnToDB->getRelationalTableModel()->setRelation(3,QSqlRelation("weekdays", "idweekday", "name"));
    mConnToDB->getRelationalTableModel()->setHeaderData(1,Qt::Horizontal,QObject::tr("Нас.пункт"));
    mConnToDB->getRelationalTableModel()->setHeaderData(2,Qt::Horizontal,QObject::tr("Исполнитель"));
    mConnToDB->getRelationalTableModel()->setHeaderData(3,Qt::Horizontal,QObject::tr("День недели"));
    mConnToDB->getRelationalTableModel()->select();
    ui->tvTimeTable->setModel(mConnToDB->getRelationalTableModel());
    ui->tvTimeTable->hideColumn(0);
    ui->tvTimeTable->setItemDelegate(new QSqlRelationalDelegate(ui->tvTimeTable));
}

void TaskManager::updateMissingCalls()
{
    QString strSearchDate;
    strSearchDate = "'"+ui->dteSearch->date().toString("yyyy-MM-dd")+"%'";
    QString selectMissedCalls = "SELECT "
            "calls.end_call, "
            "count(calls.phone_number), "
            "abonents.contract, "
            "abonents.full_name, "
            "localities.name, "
            "abonents.address "
            "FROM calls "
            "inner join abonents on abonents.phone_number1 = calls.phone_number or "
            "abonents.phone_number2 = calls.phone_number or "
            "abonents.phone_number3 = calls.phone_number "
            "inner join localities on localities.idLocalities = abonents.idLocalities "
            "where calls.end_call = " + strSearchDate +
            " group by abonents.contract "
            "order by end_call ";

    mConnToDB->enterCommand(selectMissedCalls);
    ui->tvMissedCalls->setModel(mConnToDB->getQueryModel());
    ui->tvMissedCalls->resizeColumnsToContents();
    ui->tvMissedCalls->resizeRowsToContents();
}

void TaskManager::updateTasks()
{
    QString strSearchDate;
    strSearchDate = "'"+ui->dteSearch->date().toString("yyyy-MM-dd")+"%'";
    QString selectTasks = "select "
                          "tasks.date_completion as 'Дата выполнения', "
                          "count(tasks.problem) as 'Кол-во проблем',"
                          "tasks.completed as 'Завершено', "
                          "localities.name as 'Нас.пункт', "
                          "abonents.address as 'Адрес', "
                          "problems.name as 'Суть проблемы', "
                          "performers.full_name as 'Исполнитель', "
                          "abonents.contract as '№ договора' "
                          "from tasks "
                          "inner join abonents on abonents.idAbonent = tasks.idAbonent "
                          "inner join problems on problems.idProblems = tasks.problem "
                          "inner join performers on performers.idPerformers = tasks.performer "
                          "inner join localities on localities.idLocalities = abonents.idLocalities "
                          "where tasks.date_completion like "+strSearchDate+
                          "group by tasks.idAbonent "
                          "order by tasks.date_completion "
                          "and tasks.completed";

    mConnToDB->enterCommand(selectTasks);
    QBrush rowColor;

    ui->tvTasks->setModel(mConnToDB->getQueryModel());

    for(int i =0; i<mConnToDB->getQueryModel()->rowCount(); ++i)
    {
        if(ui->tvTasks->model()->data(mConnToDB->getQueryModel()->index(i,2)).toString() == "1")
        {
            rowColor.setColor(Qt::gray);
            ui->tvTasks->model()->setData(mConnToDB->getQueryModel()->index(i,2), rowColor, Qt::BackgroundRole);
            qDebug()<<ui->tvTasks->model()->data(mConnToDB->getQueryModel()->index(i,2),Qt::BackgroundRole);

        }
    }
    ui->tvTasks->resizeColumnsToContents();
    ui->tvTasks->resizeRowsToContents();
}
QModelIndex TaskManager::getActiveItemIndex() const
{
    return activeItemIndex;
}

void TaskManager::setActiveItemIndex(QModelIndex value)
{
    activeItemIndex = value;
}

void TaskManager::refreshData()
{
    updateTasks();
    updateMissingCalls();
    updateTimeTable();
}

void TaskManager::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(ui->tvTimeTable);
    menu.addAction(this->insertAct);
    menu.addAction(this->deleteAct);
    menu.exec(event->globalPos());
}

void TaskManager::createActions()
{
    this->insertAct = new QAction(tr("&Insert"),this);
    //this->insertAct->setShortcut(QKeySequence::New);
    this->setStatusTip(tr("Добавляет новую строку в конец списка."));
    connect(insertAct, SIGNAL(triggered()), this, SLOT(slotInsertRow()));

    this->deleteAct = new QAction(tr("&Delete"),this);
    //this->deleteAct->setShortcut(QKeySequence::Delete);
    this->setStatusTip(tr("Удаляет выбранную строку."));
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(slotDeleteRow()));
}

void TaskManager::deleteRowTimeTable(QModelIndex index)
{
    mConnToDB->getRelationalTableModel()->removeRow(index.row());
    mConnToDB->getRelationalTableModel()->submitAll();
    this->updateTimeTable();
}

void TaskManager::on_pbtnDayBack_clicked()
{
    QDate dte = ui->dteSearch->date();
    ui->dteSearch->setDate(dte.addDays(-1));
}

void TaskManager::on_pbtnToday_clicked()
{
    ui->dteSearch->setDate(QDate::currentDate());
}

void TaskManager::on_pbtnDayNext_clicked()
{
    QDate dte = ui->dteSearch->date();
    ui->dteSearch->setDate(dte.addDays(+1));
}

void TaskManager::on_dteSearch_dateChanged(const QDate &date)
{
    refreshData();
}

void TaskManager::on_pbtnCreateTask_clicked()
{
    CustomerSearch *customerSearch = new CustomerSearch(connToDB());
    connect(customerSearch, SIGNAL(CreationCompleted()), SLOT(slotCreationCompleted()));
    customerSearch->show();
}

void TaskManager::on_tvTasks_doubleClicked(const QModelIndex &index)
{
    QString contractNimber = ui->tvTasks->model()->data(ui->tvTasks->model()->index(index.row(),9),Qt::DisplayRole).toString();
    Task* newTask = new Task(connToDB(),contractNimber, ui->dteSearch->date());
    connect(newTask, SIGNAL(CreationCompleted()), SLOT(slotCreationCompleted()));
    newTask->show();
}

void TaskManager::slotCreationCompleted()
{
    refreshData();
}

void TaskManager::slotTimeTableDataChanged(QModelIndex topLeft, QModelIndex bottomRight)
{
    mConnToDB->getRelationalTableModel()->submitAll();
}

void TaskManager::slotDeleteRow()
{
    this->deleteRowTimeTable(this->activeItemIndex);
}

void TaskManager::slotInsertRow()
{
    mConnToDB->getRelationalTableModel()->insertRow(mConnToDB->getRelationalTableModel()->rowCount());
}

void TaskManager::on_tvTimeTable_pressed(const QModelIndex &index)
{
    this->setActiveItemIndex(index);
}
