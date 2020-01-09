#include "widget.h"
#include "form.h"
#include <QApplication>
#include "siggen.h"
#include <QObject>

//Widget w;

void handler(int val) {
    qDebug() << "got signal: " << val;
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "main prog start";
    SigGen siggen;
    Widget w;
    w.show();
    QObject::connect(&siggen, &SigGen::sgAction, &siggen, handler);
    siggen.action();


    //QPalette pal = QPalette();
    //pal.setColor(QPalette::Background, Qt::black);


    //Widget w;
    Form f;


    //w.setAttribute(Qt::WA_TranslucentBackground, true);
    //w.setPalette(pal);
    //w.setStyleSheet("background-color:black;");
    //w.show();
    //f.show();
    //f.hide();
    //w.show();
    //w.hide();
    //f.show();

    return a.exec();
}
