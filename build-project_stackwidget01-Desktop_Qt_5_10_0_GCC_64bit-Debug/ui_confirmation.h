/********************************************************************************
** Form generated from reading UI file 'confirmation.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATION_H
#define UI_CONFIRMATION_H

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

class Ui_Confirmation
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Confirmation)
    {
        if (Confirmation->objectName().isEmpty())
            Confirmation->setObjectName(QStringLiteral("Confirmation"));
        Confirmation->resize(800, 480);
        Confirmation->setStyleSheet(QLatin1String("background-color:black;\n"
"color:white;"));
        gridLayout = new QGridLayout(Confirmation);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Confirmation);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(5, 422, 771, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton_5);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Confirmation);

        QMetaObject::connectSlotsByName(Confirmation);
    } // setupUi

    void retranslateUi(QWidget *Confirmation)
    {
        Confirmation->setWindowTitle(QApplication::translate("Confirmation", "Form", nullptr));
        pushButton->setText(QApplication::translate("Confirmation", "ESC", nullptr));
        pushButton_2->setText(QApplication::translate("Confirmation", "LEFT", nullptr));
        pushButton_3->setText(QApplication::translate("Confirmation", "SELECT", nullptr));
        pushButton_4->setText(QApplication::translate("Confirmation", "RIGHT", nullptr));
        pushButton_5->setText(QApplication::translate("Confirmation", "SETUP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Confirmation: public Ui_Confirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATION_H
