#ifndef CUSTOMERSEARCH_H
#define CUSTOMERSEARCH_H

#include <QWidget>

namespace Ui {
class CustomerSearch;
}

class CustomerSearch : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerSearch(QWidget *parent = 0);
    ~CustomerSearch();

private slots:
    void on_lntContractNumber_textChanged(const QString &arg1);

    void on_lntPhoneNumber_textChanged(const QString &arg1);

    void on_lntLName_textChanged(const QString &arg1);

    void on_lntLocality_textChanged(const QString &arg1);

    void on_lntStreet_textChanged(const QString &arg1);

    void on_lntHouse_textChanged(const QString &arg1);

private:
    Ui::CustomerSearch *ui;
};

#endif // CUSTOMERSEARCH_H
