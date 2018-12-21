#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->resize(1920,1080); //rather use fullscreen mode to reach it on every screen resolution
}

MainWindow::~MainWindow()
{
    delete ui;
}
