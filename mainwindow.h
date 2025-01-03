#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void button();

    void on_pushButton_clicked();

    //void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    // Add the connectToDatabase function declaration here
    //this is the main DB connection method
    bool connectToDatabase();
};
#endif // MAINWINDOW_H
