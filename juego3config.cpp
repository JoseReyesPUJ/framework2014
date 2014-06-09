#include "juego3config.h"
#include "ui_juego3config.h"
#include "juego2config.h"
#include "TimeC.h"


juego3config::juego3config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::juego3config)
{
    /**matriznumber= new QLineEdit[3];
    matriznumber[0][0]= ui->lineEdit;
    matriznumber[0][1]=ui->lineEdit_2;
    matriznumber[0][2]=ui->lineEdit_3;
    matriznumber[1][0]=ui->lineEdit_4;
    matriznumber[1][1]=ui->lineEdit_5;
    matriznumber[1][2]=ui->lineEdit_6;
    matriznumber[2][0]=ui->lineEdit_7;
    matriznumber[2][1]=ui->lineEdit_8;
    matriznumber[2][2]=ui->lineEdit_9;*/
    ui->setupUi(this);
}

juego3config::~juego3config()
{
    delete ui;
}


void juego3config::pasarVentanaJuegoLetras(ventanaLetrasJuego *v_)
{
    ventanaAnteriorJuego2 = v_;
}

void juego3config::pasarVentanaJuegoMemoria(MatrizJimages *jm_)
{
    juegoMemoria = jm_;
}

void juego3config::atras()
{

    juego2config *ventanaconfig2 = new juego2config();
    ventanaconfig2->pasoClase(juegoMemoria);
    ventanaconfig2->show();
    this->destroy(true);

}

void juego3config::continuar()
{
    //ventanaAnteriorJuego2->show();
    t = new QTime();
    t->setHMS(0,0,0,0);
    t->start();
    ventanaAnteriorJuego2->setTime(t);
    juegoMemoria->mostrarVentanaImagenes();
    this->destroy(true);


}
