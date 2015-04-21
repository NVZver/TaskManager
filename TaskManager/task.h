#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Task;
}
class ConnectToDataBase;
class Problem;
class Task : public QWidget
{
    Q_OBJECT

public:
    Task(ConnectToDataBase *connToDB, QString contractNumber, QDate dateCompletion, QWidget *parent = 0);
    ~Task();

    ConnectToDataBase *connToDB() const;
    void setConnToDB(ConnectToDataBase *connToDB);

private slots:
    void on_pbtnCreate_clicked();

    void on_pbtnCancel_clicked();

    void on_pbtnAddProblem_clicked();

    void slotRemoveProblem(int id);

private:
    QList<Problem*> mProblemsList;
    ConnectToDataBase* mConnToDB;
    Ui::Task *ui;

    void fillingDetails(QString contractNumber);
    void updateTaskData(QString contractNumber, QDate searchDate);
    void createProblem();
    void removeProblem(int id);
};

#endif // TASK_H
