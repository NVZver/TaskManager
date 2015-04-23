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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lntLogin;
    QLineEdit *lntPassword;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtnOK;
    QPushButton *pbtnCancel;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QStringLiteral("Authentication"));
        Authentication->resize(200, 100);
        widget = new QWidget(Authentication);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 201, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lntLogin = new QLineEdit(widget);
        lntLogin->setObjectName(QStringLiteral("lntLogin"));

        verticalLayout->addWidget(lntLogin);

        lntPassword = new QLineEdit(widget);
        lntPassword->setObjectName(QStringLiteral("lntPassword"));

        verticalLayout->addWidget(lntPassword);

        widget1 = new QWidget(Authentication);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 70, 178, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pbtnOK = new QPushButton(widget1);
        pbtnOK->setObjectName(QStringLiteral("pbtnOK"));

        horizontalLayout->addWidget(pbtnOK);

        pbtnCancel = new QPushButton(widget1);
        pbtnCancel->setObjectName(QStringLiteral("pbtnCancel"));

        horizontalLayout->addWidget(pbtnCancel);


        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QApplication::translate("Authentication", "Form", 0));
        pbtnOK->setText(QApplication::translate("Authentication", "OK", 0));
        pbtnCancel->setText(QApplication::translate("Authentication", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
