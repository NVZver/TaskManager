#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlRelationalDelegate>
#include <QMenu>
#include <QContextMenuEvent>
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

    QModelIndex getActiveItemIndex() const;
    void setActiveItemIndex(QModelIndex value);

private:
    ConnectToDataBase* mConnToDB;
    ComboBoxDelegate *cbxDelegate;
    Ui::TaskManager *ui;
    QModelIndex activeItemIndex;
    QAction *deleteAct;
    QAction *insertAct;


    ///
    /// \brief refresh
    /// Обновляет данные о задачах и пропущенных звонках
    void refreshData();
    void contextMenuEvent(QContextMenuEvent *event);
    void createActions();
    void deleteRowTimeTable(QModelIndex index);

private slots:
    void on_pbtnDayBack_clicked();

    void on_pbtnToday_clicked();

    void on_pbtnDayNext_clicked();

    void on_dteSearch_dateChanged(const QDate &date);

    void on_pbtnCreateTask_clicked();

    void on_tvTasks_doubleClicked(const QModelIndex &index);

    void slotCreationCompleted();

    void slotTimeTableDataChanged(QModelIndex topLeft,QModelIndex bottomRight);

    void slotDeleteRow();

    void slotInsertRow();

    void on_tvTimeTable_pressed(const QModelIndex &index);
};

#endif // TASKMANAGER_H
