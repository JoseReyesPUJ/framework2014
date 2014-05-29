#ifndef DIALOGINFORMATION1_H
#define DIALOGINFORMATION1_H

#include <QDialog>
#include <QApplication>
#include "mainwindow.h"

namespace Ui {
class DialogInformation1;
}

class DialogInformation1 : public QDialog
{
    Q_OBJECT

public:

    //Constructora
    explicit DialogInformation1(QWidget *parent = 0);
    //Destructora
    ~DialogInformation1();

    // Metodo se le pasa el proceso del programa
    void pasarProceso(QApplication *aplication_);

    //Metodos GUI
private slots:
    void continuarDI1();
    void salirDI1();

private:
    Ui::DialogInformation1 *ui;
    QApplication *proceso; // Direccion de memoria del proceso.
};

#endif // DIALOGINFORMATION1_H
