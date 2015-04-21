#include "problem.h"

Problem::Problem(int id, QList<QString>problemList, QList<QString>resultList, QWidget *parent) : QWidget(parent)
{
    setId(id);
    QHBoxLayout* HBLayout = new QHBoxLayout();
    cbxProblems = new QComboBox();
    cbxProblems->addItems(problemList);
    cbxResults = new QComboBox();
    cbxResults->addItems(resultList);
    pbtnRemove = new QPushButton("-");

    HBLayout->addWidget(cbxProblems);
    HBLayout->addWidget(cbxResults);
    HBLayout->addWidget(pbtnRemove);
    this->setLayout(HBLayout);

    connect(pbtnRemove, SIGNAL(clicked()), SLOT(slotRemoveButtonClicked()));
}

Problem::~Problem()
{

}
int Problem::getTaskID() const
{
    return taskID;
}

void Problem::setTaskID(int value)
{
    taskID = value;
}

int Problem::getId() const
{
    return Id;
}

void Problem::setId(int value)
{
    Id = value;
}
bool Problem::getIsNew() const
{
    return isNew;
}

void Problem::setIsNew(bool value)
{
    isNew = value;
}
int Problem::getProblemValue() const
{
    return problemValue;
}

void Problem::setProblemValue(int value)
{
    problemValue = value;
}
int Problem::getResultValue() const
{
    return resultValue;
}

void Problem::setResultValue(int value)
{
    resultValue = value;
}



void Problem::slotRemoveButtonClicked()
{
    removeProblem(getId());
}






