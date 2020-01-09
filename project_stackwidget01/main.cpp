#include <QApplication>
#include "application.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application w;

    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setGeometry(20, 20, 800, 480);
    w.show();
    return a.exec();
}
