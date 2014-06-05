#ifndef JUEGO2CONFIG_H
#define JUEGO2CONFIG_H

#include <QWidget>

namespace Ui {
class juego2config;
}

class juego2config : public QWidget
{
    Q_OBJECT

public:
    explicit juego2config(QWidget *parent = 0);
    ~juego2config();
    explicit QLineEdit **matrizTL;

private:
    Ui::juego2config *ui;
};

#endif // JUEGO2CONFIG_H
