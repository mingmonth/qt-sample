#include "widget.h"
#include "ui_widget.h"

Widget::Widget2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap pix("../../images/volvo_logo.bmp");
    scene.addPixmap(pix);
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    //ui->graphicsView->setForegroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    ui->graphicsView->show();
}

Widget::~Widget2()
{
    delete ui;
}
