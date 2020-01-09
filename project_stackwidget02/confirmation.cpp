#include "confirmation.h"
#include "ui_confirmation.h"

Confirmation::Confirmation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirmation)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &homeWidget);
}

Confirmation::~Confirmation()
{
    delete ui;
}
// ESC
void Confirmation::on_pushButton_clicked()
{
    emit escClicked();
}
// SELECT
void Confirmation::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
