/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbxAddress;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *lblLocality;
    QLineEdit *lntLocality;
    QLabel *lblStreet;
    QLineEdit *lntStreet;
    QLabel *lblHouse;
    QLineEdit *lntHouse;
    QLineEdit *lntApartment;
    QLabel *lblApartment;
    QLabel *lblContractNumber;
    QLineEdit *lntContractNumber;
    QLabel *lblPerformer;
    QComboBox *cbxPerformers;
    QLabel *lblDeadline;
    QDateTimeEdit *dteDeadline;
    QGroupBox *gbxProblems;
    QVBoxLayout *verticalLayout;
    QPushButton *pbtnAddProblem;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vblProblems;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblComment;
    QTextEdit *txtComment;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbtnCreate;
    QPushButton *pbtnCancel;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QStringLiteral("Task"));
        Task->resize(410, 644);
        verticalLayout_4 = new QVBoxLayout(Task);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gbxAddress = new QGroupBox(Task);
        gbxAddress->setObjectName(QStringLiteral("gbxAddress"));
        gbxAddress->setMinimumSize(QSize(200, 200));
        gbxAddress->setMaximumSize(QSize(800, 800));
        verticalLayout_5 = new QVBoxLayout(gbxAddress);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(3);
        lblLocality = new QLabel(gbxAddress);
        lblLocality->setObjectName(QStringLiteral("lblLocality"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblLocality);

        lntLocality = new QLineEdit(gbxAddress);
        lntLocality->setObjectName(QStringLiteral("lntLocality"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lntLocality);

        lblStreet = new QLabel(gbxAddress);
        lblStreet->setObjectName(QStringLiteral("lblStreet"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblStreet);

        lntStreet = new QLineEdit(gbxAddress);
        lntStreet->setObjectName(QStringLiteral("lntStreet"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lntStreet);

        lblHouse = new QLabel(gbxAddress);
        lblHouse->setObjectName(QStringLiteral("lblHouse"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblHouse);

        lntHouse = new QLineEdit(gbxAddress);
        lntHouse->setObjectName(QStringLiteral("lntHouse"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lntHouse);

        lntApartment = new QLineEdit(gbxAddress);
        lntApartment->setObjectName(QStringLiteral("lntApartment"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lntApartment);

        lblApartment = new QLabel(gbxAddress);
        lblApartment->setObjectName(QStringLiteral("lblApartment"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblApartment);

        lblContractNumber = new QLabel(gbxAddress);
        lblContractNumber->setObjectName(QStringLiteral("lblContractNumber"));
        lblContractNumber->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblContractNumber);

        lntContractNumber = new QLineEdit(gbxAddress);
        lntContractNumber->setObjectName(QStringLiteral("lntContractNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lntContractNumber);

        lblPerformer = new QLabel(gbxAddress);
        lblPerformer->setObjectName(QStringLiteral("lblPerformer"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lblPerformer);

        cbxPerformers = new QComboBox(gbxAddress);
        cbxPerformers->setObjectName(QStringLiteral("cbxPerformers"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cbxPerformers);

        lblDeadline = new QLabel(gbxAddress);
        lblDeadline->setObjectName(QStringLiteral("lblDeadline"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lblDeadline);

        dteDeadline = new QDateTimeEdit(gbxAddress);
        dteDeadline->setObjectName(QStringLiteral("dteDeadline"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dteDeadline);


        verticalLayout_5->addLayout(formLayout);


        verticalLayout_4->addWidget(gbxAddress);

        gbxProblems = new QGroupBox(Task);
        gbxProblems->setObjectName(QStringLiteral("gbxProblems"));
        gbxProblems->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(gbxProblems);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbtnAddProblem = new QPushButton(gbxProblems);
        pbtnAddProblem->setObjectName(QStringLiteral("pbtnAddProblem"));
        pbtnAddProblem->setMaximumSize(QSize(100, 16777215));
        pbtnAddProblem->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(pbtnAddProblem);

        scrollArea = new QScrollArea(gbxProblems);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 200));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 370, 198));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        vblProblems = new QVBoxLayout();
        vblProblems->setObjectName(QStringLiteral("vblProblems"));

        horizontalLayout->addLayout(vblProblems);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_4->addWidget(gbxProblems);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lblComment = new QLabel(Task);
        lblComment->setObjectName(QStringLiteral("lblComment"));

        verticalLayout_3->addWidget(lblComment);

        txtComment = new QTextEdit(Task);
        txtComment->setObjectName(QStringLiteral("txtComment"));

        verticalLayout_3->addWidget(txtComment);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pbtnCreate = new QPushButton(Task);
        pbtnCreate->setObjectName(QStringLiteral("pbtnCreate"));
        pbtnCreate->setMaximumSize(QSize(150, 16777215));

        verticalLayout_2->addWidget(pbtnCreate);

        pbtnCancel = new QPushButton(Task);
        pbtnCancel->setObjectName(QStringLiteral("pbtnCancel"));
        pbtnCancel->setMaximumSize(QSize(150, 16777215));

        verticalLayout_2->addWidget(pbtnCancel);


        verticalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "\320\227\320\260\320\264\320\260\321\207\320\260", 0));
        gbxAddress->setTitle(QApplication::translate("Task", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0));
        lblLocality->setText(QApplication::translate("Task", "\320\275\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        lblStreet->setText(QApplication::translate("Task", "\321\203\320\273\320\270\321\206\320\260", 0));
        lblHouse->setText(QApplication::translate("Task", "\320\264\320\276\320\274", 0));
        lblApartment->setText(QApplication::translate("Task", "\320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260", 0));
        lblContractNumber->setText(QApplication::translate("Task", "\342\204\226 \320\264\320\276\320\263\320\276\320\262\320\260\321\200\320\260", 0));
        lblPerformer->setText(QApplication::translate("Task", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", 0));
        lblDeadline->setText(QApplication::translate("Task", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", 0));
        gbxProblems->setTitle(QApplication::translate("Task", "\320\237\321\200\320\276\320\261\320\273\320\265\320\274\321\213", 0));
        pbtnAddProblem->setText(QApplication::translate("Task", "+", 0));
        lblComment->setText(QApplication::translate("Task", "\320\232\320\276\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        pbtnCreate->setText(QApplication::translate("Task", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pbtnCancel->setText(QApplication::translate("Task", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
