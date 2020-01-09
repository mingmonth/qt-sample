#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <confirmation.h>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_3_clicked();
    void moveToPreviewPage();

private:
    Ui::Widget *ui;
    Confirmation confirmationWidget;
};
#endif // WIDGET_H
