#include "home.h"
#include "ui_home.h"
Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    //ui->stackedWidget->insertWidget(1, &confirmationWidget);
}

Home::~Home()
{
    delete ui;
}

// trip
void Home::on_pushButton_11_clicked()
{
    //ui->stackedWidget->setCurrentIndex(1);
    emit Homeclicked();
}
