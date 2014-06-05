#ifndef MATRIZJIMAGES_H
#define MATRIZJIMAGES_H

#include <QWidget>
#include "juego1config.h"

namespace Ui {
class MatrizJimages;
}

class MatrizJimages : public QWidget
{
    Q_OBJECT

public:
    explicit MatrizJimages(QWidget *parent = 0);
    ~MatrizJimages();

private:
    Ui::MatrizJimages *ui;


};

#endif // MATRIZJIMAGES_H
