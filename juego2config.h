#ifndef JUEGO2CONFIG_H
#define JUEGO2CONFIG_H
#include <QWidget>
#include<QLineEdit>
#include <vector>
#include "matrizjimages.h"
using namespace std;

namespace Ui {
class juego2config;
}

class juego2config : public QWidget
{
    Q_OBJECT

public:
    explicit juego2config(QWidget *parent = 0);
    ~juego2config();
    void pasoClase(MatrizJimages*);

public slots:
    void atrasVCjuego2();
    void continuarVCjuego2();

private:
    Ui::juego2config *ui;
    QLineEdit ***matrizTL;
    vector<QString> vectorPalabras_;
    MatrizJimages *claseImagenes;


};

#endif // JUEGO2CONFIG_H
