#include "testcompleted.h"
#include "ui_testcompleted.h"
#include <iostream>
using namespace std;

TestCompleted::TestCompleted(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestCompleted)
{
    ui->setupUi(this);
}

TestCompleted::~TestCompleted()
{
    delete ui;
}


void TestCompleted::PasarTiempo(QTime *t_)
{
    if(t_ != 0)
    {
        time = t_;

        QTime t2 = t_->currentTime();



        ui->label_2->setText(time->toString());
        ui->label_5->setText(t2.toString());
    }
}

void TestCompleted::volver()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->destroy(true);
}
