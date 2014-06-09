#ifndef VENTANANUMEROSJUEGO_H
#define VENTANANUMEROSJUEGO_H

#include <QWidget>

namespace Ui {
class ventanaNumerosJuego;
}

class ventanaNumerosJuego : public QWidget
{
    Q_OBJECT

public:
    explicit ventanaNumerosJuego(QWidget *parent = 0);
    ~ventanaNumerosJuego();

private:
    Ui::ventanaNumerosJuego *ui;
};

#endif // VENTANANUMEROSJUEGO_H
