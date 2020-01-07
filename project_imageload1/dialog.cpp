#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
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

Dialog::~Dialog()
{
    delete ui;
}
