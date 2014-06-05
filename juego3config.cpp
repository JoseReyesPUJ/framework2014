#include "juego3config.h"
#include "ui_juego3config.h"

juego3config::juego3config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::juego3config)
{
    ui->setupUi(this);
}

juego3config::~juego3config()
{
    delete ui;
}
