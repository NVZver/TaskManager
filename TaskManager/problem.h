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
    explicit Problem(int id, QList<QString> problemList, QList<QString> resultList, QWidget *parent = 0);
    ~Problem();
    int getTaskID() const;
    void setTaskID(int value);

    int getId() const;
    void setId(int value);

    bool getIsNew() const;
    void setIsNew(bool value);

    int getProblemValue() const;
    void setProblemValue(int value);

    int getResultValue() const;
    void setResultValue(int value);

    QString getStrProblemValue() const;
    void setStrProblemValue(const QString &value);

    QString getStrResultValue() const;
    void setStrResultValue(const QString &value);

private:
    int taskID;
    int Id;
    int problemValue;
    int resultValue;
    QString strProblemValue;
    QString strResultValue;
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
