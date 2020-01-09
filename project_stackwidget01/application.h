#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>
#include <confirmation.h>

namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = 0);
    ~Application();

private slots:
    void on_pushButton_8_clicked();

private:
    Ui::Application *ui;
    Confirmation confirmationWidget;
};

#endif // APPLICATION_H
