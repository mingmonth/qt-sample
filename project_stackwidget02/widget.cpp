#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &confirmationWidget);
    connect(&confirmationWidget, SIGNAL(escClicked()), this, SLOT(moveToPreviewPage()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::moveToPreviewPage()
{
    ui->stackedWidget->setCurrentIndex(0);
}
