#ifndef JUEGO3CONFIG_H
#define JUEGO3CONFIG_H

#include <QWidget>
#include <QLineEdit>
#include "ventanaletrasjuego.h"
#include "matrizjimages.h"

namespace Ui {
class juego3config;
}

class juego3config : public QWidget
{
    Q_OBJECT

public:
    explicit juego3config(QWidget *parent = 0);
    ~juego3config();
    void pasarVentanaJuegoLetras(ventanaLetrasJuego*);
    void pasarVentanaJuegoMemoria(MatrizJimages *);

public slots:
    void atras();
    void continuar();


private:
    Ui::juego3config *ui;
    QLineEdit **matriznumber;
    void *uiVentanaJ2;
    ventanaLetrasJuego *ventanaAnteriorJuego2;
    MatrizJimages *juegoMemoria;
};

#endif // JUEGO3CONFIG_H
