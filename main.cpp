#include "dialoginformation1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication *a = new QApplication(argc, argv);
    DialogInformation1 *dialogoinformacion1;
    dialogoinformacion1 = new DialogInformation1();
    dialogoinformacion1->pasarProceso(a);
    dialogoinformacion1->show();


    return a->exec();
}
