#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QWidget>
#include <home.h>

namespace Ui {
class Confirmation;
}

class Confirmation : public QWidget
{
    Q_OBJECT

public:
    explicit Confirmation(QWidget *parent = 0);
    ~Confirmation();

private slots:
    void on_pushButton_3_clicked();
    void moveHome();

private:
    Ui::Confirmation *ui;
    Home homeWidget;
};

#endif // CONFIRMATION_H
