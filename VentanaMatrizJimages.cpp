#include "matrizjimages.h"
#include "ui_matrizjimages.h"

MatrizJimages::MatrizJimages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MatrizJimages)
{
    ui->setupUi(this);
}

MatrizJimages::~MatrizJimages()
{
    delete ui;
}

