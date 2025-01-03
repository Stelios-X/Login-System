#include "mainwindow.h"
#include <QApplication>
#include <QLibraryInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Plugin Path: " << QLibraryInfo::path(QLibraryInfo::PluginsPath);
    QCoreApplication::addLibraryPath("/usr/lib/qt/plugins");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
