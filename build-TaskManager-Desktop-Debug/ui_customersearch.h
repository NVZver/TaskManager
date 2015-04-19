/********************************************************************************
** Form generated from reading UI file 'customersearch.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSEARCH_H
#define UI_CUSTOMERSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerSearch
{
public:
    QTableView *tvCustomers;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *lblContractNumber;
    QLineEdit *lntContractNumber;
    QLabel *lblPhoneNumber;
    QLineEdit *lntPhoneNumber;
    QLabel *lblLastName;
    QLineEdit *lntLName;
    QLabel *lblLocality;
    QLineEdit *lntLocality;
    QLabel *label_2;
    QLineEdit *lntStreet;
    QLabel *label_3;
    QLineEdit *lntHouse;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbxNoCustomer;
    QPushButton *pbtnCreateTask;

    void setupUi(QWidget *CustomerSearch)
    {
        if (CustomerSearch->objectName().isEmpty())
            CustomerSearch->setObjectName(QStringLiteral("CustomerSearch"));
        CustomerSearch->resize(653, 376);
        tvCustomers = new QTableView(CustomerSearch);
        tvCustomers->setObjectName(QStringLiteral("tvCustomers"));
        tvCustomers->setGeometry(QRect(150, 40, 501, 331));
        widget = new QWidget(CustomerSearch);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 41, 131, 332));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblContractNumber = new QLabel(widget);
        lblContractNumber->setObjectName(QStringLiteral("lblContractNumber"));

        verticalLayout->addWidget(lblContractNumber);

        lntContractNumber = new QLineEdit(widget);
        lntContractNumber->setObjectName(QStringLiteral("lntContractNumber"));

        verticalLayout->addWidget(lntContractNumber);

        lblPhoneNumber = new QLabel(widget);
        lblPhoneNumber->setObjectName(QStringLiteral("lblPhoneNumber"));

        verticalLayout->addWidget(lblPhoneNumber);

        lntPhoneNumber = new QLineEdit(widget);
        lntPhoneNumber->setObjectName(QStringLiteral("lntPhoneNumber"));

        verticalLayout->addWidget(lntPhoneNumber);

        lblLastName = new QLabel(widget);
        lblLastName->setObjectName(QStringLiteral("lblLastName"));

        verticalLayout->addWidget(lblLastName);

        lntLName = new QLineEdit(widget);
        lntLName->setObjectName(QStringLiteral("lntLName"));

        verticalLayout->addWidget(lntLName);

        lblLocality = new QLabel(widget);
        lblLocality->setObjectName(QStringLiteral("lblLocality"));

        verticalLayout->addWidget(lblLocality);

        lntLocality = new QLineEdit(widget);
        lntLocality->setObjectName(QStringLiteral("lntLocality"));

        verticalLayout->addWidget(lntLocality);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lntStreet = new QLineEdit(widget);
        lntStreet->setObjectName(QStringLiteral("lntStreet"));

        verticalLayout->addWidget(lntStreet);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lntHouse = new QLineEdit(widget);
        lntHouse->setObjectName(QStringLiteral("lntHouse"));

        verticalLayout->addWidget(lntHouse);

        widget1 = new QWidget(CustomerSearch);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 188, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbxNoCustomer = new QCheckBox(widget1);
        cbxNoCustomer->setObjectName(QStringLiteral("cbxNoCustomer"));

        horizontalLayout->addWidget(cbxNoCustomer);

        pbtnCreateTask = new QPushButton(widget1);
        pbtnCreateTask->setObjectName(QStringLiteral("pbtnCreateTask"));
        pbtnCreateTask->setEnabled(false);

        horizontalLayout->addWidget(pbtnCreateTask);


        retranslateUi(CustomerSearch);

        QMetaObject::connectSlotsByName(CustomerSearch);
    } // setupUi

    void retranslateUi(QWidget *CustomerSearch)
    {
        CustomerSearch->setWindowTitle(QApplication::translate("CustomerSearch", "Form", 0));
        lblContractNumber->setText(QApplication::translate("CustomerSearch", "\342\204\226 \320\264\320\276\320\263\320\276\320\262\320\276\321\200\320\260", 0));
        lblPhoneNumber->setText(QApplication::translate("CustomerSearch", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        lblLastName->setText(QApplication::translate("CustomerSearch", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        lblLocality->setText(QApplication::translate("CustomerSearch", "\320\235\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        label_2->setText(QApplication::translate("CustomerSearch", "\320\243\320\273\320\270\321\206\320\260", 0));
        label_3->setText(QApplication::translate("CustomerSearch", "\320\224\320\276\320\274", 0));
        cbxNoCustomer->setText(QApplication::translate("CustomerSearch", "\320\235\320\265 \320\272\320\273\320\270\320\265\320\275\321\202", 0));
        pbtnCreateTask->setText(QApplication::translate("CustomerSearch", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerSearch: public Ui_CustomerSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSEARCH_H
