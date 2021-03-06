#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
//#include <QMessageBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    QString name;
    int kor;
    int eng;
    int math;

    int total;
    int avg;
};

#endif // DIALOG_H
