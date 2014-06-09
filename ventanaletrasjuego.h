#ifndef VENTANALETRASJUEGO_H
#define VENTANALETRASJUEGO_H

#include <QWidget>
#include <QLineEdit>
using namespace std;

namespace Ui {
class ventanaLetrasJuego;
}

class ventanaLetrasJuego : public QWidget
{
    Q_OBJECT

public:
    explicit ventanaLetrasJuego(QWidget *parent = 0);
    ~ventanaLetrasJuego();
    void setQlineEdit(vector<QString> vectorPalabras_);
    void setTime(QTime*);
public slots:
    void evaluar();

private:
    Ui::ventanaLetrasJuego *ui;
    vector<QString> vectorPalabras;
    vector<QString> vectorPalabras2;
    QTime *time;
    bool success;
};

#endif // VENTANALETRASJUEGO_H
