#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fluentPushButton->setIcon(QIcon("://icon/dog.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
