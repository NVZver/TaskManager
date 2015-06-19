#include "taskmanager.h"
#include "authentication.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Authentication auth;
    //auth.show();
    TaskManager tmr;
    tmr.show();
    return a.exec();
}
