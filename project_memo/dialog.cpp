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

// Select directory
void Dialog::on_pushButton_clicked()
{
    dir = QFileDialog::getExistingDirectory();
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    qDebug() << "list.size():" << list.size();
    for(int i = 0; i < list.size(); ++i) {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));
    }
}

// File Open
void Dialog::on_pushButton_2_clicked()
{
    QString path, fileName;
    fileName = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
    qDebug() << "File Opened";
    QMessageBox msgbox;
    msgbox.setText("File Opened");
    msgbox.exec();
}

// File Save
void Dialog::on_pushButton_3_clicked()
{
    QString path, fileName;
    fileName = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(fileName + ".text");
    QByteArray bytearray = ui->textEdit->toPlainText().toUtf8().left(ui->textEdit->toPlainText().length());
    file.open(QIODevice::WriteOnly);
    file.write(bytearray);
    file.close();
    QMessageBox msgbox;
    msgbox.setText("File Saved");
    msgbox.exec();
}


// Exit
void Dialog::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog::on_listWidget_doubleClicked(const QModelIndex &index)
{
    QString path, fileName;
    fileName = QString("%").arg(list.at(index.row()).absoluteFilePath());
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
}
