// header imports
#include "mainwindow.h"


// qt built in imports
#include <QApplication>


// entry
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
