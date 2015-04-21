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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QPushButton *pbtnCreate;
    QTextEdit *txtComment;
    QGroupBox *gbxAddress;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *lblLocality;
    QLineEdit *lntLocality;
    QLabel *lblStreet;
    QLineEdit *lntStreet;
    QLabel *lblHouse;
    QLineEdit *lntHosue;
    QLineEdit *lntApartment;
    QLabel *lblApartment;
    QLabel *lblContractNumber;
    QLineEdit *lntContractNumber;
    QLabel *lblPerformer;
    QComboBox *cbxPerformers;
    QLabel *lblDeadline;
    QDateTimeEdit *dteDeadline;
    QGroupBox *gbxProblems;
    QPushButton *pbtnAddProblem;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vblProblems;
    QPushButton *pbtnCancel;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QStringLiteral("Task"));
        Task->resize(676, 386);
        pbtnCreate = new QPushButton(Task);
        pbtnCreate->setObjectName(QStringLiteral("pbtnCreate"));
        pbtnCreate->setGeometry(QRect(10, 320, 201, 31));
        txtComment = new QTextEdit(Task);
        txtComment->setObjectName(QStringLiteral("txtComment"));
        txtComment->setGeometry(QRect(270, 270, 401, 111));
        gbxAddress = new QGroupBox(Task);
        gbxAddress->setObjectName(QStringLiteral("gbxAddress"));
        gbxAddress->setGeometry(QRect(0, 10, 251, 261));
        layoutWidget = new QWidget(gbxAddress);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 230, 233));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblLocality = new QLabel(layoutWidget);
        lblLocality->setObjectName(QStringLiteral("lblLocality"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblLocality);

        lntLocality = new QLineEdit(layoutWidget);
        lntLocality->setObjectName(QStringLiteral("lntLocality"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lntLocality);

        lblStreet = new QLabel(layoutWidget);
        lblStreet->setObjectName(QStringLiteral("lblStreet"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblStreet);

        lntStreet = new QLineEdit(layoutWidget);
        lntStreet->setObjectName(QStringLiteral("lntStreet"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lntStreet);

        lblHouse = new QLabel(layoutWidget);
        lblHouse->setObjectName(QStringLiteral("lblHouse"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblHouse);

        lntHosue = new QLineEdit(layoutWidget);
        lntHosue->setObjectName(QStringLiteral("lntHosue"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lntHosue);

        lntApartment = new QLineEdit(layoutWidget);
        lntApartment->setObjectName(QStringLiteral("lntApartment"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lntApartment);

        lblApartment = new QLabel(layoutWidget);
        lblApartment->setObjectName(QStringLiteral("lblApartment"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblApartment);

        lblContractNumber = new QLabel(layoutWidget);
        lblContractNumber->setObjectName(QStringLiteral("lblContractNumber"));
        lblContractNumber->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblContractNumber);

        lntContractNumber = new QLineEdit(layoutWidget);
        lntContractNumber->setObjectName(QStringLiteral("lntContractNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lntContractNumber);

        lblPerformer = new QLabel(layoutWidget);
        lblPerformer->setObjectName(QStringLiteral("lblPerformer"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lblPerformer);

        cbxPerformers = new QComboBox(layoutWidget);
        cbxPerformers->setObjectName(QStringLiteral("cbxPerformers"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cbxPerformers);

        lblDeadline = new QLabel(layoutWidget);
        lblDeadline->setObjectName(QStringLiteral("lblDeadline"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lblDeadline);

        dteDeadline = new QDateTimeEdit(layoutWidget);
        dteDeadline->setObjectName(QStringLiteral("dteDeadline"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dteDeadline);

        gbxProblems = new QGroupBox(Task);
        gbxProblems->setObjectName(QStringLiteral("gbxProblems"));
        gbxProblems->setGeometry(QRect(260, 10, 421, 261));
        pbtnAddProblem = new QPushButton(gbxProblems);
        pbtnAddProblem->setObjectName(QStringLiteral("pbtnAddProblem"));
        pbtnAddProblem->setGeometry(QRect(10, 20, 75, 23));
        verticalLayoutWidget = new QWidget(gbxProblems);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 50, 441, 201));
        vblProblems = new QVBoxLayout(verticalLayoutWidget);
        vblProblems->setObjectName(QStringLiteral("vblProblems"));
        vblProblems->setContentsMargins(0, 0, 0, 0);
        pbtnCancel = new QPushButton(Task);
        pbtnCancel->setObjectName(QStringLiteral("pbtnCancel"));
        pbtnCancel->setGeometry(QRect(10, 350, 201, 31));

        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "Form", 0));
        pbtnCreate->setText(QApplication::translate("Task", "OK", 0));
        gbxAddress->setTitle(QApplication::translate("Task", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0));
        lblLocality->setText(QApplication::translate("Task", "\320\275\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        lblStreet->setText(QApplication::translate("Task", "\321\203\320\273\320\270\321\206\320\260", 0));
        lblHouse->setText(QApplication::translate("Task", "\320\264\320\276\320\274", 0));
        lblApartment->setText(QApplication::translate("Task", "\320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260", 0));
        lblContractNumber->setText(QApplication::translate("Task", "\342\204\226 \320\264\320\276\320\263\320\276\320\262\320\260\321\200\320\260", 0));
        lblPerformer->setText(QApplication::translate("Task", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", 0));
        lblDeadline->setText(QApplication::translate("Task", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", 0));
        gbxProblems->setTitle(QApplication::translate("Task", "\320\241\321\203\321\202\321\214 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213", 0));
        pbtnAddProblem->setText(QApplication::translate("Task", "+", 0));
        pbtnCancel->setText(QApplication::translate("Task", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
