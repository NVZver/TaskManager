#include "authentication.h"
#include "ui_authentication.h"
#include "taskmanager.h"

Authentication::Authentication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authentication)
{
    ui->setupUi(this);
    _logins << "admin" << "oper" << "boss";
    _passwords << "admin" << "qwerty" << "qwertyu1";
    ui->lntPassword->setEchoMode(QLineEdit::Password);
}

Authentication::~Authentication()
{
    delete ui;
}
///
/// \brief Authentication::checkingLogPass
/// \param log
/// \param pass
/// \return
///
bool Authentication::checkingLogPass(QString log, QString pass)
{
    for(int i =0; i<_logins.count(); ++i)
    {
        if(log == _logins[i])
        {
            if(pass == _passwords[i])
            {
                TaskManager* tm = new TaskManager();
                tm->show();
                this->close();
                break;
                return true;

            }
        }
    }
    return false;
}
void Authentication::on_pbtnOK_clicked()
{
    if(!checkingLogPass(ui->lntLogin->text(), ui->lntPassword->text()))
    {
        ui->lntLogin->setText("");
        ui->lntPassword->setText("");
    }
}

void Authentication::on_pbtnCancel_clicked()
{
    this->close();
}

void Authentication::on_lntPassword_returnPressed()
{
    if(!checkingLogPass(ui->lntLogin->text(), ui->lntPassword->text()))
    {
        ui->lntLogin->setText("");
        ui->lntPassword->setText("");
    }
}
