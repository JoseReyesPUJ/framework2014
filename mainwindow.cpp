#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::pasarProceso(QApplication *aplication_)
{
    proceso = aplication_;
}

void MainWindow::click()
{
    this->destroy();
    proceso->exit();
}

