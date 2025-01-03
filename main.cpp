#include "mainwindow.h"
#include <QApplication>
#include <QStandardPaths>
#include <QDebug>

int main(int argc, char *argv[])
{
    // Use QStandardPaths to get the plugin path
    QString pluginPath = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation) + "/Qt/plugins";
    qDebug() << "Plugin Path: " << pluginPath;
    QCoreApplication::addLibraryPath(pluginPath);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
