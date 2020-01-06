#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    int ban = 10;
    qDebug() << "Circle width = " << ban * ban * pi;
    qDebug() << "Circle length = " << ban * 2 * pi;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //int data;
    data = 100;
    qDebug() << data;
}

void Dialog::on_pushButton_2_clicked()
{
    data = 200;
    qDebug() << data;
}
