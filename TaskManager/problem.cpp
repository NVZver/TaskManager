#include "problem.h"

Problem::Problem(int id, QWidget *parent) : QWidget(parent)
{
    setId(id);
    QHBoxLayout* HBLayout = new QHBoxLayout();
    cbxProblems = new QComboBox();
    cbxResults = new QComboBox();
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

int Problem::getIdResult() const
{
    return IdResult;
}

void Problem::setIdResult(int value)
{
    IdResult = value;
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

void Problem::slotRemoveButtonClicked()
{
    removeProblem(getId());
}






