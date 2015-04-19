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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
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
    QTableView *tvMissedCalls;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtnDayBack;
    QPushButton *pbtnToday;
    QPushButton *pbtnDayNext;
    QDateEdit *dteSearch;
    QPushButton *pbtnCreateTask;

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
        tvMissedCalls = new QTableView(tabMissedCalls);
        tvMissedCalls->setObjectName(QStringLiteral("tvMissedCalls"));
        tvMissedCalls->setGeometry(QRect(0, 0, 800, 420));
        tabwgt->addTab(tabMissedCalls, QString());
        widget = new QWidget(TaskManager);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 450, 473, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pbtnDayBack = new QPushButton(widget);
        pbtnDayBack->setObjectName(QStringLiteral("pbtnDayBack"));

        horizontalLayout->addWidget(pbtnDayBack);

        pbtnToday = new QPushButton(widget);
        pbtnToday->setObjectName(QStringLiteral("pbtnToday"));

        horizontalLayout->addWidget(pbtnToday);

        pbtnDayNext = new QPushButton(widget);
        pbtnDayNext->setObjectName(QStringLiteral("pbtnDayNext"));

        horizontalLayout->addWidget(pbtnDayNext);

        dteSearch = new QDateEdit(widget);
        dteSearch->setObjectName(QStringLiteral("dteSearch"));

        horizontalLayout->addWidget(dteSearch);

        pbtnCreateTask = new QPushButton(widget);
        pbtnCreateTask->setObjectName(QStringLiteral("pbtnCreateTask"));

        horizontalLayout->addWidget(pbtnCreateTask);


        retranslateUi(TaskManager);

        tabwgt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskManager);
    } // setupUi

    void retranslateUi(QWidget *TaskManager)
    {
        TaskManager->setWindowTitle(QApplication::translate("TaskManager", "TaskManager", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabTasks), QApplication::translate("TaskManager", "\320\227\320\260\320\264\320\260\321\207\320\270", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabMissedCalls), QApplication::translate("TaskManager", "\320\237\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\275\321\213\320\265", 0));
        pbtnDayBack->setText(QApplication::translate("TaskManager", "<-", 0));
        pbtnToday->setText(QApplication::translate("TaskManager", "\320\241\320\265\320\263\320\276\320\264\320\275\321\217", 0));
        pbtnDayNext->setText(QApplication::translate("TaskManager", "->", 0));
        pbtnCreateTask->setText(QApplication::translate("TaskManager", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskManager: public Ui_TaskManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
