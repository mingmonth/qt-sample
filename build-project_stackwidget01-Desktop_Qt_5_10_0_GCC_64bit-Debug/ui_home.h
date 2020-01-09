/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(800, 480);
        stackedWidget = new QStackedWidget(Home);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 782, 462));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(5, 422, 771, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_3->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(layoutWidget_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        horizontalLayout_3->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(layoutWidget_3);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        horizontalLayout_3->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(layoutWidget_3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButton_15);

        stackedWidget->addWidget(page_3);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Form", nullptr));
        pushButton_11->setText(QApplication::translate("Home", "TRIP", nullptr));
        pushButton_12->setText(QApplication::translate("Home", "ENGINE", nullptr));
        pushButton_13->setText(QApplication::translate("Home", "VIB", nullptr));
        pushButton_14->setText(QApplication::translate("Home", "SETUP", nullptr));
        pushButton_15->setText(QApplication::translate("Home", "DIAGNOSTICS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
