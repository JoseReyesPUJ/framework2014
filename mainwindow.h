#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QApplication>
#include "juego1config.h"
#include "creditos.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // Metodo se le pasa el proceso del programa
    void pasarProceso(QApplication *aplication_);


public slots:
    void click();
    void clicaconfigjuego1();
    void clickcreditos();




private:
    Ui::MainWindow *ui;
    QApplication *proceso; // Direccion de memoria del proceso.
};

#endif // MAINWINDOW_H
