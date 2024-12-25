#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()),
            this, SLOT(button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name[] = {"abc", "def", "ghi"};
    QString code[] = {"abc12", "def34", "ghi56"};

    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    bool found = false;
    for(int i = 0; i<name->length(); i++)
    {
        if(uName  == name[i] && uCode == code[i])
        {
            QMessageBox::information(this,"Welcome message", "User: "+name[i ]+ "\n"

            "Welcome to Login Management System" );
            found = true;
            break;
        }
    }
   if(!found)
    {
        QMessageBox::information(this,"Error Box", "Invalid username or password");
    }
}





