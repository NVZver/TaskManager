#ifndef TASK_H
#define TASK_H

#include <QWidget>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = 0);
    ~Task();

private slots:
    void on_pbtnCreate_clicked();

    void on_pbtnCancel_clicked();

    void on_pbtnAddProblem_clicked();

private:
    Ui::Task *ui;
};

#endif // TASK_H
