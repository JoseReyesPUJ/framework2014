#include "ventananumerosjuego.h"
#include "ui_ventananumerosjuego.h"

ventanaNumerosJuego::ventanaNumerosJuego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventanaNumerosJuego)
{
    ui->setupUi(this);
}

ventanaNumerosJuego::~ventanaNumerosJuego()
{
    delete ui;
}
