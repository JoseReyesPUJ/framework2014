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

void MainWindow::clicaconfigjuego1()
{
    juego1config *configame1;
    configame1 = new juego1config();
    configame1->show();
    this->destroy(true);
}

void MainWindow::clickcreditos()
{
    Creditos *vercreditos;
    vercreditos = new Creditos();
    vercreditos->show();
    //vercreditos->setModal();
    this->destroy();
}
