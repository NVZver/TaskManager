#ifndef PROBLEM_H
#define PROBLEM_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLayout>

class Problem : public QWidget
{
    Q_OBJECT
public:
    explicit Problem(int id, QWidget *parent = 0);
    ~Problem();
    int getTaskID() const;
    void setTaskID(int value);

    int getIdResult() const;
    void setIdResult(int value);

    int getId() const;
    void setId(int value);

    bool getIsNew() const;
    void setIsNew(bool value);

private:
    int taskID;
    int Id;
    int IdResult;
    bool isNew;
    QComboBox* cbxProblems;
    QComboBox* cbxResults;
    QPushButton* pbtnRemove;

signals:
    void removeProblem(int id);

public slots:
    void slotRemoveButtonClicked();
};

#endif // PROBLEM_H
