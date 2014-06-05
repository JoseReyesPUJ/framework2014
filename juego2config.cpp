#include "juego2config.h"
#include "ui_juego2config.h"

juego2config::juego2config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::juego2config)
{
    matrizTL= new QLineEdit[3];
    matrizTL[0][0]= ui->lineEdit;
    matrizTL[0][1]=ui->lineEdit_2;
    matrizTL[0][2]=ui->lineEdit_3;
    matrizTL[1][0]=ui->lineEdit_4;
    matrizTL[1][1]=ui->lineEdit_5;
    matrizTL[1][2]=ui->lineEdit_6;
    matrizTL[2][0]=ui->lineEdit_7;
    matrizTL[2][1]=ui->lineEdit_8;
    matrizTL[2][2]=ui->lineEdit_9;
    ui->setupUi(this);
}

juego2config::~juego2config()
{
    delete ui;
}
