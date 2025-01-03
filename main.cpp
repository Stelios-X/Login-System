#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::addLibraryPath("/usr/lib/qt/plugins");


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
