#ifndef PROBLEM_H
#define PROBLEM_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLayout>
#include <QDebug>
class Problem : public QWidget
{
    Q_OBJECT
public:
    explicit Problem(int id, QList<QString> problemList, QList<QString> resultList, QWidget *parent = 0);
    ~Problem();
    QString getTaskID() const;
    void setTaskID(QString value);

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

    QList<QString> getProblemsID() const;
    void setProblemsID(const QList<QString> &value);
    QString getProblemID();

    QList<QString> getResultsID() const;
    void setResultsID(const QList<QString> &value);
    QString getResultID();
private:
    QString taskID;
    int Id;
    int problemValue;
    QList<QString>problemsID;
    int resultValue;
    QList<QString> resultsID;
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
