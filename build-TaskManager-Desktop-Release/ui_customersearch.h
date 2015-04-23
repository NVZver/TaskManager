/********************************************************************************
** Form generated from reading UI file 'customersearch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerSearch
{
public:
    QTableView *tvCustomers;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chbxNoCustomer;
    QPushButton *pbtnCreateTask;
    QTabWidget *tabWidget;
    QWidget *tabSearchByContract;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblContractNumber;
    QLineEdit *lntContractNumber;
    QLabel *lblPhoneNumber;
    QLineEdit *lntPhoneNumber;
    QLabel *lblLastName;
    QLineEdit *lntLName;
    QWidget *tabSearchByAddress;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblLocality;
    QLineEdit *lntLocality;
    QLabel *label_2;
    QLineEdit *lntStreet;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lntHouse;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lntApartment;

    void setupUi(QWidget *CustomerSearch)
    {
        if (CustomerSearch->objectName().isEmpty())
            CustomerSearch->setObjectName(QStringLiteral("CustomerSearch"));
        CustomerSearch->resize(1067, 248);
        tvCustomers = new QTableView(CustomerSearch);
        tvCustomers->setObjectName(QStringLiteral("tvCustomers"));
        tvCustomers->setGeometry(QRect(350, 70, 711, 171));
        layoutWidget = new QWidget(CustomerSearch);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 188, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chbxNoCustomer = new QCheckBox(layoutWidget);
        chbxNoCustomer->setObjectName(QStringLiteral("chbxNoCustomer"));

        horizontalLayout->addWidget(chbxNoCustomer);

        pbtnCreateTask = new QPushButton(layoutWidget);
        pbtnCreateTask->setObjectName(QStringLiteral("pbtnCreateTask"));
        pbtnCreateTask->setEnabled(false);

        horizontalLayout->addWidget(pbtnCreateTask);

        tabWidget = new QTabWidget(CustomerSearch);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 331, 191));
        tabSearchByContract = new QWidget();
        tabSearchByContract->setObjectName(QStringLiteral("tabSearchByContract"));
        layoutWidget1 = new QWidget(tabSearchByContract);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 12, 311, 131));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lblContractNumber = new QLabel(layoutWidget1);
        lblContractNumber->setObjectName(QStringLiteral("lblContractNumber"));

        verticalLayout_6->addWidget(lblContractNumber);

        lntContractNumber = new QLineEdit(layoutWidget1);
        lntContractNumber->setObjectName(QStringLiteral("lntContractNumber"));

        verticalLayout_6->addWidget(lntContractNumber);

        lblPhoneNumber = new QLabel(layoutWidget1);
        lblPhoneNumber->setObjectName(QStringLiteral("lblPhoneNumber"));

        verticalLayout_6->addWidget(lblPhoneNumber);

        lntPhoneNumber = new QLineEdit(layoutWidget1);
        lntPhoneNumber->setObjectName(QStringLiteral("lntPhoneNumber"));

        verticalLayout_6->addWidget(lntPhoneNumber);

        lblLastName = new QLabel(layoutWidget1);
        lblLastName->setObjectName(QStringLiteral("lblLastName"));

        verticalLayout_6->addWidget(lblLastName);

        lntLName = new QLineEdit(layoutWidget1);
        lntLName->setObjectName(QStringLiteral("lntLName"));

        verticalLayout_6->addWidget(lntLName);

        tabWidget->addTab(tabSearchByContract, QString());
        tabSearchByAddress = new QWidget();
        tabSearchByAddress->setObjectName(QStringLiteral("tabSearchByAddress"));
        layoutWidget2 = new QWidget(tabSearchByAddress);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 21, 311, 137));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblLocality = new QLabel(layoutWidget2);
        lblLocality->setObjectName(QStringLiteral("lblLocality"));

        verticalLayout_2->addWidget(lblLocality);

        lntLocality = new QLineEdit(layoutWidget2);
        lntLocality->setObjectName(QStringLiteral("lntLocality"));

        verticalLayout_2->addWidget(lntLocality);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lntStreet = new QLineEdit(layoutWidget2);
        lntStreet->setObjectName(QStringLiteral("lntStreet"));

        verticalLayout_2->addWidget(lntStreet);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        lntHouse = new QLineEdit(layoutWidget2);
        lntHouse->setObjectName(QStringLiteral("lntHouse"));

        verticalLayout_3->addWidget(lntHouse);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        lntApartment = new QLineEdit(layoutWidget2);
        lntApartment->setObjectName(QStringLiteral("lntApartment"));

        verticalLayout_4->addWidget(lntApartment);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabWidget->addTab(tabSearchByAddress, QString());

        retranslateUi(CustomerSearch);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CustomerSearch);
    } // setupUi

    void retranslateUi(QWidget *CustomerSearch)
    {
        CustomerSearch->setWindowTitle(QApplication::translate("CustomerSearch", "\320\237\320\276\320\270\321\201\320\272 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0));
        chbxNoCustomer->setText(QApplication::translate("CustomerSearch", "\320\235\320\265 \320\272\320\273\320\270\320\265\320\275\321\202", 0));
        pbtnCreateTask->setText(QApplication::translate("CustomerSearch", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", 0));
        lblContractNumber->setText(QApplication::translate("CustomerSearch", "\342\204\226 \320\264\320\276\320\263\320\276\320\262\320\276\321\200\320\260", 0));
        lblPhoneNumber->setText(QApplication::translate("CustomerSearch", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        lblLastName->setText(QApplication::translate("CustomerSearch", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSearchByContract), QApplication::translate("CustomerSearch", "\320\224\320\276\320\263\320\276\320\262\320\276\321\200", 0));
        lblLocality->setText(QApplication::translate("CustomerSearch", "\320\235\320\260\321\201. \320\277\321\203\320\275\320\272\321\202", 0));
        label_2->setText(QApplication::translate("CustomerSearch", "\320\243\320\273\320\270\321\206\320\260", 0));
        label_3->setText(QApplication::translate("CustomerSearch", "\320\224\320\276\320\274", 0));
        label_4->setText(QApplication::translate("CustomerSearch", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSearchByAddress), QApplication::translate("CustomerSearch", "\320\220\320\264\321\200\320\265\321\201", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerSearch: public Ui_CustomerSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSEARCH_H
