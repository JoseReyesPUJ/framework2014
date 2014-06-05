#ifndef JUEGO1CONFIG_H
#define JUEGO1CONFIG_H

#include <QDialog>
#include "dialoginformation1.h"
#include "VentanaMatrizJimages.h"

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



private:
    Ui::juego1config *ui;


};



#endif // JUEGO1CONFIG_H
