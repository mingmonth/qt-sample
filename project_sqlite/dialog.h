#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql/QtSql>
#include <QDebug>

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
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase db;
    void selectedDate();
};

#endif // DIALOG_H
