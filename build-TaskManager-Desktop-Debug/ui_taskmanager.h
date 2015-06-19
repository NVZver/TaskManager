/********************************************************************************
** Form generated from reading UI file 'taskmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManager
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabwgt;
    QWidget *tabTasks;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tvTasks;
    QWidget *tabMissedCalls;
    QVBoxLayout *verticalLayout_3;
    QTableView *tvMissedCalls;
    QWidget *tabTimeTable;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QPushButton *pbtnAddStringInTimeTable;
    QTableView *tvTimeTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtnDayBack;
    QPushButton *pbtnToday;
    QPushButton *pbtnDayNext;
    QDateEdit *dteSearch;
    QPushButton *pbtnCreateTask;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *TaskManager)
    {
        if (TaskManager->objectName().isEmpty())
            TaskManager->setObjectName(QStringLiteral("TaskManager"));
        TaskManager->resize(800, 500);
        verticalLayout = new QVBoxLayout(TaskManager);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabwgt = new QTabWidget(TaskManager);
        tabwgt->setObjectName(QStringLiteral("tabwgt"));
        tabTasks = new QWidget();
        tabTasks->setObjectName(QStringLiteral("tabTasks"));
        horizontalLayout_2 = new QHBoxLayout(tabTasks);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tvTasks = new QTableView(tabTasks);
        tvTasks->setObjectName(QStringLiteral("tvTasks"));

        horizontalLayout_2->addWidget(tvTasks);

        tabwgt->addTab(tabTasks, QString());
        tabMissedCalls = new QWidget();
        tabMissedCalls->setObjectName(QStringLiteral("tabMissedCalls"));
        verticalLayout_3 = new QVBoxLayout(tabMissedCalls);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tvMissedCalls = new QTableView(tabMissedCalls);
        tvMissedCalls->setObjectName(QStringLiteral("tvMissedCalls"));

        verticalLayout_3->addWidget(tvMissedCalls);

        tabwgt->addTab(tabMissedCalls, QString());
        tabTimeTable = new QWidget();
        tabTimeTable->setObjectName(QStringLiteral("tabTimeTable"));
        verticalLayout_5 = new QVBoxLayout(tabTimeTable);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(tabTimeTable);
        label->setObjectName(QStringLiteral("label"));
        label->setFocusPolicy(Qt::NoFocus);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(tabTimeTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(tabTimeTable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox_3 = new QComboBox(tabTimeTable);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        comboBox_2 = new QComboBox(tabTimeTable);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        comboBox = new QComboBox(tabTimeTable);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        pbtnAddStringInTimeTable = new QPushButton(tabTimeTable);
        pbtnAddStringInTimeTable->setObjectName(QStringLiteral("pbtnAddStringInTimeTable"));

        verticalLayout_4->addWidget(pbtnAddStringInTimeTable);

        tvTimeTable = new QTableView(tabTimeTable);
        tvTimeTable->setObjectName(QStringLiteral("tvTimeTable"));

        verticalLayout_4->addWidget(tvTimeTable);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabwgt->addTab(tabTimeTable, QString());

        verticalLayout->addWidget(tabwgt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbtnDayBack = new QPushButton(TaskManager);
        pbtnDayBack->setObjectName(QStringLiteral("pbtnDayBack"));

        horizontalLayout->addWidget(pbtnDayBack);

        pbtnToday = new QPushButton(TaskManager);
        pbtnToday->setObjectName(QStringLiteral("pbtnToday"));

        horizontalLayout->addWidget(pbtnToday);

        pbtnDayNext = new QPushButton(TaskManager);
        pbtnDayNext->setObjectName(QStringLiteral("pbtnDayNext"));

        horizontalLayout->addWidget(pbtnDayNext);

        dteSearch = new QDateEdit(TaskManager);
        dteSearch->setObjectName(QStringLiteral("dteSearch"));

        horizontalLayout->addWidget(dteSearch);

        pbtnCreateTask = new QPushButton(TaskManager);
        pbtnCreateTask->setObjectName(QStringLiteral("pbtnCreateTask"));

        horizontalLayout->addWidget(pbtnCreateTask);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TaskManager);

        tabwgt->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TaskManager);
    } // setupUi

    void retranslateUi(QWidget *TaskManager)
    {
        TaskManager->setWindowTitle(QApplication::translate("TaskManager", "TaskManager", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabTasks), QApplication::translate("TaskManager", "\320\227\320\260\320\264\320\260\321\207\320\270", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabMissedCalls), QApplication::translate("TaskManager", "\320\237\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\275\321\213\320\265", 0));
        label->setText(QApplication::translate("TaskManager", "\320\235\320\260\321\201\320\265\320\273\320\265\320\275\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202", 0));
        label_2->setText(QApplication::translate("TaskManager", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", 0));
        label_3->setText(QApplication::translate("TaskManager", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", 0));
        pbtnAddStringInTimeTable->setText(QApplication::translate("TaskManager", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        tabwgt->setTabText(tabwgt->indexOf(tabTimeTable), QApplication::translate("TaskManager", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", 0));
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
