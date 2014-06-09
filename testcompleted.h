#ifndef TESTCOMPLETED_H
#define TESTCOMPLETED_H

#include <QWidget>
#include <QTime>
#include "mainwindow.h"

namespace Ui {
class TestCompleted;
}

class TestCompleted : public QWidget
{
    Q_OBJECT

public:
    explicit TestCompleted(QWidget *parent = 0);
    ~TestCompleted();
    void PasarTiempo(QTime *t_);

public slots:
    void volver();

private:
    Ui::TestCompleted *ui;
    QTime *time;
};

#endif // TESTCOMPLETED_H
