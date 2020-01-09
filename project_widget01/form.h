#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();    

private:
    Ui::Form *ui;

public slots:
    void test2();
};

#endif // FORM_H
