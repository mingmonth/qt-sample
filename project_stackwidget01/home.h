#ifndef HOME_H
#define HOME_H

#include <QWidget>
//#include <confirmation.h>

namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();

private slots:
    void on_pushButton_11_clicked();

private:
    Ui::Home *ui;
    //Confirmation confirmationWidget;

signals:
    void Homeclicked();
};

#endif // HOME_H
