#include "juego1config.h"
#include "juego2config.h"
#include "ui_juego1config.h"
#include "matrizjimages.h"


juego1config::juego1config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego1config)
{
    ui->setupUi(this);
}

juego1config::~juego1config()
{
    delete ui;
}

void juego1config::atras()
{
    MainWindow *menuTest = new MainWindow();
    menuTest->show();
    this->destroy(true);
}

void juego1config::continuarJ1()
{

    juego2config *ventanaConfig2;

    instancia = new MatrizJimages(ui->spinBox->value());
    ventanaConfig2 = new juego2config();
    ventanaConfig2->pasoClase(instancia);
    ventanaConfig2->show();

    this->destroy();

}

void juego1config::setJuegoMemoria(MatrizJimages *j_)
{
    instancia = j_;
}
