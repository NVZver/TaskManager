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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerSearch
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chbxNoCustomer;
    QPushButton *pbtnCreateTask;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabSearchByContract;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblContractNumber;
    QLineEdit *lntContractNumber;
    QLabel *lblPhoneNumber;
    QLineEdit *lntPhoneNumber;
    QLabel *lblLastName;
    QLineEdit *lntLName;
    QSpacerItem *verticalSpacer;
    QWidget *tabSearchByAddress;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblLocality;
    QLineEdit *lntLocality;
    QLabel *label_2;
    QLineEdit *lntStreet;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lntHouse;
    QLineEdit *lntApartment;
    QSpacerItem *verticalSpacer_2;
    QTableView *tvCustomers;

    void setupUi(QWidget *CustomerSearch)
    {
        if (CustomerSearch->objectName().isEmpty())
            CustomerSearch->setObjectName(QStringLiteral("CustomerSearch"));
        CustomerSearch->resize(1067, 248);
        verticalLayout = new QVBoxLayout(CustomerSearch);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chbxNoCustomer = new QCheckBox(CustomerSearch);
        chbxNoCustomer->setObjectName(QStringLiteral("chbxNoCustomer"));

        horizontalLayout->addWidget(chbxNoCustomer);

        pbtnCreateTask = new QPushButton(CustomerSearch);
        pbtnCreateTask->setObjectName(QStringLiteral("pbtnCreateTask"));
        pbtnCreateTask->setEnabled(false);
        pbtnCreateTask->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(pbtnCreateTask);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(CustomerSearch);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(340, 16777215));
        tabSearchByContract = new QWidget();
        tabSearchByContract->setObjectName(QStringLiteral("tabSearchByContract"));
        verticalLayout_2 = new QVBoxLayout(tabSearchByContract);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lblContractNumber = new QLabel(tabSearchByContract);
        lblContractNumber->setObjectName(QStringLiteral("lblContractNumber"));

        verticalLayout_6->addWidget(lblContractNumber);

        lntContractNumber = new QLineEdit(tabSearchByContract);
        lntContractNumber->setObjectName(QStringLiteral("lntContractNumber"));

        verticalLayout_6->addWidget(lntContractNumber);

        lblPhoneNumber = new QLabel(tabSearchByContract);
        lblPhoneNumber->setObjectName(QStringLiteral("lblPhoneNumber"));

        verticalLayout_6->addWidget(lblPhoneNumber);

        lntPhoneNumber = new QLineEdit(tabSearchByContract);
        lntPhoneNumber->setObjectName(QStringLiteral("lntPhoneNumber"));

        verticalLayout_6->addWidget(lntPhoneNumber);

        lblLastName = new QLabel(tabSearchByContract);
        lblLastName->setObjectName(QStringLiteral("lblLastName"));

        verticalLayout_6->addWidget(lblLastName);

        lntLName = new QLineEdit(tabSearchByContract);
        lntLName->setObjectName(QStringLiteral("lntLName"));

        verticalLayout_6->addWidget(lntLName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout_6);

        tabWidget->addTab(tabSearchByContract, QString());
        tabSearchByAddress = new QWidget();
        tabSearchByAddress->setObjectName(QStringLiteral("tabSearchByAddress"));
        verticalLayout_4 = new QVBoxLayout(tabSearchByAddress);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lblLocality = new QLabel(tabSearchByAddress);
        lblLocality->setObjectName(QStringLiteral("lblLocality"));

        verticalLayout_3->addWidget(lblLocality);

        lntLocality = new QLineEdit(tabSearchByAddress);
        lntLocality->setObjectName(QStringLiteral("lntLocality"));

        verticalLayout_3->addWidget(lntLocality);

        label_2 = new QLabel(tabSearchByAddress);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lntStreet = new QLineEdit(tabSearchByAddress);
        lntStreet->setObjectName(QStringLiteral("lntStreet"));

        verticalLayout_3->addWidget(lntStreet);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(tabSearchByAddress);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        label_4 = new QLabel(tabSearchByAddress);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lntHouse = new QLineEdit(tabSearchByAddress);
        lntHouse->setObjectName(QStringLiteral("lntHouse"));

        horizontalLayout_4->addWidget(lntHouse);

        lntApartment = new QLineEdit(tabSearchByAddress);
        lntApartment->setObjectName(QStringLiteral("lntApartment"));

        horizontalLayout_4->addWidget(lntApartment);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tabSearchByAddress, QString());

        horizontalLayout_3->addWidget(tabWidget);

        tvCustomers = new QTableView(CustomerSearch);
        tvCustomers->setObjectName(QStringLiteral("tvCustomers"));

        horizontalLayout_3->addWidget(tvCustomers);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(CustomerSearch);

        tabWidget->setCurrentIndex(0);


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
