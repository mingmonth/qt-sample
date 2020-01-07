#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    name = ui->lineEdit->text();
    kor = ui->lineEdit_2->text().toInt();
    eng = ui->lineEdit_3->text().toInt();
    math = ui->lineEdit_4->text().toInt();
    total = kor + eng + math;
    avg = total/3;
    //QMessageBox msgbox;
    //msgbox.setText("TEST");
    qDebug() << "name           kor  eng  math  total avg";
    qDebug() << name << " " << kor << " " << eng << " " << math << " " << total << " " << avg;
    //msgbox.exec();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
