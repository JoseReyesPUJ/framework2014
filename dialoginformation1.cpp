#include "dialoginformation1.h"
#include "ui_dialoginformation1.h"

// Contructora
DialogInformation1::DialogInformation1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInformation1)
{
    ui->setupUi(this);
}


// Destructora
DialogInformation1::~DialogInformation1()
{
    delete ui;
}

// Metodo que pasa la direccion de memoria del proceso actual del programa
void DialogInformation1::pasarProceso(QApplication *aplication_)
{
    proceso = aplication_;
}

/*---------------------------------------- SLOTS ---------------------------------------*/
void DialogInformation1::continuarDI1()
{
    MainWindow *menuTest;
    menuTest = new MainWindow();
    menuTest->show();
    this->destroy(true);
}

void DialogInformation1::salirDI1()
{
    this->destroy(true);
    proceso->exit();

}
