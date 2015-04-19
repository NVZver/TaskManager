#include "taskmanager.h"
#include "ui_taskmanager.h"

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
}

TaskManager::~TaskManager()
{
    delete ui;
}
