#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_newclient.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddNewClient_pressed()
{

}

void MainWindow::on_AddNewClient_clicked()
{

}
