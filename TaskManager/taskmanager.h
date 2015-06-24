#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlRelationalDelegate>
#include <comboboxdelegate.h>
namespace Ui {
class TaskManager;
}

class ConnectToDataBase;
class TaskManager : public QWidget
{
    Q_OBJECT

public:
    explicit TaskManager(QWidget *parent = 0);
    ~TaskManager();

    ConnectToDataBase *connToDB() const;
    void setConnToDB(ConnectToDataBase *connToDB);

    void updateTimeTable();
    void updateMissingCalls();
    void updateTasks();

private:
    ConnectToDataBase* mConnToDB;
    ComboBoxDelegate *cbxDelegate;
    Ui::TaskManager *ui;
    ///
    /// \brief refresh
    /// Обновляет данные о задачах и пропущенных звонках
    void refreshData();

private slots:
    void on_pbtnDayBack_clicked();

    void on_pbtnToday_clicked();

    void on_pbtnDayNext_clicked();

    void on_dteSearch_dateChanged(const QDate &date);

    void on_pbtnCreateTask_clicked();

    void on_tvTasks_doubleClicked(const QModelIndex &index);

    void slotCreationCompleted();

    void on_tvTasks_pressed(const QModelIndex &index);

    void on_tvTimeTable_clicked(const QModelIndex &index);

    void slotTimeTableDataChanged(QModelIndex topLeft,QModelIndex bottomRight);
};

#endif // TASKMANAGER_H
