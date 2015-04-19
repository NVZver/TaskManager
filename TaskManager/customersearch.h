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

private:
    Ui::CustomerSearch *ui;
};

#endif // CUSTOMERSEARCH_H
