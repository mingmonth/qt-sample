#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE", "CONNECTION NAME");
    db.setDatabaseName("../../test.db");
    if(!db.open()) {
        qDebug() << "Can't Connect to DB!";
    } else {
        qDebug() << "DB is opended!";
    }
    Dialog::selectedDate();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::selectedDate() {
    QSqlQuery query(db);
    QString exeq;

    int exist = 0;

    query.clear();
    exeq = "select * from note where date ='" + ui->calendarWidget->selectedDate().toString() + "';";
    query.exec(exeq);

    if(!query.exec(exeq)) {
        qDebug() << "Sqlite error:" << query.lastError().text() << ", Sqlite error code:" << query.lastError().number();
    } else {
        while(query.next()) {
            QString date = query.value(0).toString();
            ui->lineEdit->setText(query.value("title").toString());
            ui->plainTextEdit->clear();
            ui->plainTextEdit->appendPlainText(query.value("content").toString());
            exist = 1;
            qDebug() << query.value("title").toString();
        }
        if(!exist) {
            qWarning() << "None";
            ui->lineEdit->clear();
            ui->plainTextEdit->clear();
        }
    }
}

// select
void Dialog::on_calendarWidget_clicked(const QDate &date)
{
    qWarning() << date.toString();
    Dialog::selectedDate();
}

// open feature will be deprecated
void Dialog::on_pushButton_clicked()
{
    QSqlQuery query(db);
    QString exeq;

    int exist = 0;

    query.clear();
    exeq = "update * from note where date ='" + ui->calendarWidget->selectedDate().toString() + "';";
    query.exec(exeq);
    while(query.next()) {
        QString date = query.value(0).toString();
        ui->lineEdit->setText(query.value("title").toString());
        ui->plainTextEdit->clear();
        ui->plainTextEdit->appendPlainText(query.value("content").toString());
        exist = 1;
        qDebug() << query.value("title").toString();
    }
    if(!exist)
        qWarning() << "None";
}

// save
void Dialog::on_pushButton_2_clicked()
{
    QSqlQuery query(db);
    QString exeq;

    query.clear();
    // upsert
    exeq = "insert into note(date, title, content) values('" + ui->calendarWidget->selectedDate().toString() + "','" + ui->lineEdit->text() + "','" + ui->plainTextEdit->toPlainText() + "');";
    qDebug() << ui->calendarWidget->selectedDate().toString() << ", " << ui->lineEdit->text() << ", " << ui->plainTextEdit->toPlainText();
    if(!query.exec(exeq)) {
        qDebug() << "Sqlite error:" << query.lastError().text() << ", Sqlite error code:" << query.lastError().number();
        if(query.lastError().number() == 19) {
            exeq = "update note set title='" + ui->lineEdit->text() + "', content = '" + ui->plainTextEdit->toPlainText() + "' where date = '" + ui->calendarWidget->selectedDate().toString() + "';";
            if(!query.exec(exeq)) {
                qDebug() << "Sqlite error:" << query.lastError().text() << ", Sqlite error code:" << query.lastError().number();
            } else {
                qDebug() << "Content is saved(UPDATE)!";
            }
        }
    } else {
        qDebug() << "Content is saved!(INSERT)";
    }

}

void Dialog::on_pushButton_3_clicked()
{
    db.close();
    this->close();
}
