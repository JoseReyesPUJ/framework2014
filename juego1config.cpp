#include "juego1config.h"
#include "ui_juego1config.h"


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

/*void juego1config::continuarJ1()
{
    MatrizJimages *matrizj1;
    matrizj1 = new MatrizJimages();
    matrizj1->show();
    this->destroy(true);
}*/
