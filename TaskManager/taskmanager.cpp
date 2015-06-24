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
//    QString command = "select performers.idPerformers, performers.full_name from performers";
//    mConnToDB->enterCommand(command);
//    QList<QString> idList;
//    QList<QString> itemsList;
//    while(mConnToDB->getQueryModel()->query().next())
//    {
//        idList<<mConnToDB->getQueryModel()->query().value(0).toString();
//        itemsList<<mConnToDB->getQueryModel()->query().value(1).toString();
//    }
//    cbxDelegate = new ComboBoxDelegate(idList,itemsList,this);

//    command.clear();
//    command = "select "
//            "localities.name as 'Нас. Пункт',"
//            "performers.full_name as 'Исполнитель',"
//            "weekdays.name as 'День недели' "
//            "from "
//            "timetable "
//            "inner join localities on localities.idLocalities = timetable.locality "
//            "inner join performers on performers.idPerformers = timetable.performer "
//            "inner join weekdays on weekdays.idweekday = timetable.weekday "
//            "order by timetable.weekday";
//    mConnToDB->enterCommand(command);
//    ui->tvTimeTable->setModel(mConnToDB->getQueryModel());
//    ui->tvTimeTable->setItemDelegateForColumn(1, cbxDelegate);
//    ui->tvTimeTable->resizeColumnsToContents();
//    ui->tvTimeTable->resizeRowsToContents();

    mConnToDB->getRelationalTableModel()->setTable("timetable");
//    connect(mConnToDB->getRelationalTableModel(), SIGNAL(dataChanged(QModelIndex,QModelIndex)),
//            this, SLOT(slotTimeTableDataChanged(QModelIndex,QModelIndex)));
    connect(ui->tvTimeTable->model(), SIGNAL(dataChanged(QModelIndex,QModelIndex)),
            this, SLOT(slotTimeTableDataChanged(QModelIndex,QModelIndex)));

    mConnToDB->getRelationalTableModel()->setRelation(1,QSqlRelation("localities", "idLocalities", "name"));
    mConnToDB->getRelationalTableModel()->setRelation(2,QSqlRelation("performers", "idPerformers", "full_name"));
    mConnToDB->getRelationalTableModel()->setRelation(3,QSqlRelation("weekdays", "idweekday", "name"));
    mConnToDB->getRelationalTableModel()->setSort(1,Qt::AscendingOrder);

    mConnToDB->getRelationalTableModel()->select();
    ui->tvTimeTable->setModel(mConnToDB->getRelationalTableModel());
    ui->tvTimeTable->hideColumn(0);
    ui->tvTimeTable->setItemDelegate(new QSqlRelationalDelegate(ui->tvTimeTable));
}

void TaskManager::updateMissingCalls()
{
    QString strSearchDate;
    strSearchDate = "'"+ui->dteSearch->date().toString("yyyy-MM-dd")+"%'";
    QString selectMissedCalls = "select "
            "missed_calls.end_call as 'Время',"
            "count(missed_calls.number) as 'Кол-во',"
            "missed_calls.number as 'Номер телефона',"
            "contracts.contract_number as 'Номер договора',"
            "contracts.last_name as 'Фамилия', "
            "contracts.first_name as 'Имя',"
            "contracts.patronymic as 'Отчество',"
            "addresses.locality as 'Нас.пункт',"
            "addresses.street as 'Улица',"
            "addresses.house as 'Дом',"
            "addresses.apartment as 'Квартира' "
            "from missed_calls "
            "inner join contracts on contracts.phone_number = missed_calls.number "
            "inner join addresses on addresses.idaddresses = contracts.idlocality "
            "where date_call = " + strSearchDate +
            " group by contract_number "
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
                          "count(problems.name) as 'Кол-во проблем',"
                          "tasks.completed as 'Завершено', "
                          "tasks.locality as 'Нас.пункт', "
                          "tasks.street as 'Улица', "
                          "tasks.house as 'Дом', "
                          "tasks.apartment as 'Квартира', "
                          "problems.name as 'Суть проблемы', "
                          "performers.first_name as 'Имя исполнителя', "
                          "tasks.contract_number as '№ договора' "
                          "from tasks "
                          "inner join performers on performers.idperformer = tasks.performer "
                          "inner join problems on problems.idproblem = tasks.problem"
                          " where tasks.date_completion like"+strSearchDate+
                          "group by tasks.locality, tasks.street,tasks.house,tasks.apartment "
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

void TaskManager::refreshData()
{
    updateTasks();
    updateMissingCalls();
    updateTimeTable();
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

void TaskManager::on_tvTasks_pressed(const QModelIndex &index)
{
    //ui->tvTasks->selectRow(index.row());
    //ui->tvTasks->setStyleSheet("selection-background-color: #FF92BB");
}

void TaskManager::on_tvTimeTable_clicked(const QModelIndex &index)
{

}

void TaskManager::slotTimeTableDataChanged(QModelIndex topLeft, QModelIndex bottomRight)
{
    qDebug()<<"==============================================================";
    qDebug()<<"TOP_LEFT_ROW: "<<topLeft.row()<<" _COLUMN: "<<topLeft.column();
    //qDebug()<<mConnToDB->getRelationalTableModel()->data(topLeft).toString();
    qDebug()<<mConnToDB->getRelationalTableModel()->query().value(0).toString();
    //qDebug()<<"BOTTOM_RIGHT_ROW: "<<bottomRight.row()<<" _COLUMN"<<bottomRight.column();
    qDebug()<<"==============================================================";
    mConnToDB->getRelationalTableModel()->submitAll();
}
