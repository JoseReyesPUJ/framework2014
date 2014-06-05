#ifndef JUEGO3CONFIG_H
#define JUEGO3CONFIG_H

#include <QWidget>

namespace Ui {
class juego3config;
}

class juego3config : public QWidget
{
    Q_OBJECT

public:
    explicit juego3config(QWidget *parent = 0);
    ~juego3config();

private:
    Ui::juego3config *ui;
};

#endif // JUEGO3CONFIG_H
