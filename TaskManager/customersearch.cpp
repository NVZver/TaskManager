#include "customersearch.h"
#include "ui_customersearch.h"

CustomerSearch::CustomerSearch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerSearch)
{
    ui->setupUi(this);
}

CustomerSearch::~CustomerSearch()
{
    delete ui;
}

void CustomerSearch::on_lntContractNumber_textChanged(const QString &arg1)
{

}

void CustomerSearch::on_lntPhoneNumber_textChanged(const QString &arg1)
{

}

void CustomerSearch::on_lntLName_textChanged(const QString &arg1)
{

}

void CustomerSearch::on_lntLocality_textChanged(const QString &arg1)
{

}

void CustomerSearch::on_lntStreet_textChanged(const QString &arg1)
{

}

void CustomerSearch::on_lntHouse_textChanged(const QString &arg1)
{

}
