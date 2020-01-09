/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QWidget *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QStringLiteral("Application"));
        Application->resize(800, 480);
        Application->setStyleSheet(QLatin1String("background-color: black;\n"
"color:white;"));
        gridLayout = new QGridLayout(Application);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Application);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(5, 422, 771, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pushButton_10);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Form", nullptr));
        pushButton_6->setText(QApplication::translate("Application", "LEFT", nullptr));
        pushButton_7->setText(QApplication::translate("Application", "UP", nullptr));
        pushButton_8->setText(QApplication::translate("Application", "SAVE", nullptr));
        pushButton_9->setText(QApplication::translate("Application", "DOWN", nullptr));
        pushButton_10->setText(QApplication::translate("Application", "RIGHT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
