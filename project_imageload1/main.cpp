#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    w.setAttribute(Qt::WA_TranslucentBackground, true);
    //w.setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    //w.setWindowFlags(Qt::Window | Qt::CustomizeWindowHint);
    return a.exec();
}
