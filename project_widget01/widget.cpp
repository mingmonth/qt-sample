#include "widget.h"
#include "form.h"
#include "ui_widget.h"
#include "siggen.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    Form *f = new Form(parent);
    ui->setupUi(this);
    QPixmap pix("../../images/volvo_logo.bmp");
    scene.addPixmap(pix);
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->graphicsView->setBackgroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    //ui->graphicsView->setForegroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    ui->graphicsView->show();

    //this->hide();

    //connect(ui->pushButton, SIGNAL(clicked()), f, SLOT(test2()));
    //connect(ui->pushButton, SIGNAL(clicked()), f, SLOT(raise()));
    //connect(ui->pushButton, SIGNAL(clicked()), f, SLOT(setVisible(bool)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    qDebug() << "hide!!!";
    SigGen siggen;
    siggen.action();
    //this->hide();
}
