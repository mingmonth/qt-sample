#include "confirmation.h"
#include "ui_confirmation.h"
Confirmation::Confirmation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirmation)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &homeWidget);

    connect(&homeWidget, SIGNAL(Homeclicked()), this, SLOT(moveHome()));
}

Confirmation::~Confirmation()
{
    delete ui;
}

// select
void Confirmation::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Confirmation::moveHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}
