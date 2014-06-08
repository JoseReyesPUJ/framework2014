#ifndef CREDITOS_H
#define CREDITOS_H

#include <QWidget>
#include <mainwindow.h>

namespace Ui {
class Creditos;
}

class Creditos : public QWidget
{
    Q_OBJECT

public:
    explicit Creditos(QWidget *parent = 0);
    ~Creditos();

public slots:
    void atras();

private:
    Ui::Creditos *ui;
};

#endif // CREDITOS_H
