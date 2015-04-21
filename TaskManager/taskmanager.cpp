#include "taskmanager.h"
#include "ui_taskmanager.h"
#include "customersearch.h"

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
    connDataBase = new ConnectToDataBase();
}

TaskManager::~TaskManager()
{
    delete ui;
}

void TaskManager::refresh()
{

}



void TaskManager::on_pbtnDayBack_clicked()
{

}

void TaskManager::on_pbtnToday_clicked()
{

}

void TaskManager::on_pbtnDayNext_clicked()
{

}

void TaskManager::on_dteSearch_dateChanged(const QDate &date)
{

}

void TaskManager::on_pbtnCreateTask_clicked()
{
    CustomerSearch *customerSearch = new CustomerSearch();
    customerSearch->show();
}
