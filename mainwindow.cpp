#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

void checkAvailableDrivers()
{
    qDebug() << "Available database drivers:";
    foreach (const QString &driver, QSqlDatabase::drivers())
        qDebug() << driver;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the push button to the on_pushButton_clicked() slot
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

    // Initialize the database connection
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Connection Error", "Failed to connect to the database. Check your connection settings.");
    } else {
        qDebug() << "Database connected successfully.";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("library");
    db.setUserName("root");
    db.setPassword("your_password");

    if (!db.open())
    {
        qDebug() << "Database connection failed: " << db.lastError().text();
        return false;
    }

    qDebug() << "Database connected successfully.";
    return true;
}


void MainWindow::on_pushButton_clicked()
{
    // Get user inputs from line edits
    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    // Log the inputs for debugging
    qDebug() << "Username:" << uName;
    qDebug() << "Usercode:" << uCode;

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND usercode = :usercode");
    query.bindValue(":username", uName);
    query.bindValue(":usercode", uCode);

    // Execute the query and check the results
    if (query.exec() && query.next()) {
        QString name = query.value("username").toString();
        QMessageBox::information(this, "Welcome Message", "User: " + name + "\nWelcome to the Login Management System!");
    } else {
        qDebug() << "Query failed: " << query.lastError().text();
        QMessageBox::warning(this, "Error Box", "Invalid username or password");
    }
}
