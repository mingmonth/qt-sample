#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    //w.setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    //w.setWindowFlags(Qt::Window | Qt::CustomizeWindowHint);
    w.show();

    return a.exec();
}
