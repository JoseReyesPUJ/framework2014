#ifndef JUEGO1CONFIG_H
#define JUEGO1CONFIG_H

#include <QDialog>
#include "dialoginformation1.h"
#include "matrizjimages.h"

namespace Ui {
class juego1config;
}

class juego1config : public QDialog
{
    Q_OBJECT

public:
    explicit juego1config(QWidget *parent = 0);
    ~juego1config();

private slots:
    void atras();
    void continuarJ1();
    void setJuegoMemoria(MatrizJimages*);




private:
    Ui::juego1config *ui;
    MatrizJimages *instancia;


};



#endif // JUEGO1CONFIG_H
