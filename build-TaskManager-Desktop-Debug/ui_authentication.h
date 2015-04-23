/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lntLogin;
    QLineEdit *lntPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtnOK;
    QPushButton *pbtnCancel;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QStringLiteral("Authentication"));
        Authentication->resize(200, 100);
        verticalLayout_2 = new QVBoxLayout(Authentication);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lntLogin = new QLineEdit(Authentication);
        lntLogin->setObjectName(QStringLiteral("lntLogin"));

        verticalLayout->addWidget(lntLogin);

        lntPassword = new QLineEdit(Authentication);
        lntPassword->setObjectName(QStringLiteral("lntPassword"));

        verticalLayout->addWidget(lntPassword);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbtnOK = new QPushButton(Authentication);
        pbtnOK->setObjectName(QStringLiteral("pbtnOK"));

        horizontalLayout->addWidget(pbtnOK);

        pbtnCancel = new QPushButton(Authentication);
        pbtnCancel->setObjectName(QStringLiteral("pbtnCancel"));

        horizontalLayout->addWidget(pbtnCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QString());
        pbtnOK->setText(QApplication::translate("Authentication", "OK", 0));
        pbtnCancel->setText(QApplication::translate("Authentication", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
