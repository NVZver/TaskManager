/********************************************************************************
** Form generated from reading UI file 'taskmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManager
{
public:
    QTabWidget *tabwgt;
    QWidget *tabTasks;
    QTableView *tvTasks;
    QWidget *tabMissedCalls;

    void setupUi(QWidget *TaskManager)
    {
        if (TaskManager->objectName().isEmpty())
            TaskManager->setObjectName(QStringLiteral("TaskManager"));
        TaskManager->resize(800, 500);
        tabwgt = new QTabWidget(TaskManager);
        tabwgt->setObjectName(QStringLiteral("tabwgt"));
        tabwgt->setGeometry(QRect(0, 0, 800, 450));
        tabTasks = new QWidget();
        tabTasks->setObjectName(QStringLiteral("tabTasks"));
        tvTasks = new QTableView(tabTasks);
        tvTasks->setObjectName(QStringLiteral("tvTasks"));
        tvTasks->setGeometry(QRect(0, 0, 800, 420));
        tabwgt->addTab(tabTasks, QString());
        tabMissedCalls = new QWidget();
        tabMissedCalls->setObjectName(QStringLiteral("tabMissedCalls"));
        tabwgt->addTab(tabMissedCalls, QString());

        retranslateUi(TaskManager);

        tabwgt->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TaskManager);
    } // setupUi

    void retranslateUi(QWidget *TaskManager)
    {
        TaskManager->setWindowTitle(QApplication::translate("TaskManager", "TaskManager", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabTasks), QApplication::translate("TaskManager", "\320\227\320\260\320\264\320\260\321\207\320\270", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabMissedCalls), QApplication::translate("TaskManager", "\320\237\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\275\321\213\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskManager: public Ui_TaskManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
