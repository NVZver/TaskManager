#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Task;
}
class ConnectToDataBase;
class Task : public QWidget
{
    Q_OBJECT

public:
    Task(ConnectToDataBase *connToDB, QString idTask, QDate dateCompletion, QWidget *parent = 0);
    Task(ConnectToDataBase *connToDB, QString contractNumber, QWidget *parent = 0);
    ~Task();

    ConnectToDataBase *connToDB() const;
    void setConnToDB(ConnectToDataBase *connToDB);

private slots:
    void on_pbtnCreate_clicked();

    void on_pbtnCancel_clicked();

    void on_pbtnAddProblem_clicked();

private:
    ConnectToDataBase* mConnToDB;
    Ui::Task *ui;

    void fillingDetails(QString contractNumber);
    void updateTaskData(QString idTask, QDate searchDate);
};

#endif // TASK_H
