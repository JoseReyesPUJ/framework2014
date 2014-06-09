#include "juego3config.h"
#include "juego2config.h"
#include "juego1config.h"
#include "ui_juego2config.h"
#include "ventanaletrasjuego.h"

juego2config::juego2config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::juego2config)
{
    /*matrizTL= new QLineEdit**[3];
    matrizTL[0] = new QLineEdit*[3];
    matrizTL[0][0]= ui->lineEdit;
    matrizTL[0][1]=ui->lineEdit_2;
    matrizTL[0][2]=ui->lineEdit_3;
    matrizTL[1] = new QLineEdit*[3];
    matrizTL[1][0]=ui->lineEdit_4;
    matrizTL[1][1]=ui->lineEdit_5;
    matrizTL[1][2]=ui->lineEdit_6;
    matrizTL[2] = new QLineEdit*[3];
    matrizTL[2][0]=ui->lineEdit_7;
    matrizTL[2][1]=ui->lineEdit_8;
    matrizTL[2][2]=ui->lineEdit_9;*/

    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->lineEdit_4->hide();
    ui->lineEdit_6->hide();
    ui->lineEdit_8->hide();
}

juego2config::~juego2config()
{
    delete ui;
}

void juego2config::pasoClase(MatrizJimages *c_)
{
    claseImagenes = c_;
}


void juego2config::atrasVCjuego2()
{
    juego1config *ventanaConfigJuego1 = new juego1config();
    ventanaConfigJuego1->show();
    this->destroy(true);

}

void juego2config::continuarVCjuego2()
{
    /**/
    vectorPalabras_.push_back(ui->lineEdit->text());
    vectorPalabras_.push_back(ui->lineEdit_2->text());
    vectorPalabras_.push_back(ui->lineEdit_3->text());
    vectorPalabras_.push_back(ui->lineEdit_4->text());
    vectorPalabras_.push_back(ui->lineEdit_5->text());
    vectorPalabras_.push_back(ui->lineEdit_6->text());
    vectorPalabras_.push_back(ui->lineEdit_7->text());
    vectorPalabras_.push_back(ui->lineEdit_8->text());
    vectorPalabras_.push_back(ui->lineEdit_9->text());

    /**/
    ventanaLetrasJuego *vJuegoLetras = new ventanaLetrasJuego();
    vJuegoLetras->setQlineEdit(vectorPalabras_);
    juego3config *ventanaConfigJuego3 = new juego3config();
    claseImagenes->setSegundaVentana(vJuegoLetras);
    ventanaConfigJuego3->pasarVentanaJuegoLetras(vJuegoLetras);
    ventanaConfigJuego3->pasarVentanaJuegoMemoria(claseImagenes);
    ventanaConfigJuego3->show();
    this->destroy(true);
}
