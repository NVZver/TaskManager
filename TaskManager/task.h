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
    QString getAbonentID() const;
    void setAbonentID(const QString &value);

    int getLocalityID() const;
    void setLocalityID(int value);

signals:
    void CreationCompleted();

private slots:
    void on_pbtnCreate_clicked();

    void on_pbtnCancel_clicked();

    void on_pbtnAddProblem_clicked();

    void slotRemoveProblem(int id);

private:
    int localityID;
    QString abonentID;
    QList<QString> mProblemsIDList;
    QList<QString> mProblemsNamesList;
    QList<QString> mResultIDList;
    QList<QString> mResultsNameslist;
    QList<Problem*> mProblemsList;
    ConnectToDataBase* mConnToDB;
    Ui::Task *ui;

    void fillingDetails(QString contractNumber);
    void updateProblemsData();
    void updateTaskData(QString contractNumber, QDate searchDate);
    void createProblem(QList<QString> problemsNames, QList<QString> resultsNames);
    void removeProblem(int id);
    void createTask(int index);
    void updateTask(int index);
    int selectPerformer(QDateTime datetime);
    QDateTime selectDateCompletion(int localityID, QDateTime date_creation);
};

#endif // TASK_H
