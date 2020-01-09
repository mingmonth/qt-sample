#include "application.h"
#include "ui_application.h"

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &confirmationWidget);
}

Application::~Application()
{
    delete ui;
}

void Application::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
