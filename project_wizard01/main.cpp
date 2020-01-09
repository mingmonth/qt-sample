#include "mainwindow.h"
#include <QApplication>
//#include <QWidget>
#include <QWizard>
#include "my_wizardpage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //QWidget window;
    //window.resize(250, 150);
    //window.setWindowTitle("Simple Example");
    //window.show();

    QWizard wizard;
    wizard.addPage(new MyWizardPage("test", "test 2"));
    wizard.addPage(new MyWizardPage("test", "test 3"));
    wizard.addPage(new MyWizardPage("test", "test 4"));

    wizard.setWindowTitle("My custom wizard");
    wizard.show();

    return a.exec();
}
