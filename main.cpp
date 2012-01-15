#include <QtGui/QApplication>
#include "mainwindow.h"
#include "inc/controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Controller c(&w);

    w.show();
    
    return a.exec();
}
