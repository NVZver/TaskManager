#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QWidget>

namespace Ui {
class Authentication;
}

class Authentication : public QWidget
{
    Q_OBJECT

public:
    explicit Authentication(QWidget *parent = 0);
    ~Authentication();
private:
    QList<QString> _logins;
    QList<QString> _passwords;
    bool checkingLogPass(QString log, QString pass);

private slots:
    void on_pbtnOK_clicked();

    void on_pbtnCancel_clicked();

    void on_lntPassword_returnPressed();

private:
    Ui::Authentication *ui;
};

#endif // AUTHENTICATION_H
