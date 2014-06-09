#ifndef VENTANAMATRIZIMAGES_H
#define VENTANAMATRIZIMAGES_H

#include <QMainWindow>
#include <QPushButton>
#include "ventanaletrasjuego.h"


namespace Ui {
class VentanaMatrizImages;
}

class VentanaMatrizImages : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaMatrizImages(QWidget *parent = 0);
    void construcAobligatorio(int**matrizNumeros_,int size_);//-------->> Constructor adicional obligatorio
                                //-------->> donde se pasaran las direcciones de memoria asociadas a la clase mariz
    ~VentanaMatrizImages();
    void hideAll();
    void analisis(int numButton_,QPushButton *button_);
    void setSegundaVentana(ventanaLetrasJuego*);
    void mostrarSegundaVentana();

public slots:
    void presionarCuadro1();
    void presionarCuadro2();
    void presionarCuadro3();
    void presionarCuadro4();
    void presionarCuadro5();
    void presionarCuadro6();
    void presionarCuadro7();
    void presionarCuadro8();
    void presionarCuadro9();
    void presionarCuadro10();
    void presionarCuadro11();
    void presionarCuadro12();
    void presionarCuadro13();
    void presionarCuadro14();
    void presionarCuadro15();
    void presionarCuadro16();
    void presionarCuadro17();
    void presionarCuadro18();
    void presionarCuadro19();
    void presionarCuadro20();
    void presionarCuadro21();
    void presionarCuadro22();
    void presionarCuadro23();
    void presionarCuadro24();
    void presionarCuadro25();
    void presionarCuadro26();
    void presionarCuadro27();
    void presionarCuadro28();
    void presionarCuadro29();
    void presionarCuadro30();
    void presionarCuadro31();
    void presionarCuadro32();
    void presionarCuadro33();
    void presionarCuadro34();
    void presionarCuadro35();
    void presionarCuadro36();

private:
    Ui::VentanaMatrizImages *ui;
    int **matrizNumeros;
    int size;
    int numbrBpressedIntime;
    int numeroParejas; //numero de parejas adivinadas;
    int botonUndido1;
    int botonUndido2;
    QPushButton *button1;
    QPushButton *button2;
    bool success;
    ventanaLetrasJuego *ventanaJuegoLetras;

};

#endif // VENTANAMATRIZIMAGES_H
