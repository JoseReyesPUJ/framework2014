#ifndef MATRIZJIMAGES_H
#define MATRIZJIMAGES_H
#include <QPushButton>
#include "ventanamatrizimages.h"
#include "ventanaletrasjuego.h"

class MatrizJimages
{
private:
    QPushButton **matrizButtonImages;
    int sizeMatriz;
    int **matrizControl;
    VentanaMatrizImages *ventanaJuegoImagenes;
    ventanaLetrasJuego *ventanaLetasJ;

    //VentanaMatrizImages

public:
    MatrizJimages(int size_);
    void mostrarVentanaImagenes();
    void setSegundaVentana(ventanaLetrasJuego*);

};

#endif // MATRIZJIMAGES_H
