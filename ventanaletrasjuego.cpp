#include "ventanaletrasjuego.h"
#include "ui_ventanaletrasjuego.h"
#include <iostream>
#include "testcompleted.h"
#include "TimeC.h"

ventanaLetrasJuego::ventanaLetrasJuego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventanaLetrasJuego)
{
    ui->setupUi(this);
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->lineEdit_3->hide();
    ui->lineEdit_4->hide();
    ui->lineEdit_5->hide();
    ui->lineEdit_6->hide();
    ui->lineEdit_7->hide();
    ui->lineEdit_8->hide();
    ui->lineEdit_9->hide();

    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    success = false;
}

ventanaLetrasJuego::~ventanaLetrasJuego()
{
    delete ui;
}


void ventanaLetrasJuego::setQlineEdit(vector<QString> vectorPalabras_)
{
    vectorPalabras = vectorPalabras_;
    QString s;
    //cout << "LLEGO" << endl;
    for(int cont = 0 ; cont < vectorPalabras.size() ;cont++)
    {

        s = vectorPalabras.at(cont);

        if(s.toStdString() == "")
        {

            if(cont == 1)
            {
                ui->lineEdit_2->show();
            }

            if(cont == 3)
            {
                ui->lineEdit_4->show();
            }
            if(cont == 5)
            {
                ui->lineEdit_6->show();
            }
            if(cont == 7)
            {
                ui->lineEdit_8->show();
            }
        }
        else
        {
            if(s.toStdString() != "")
            {
                if(cont == 0)
                {
                    ui->label_2->setText(s);
                    ui->label_2->show();
                }
                if(cont == 1)
                {
                    ui->label_3->setText(s);
                    ui->label_3->show();
                }
                if(cont == 2)
                {
                    ui->label_4->setText(s);
                    ui->label_4->show();
                }
                if(cont == 3)
                {
                    ui->label_5->setText(s);
                    ui->label_5->show();
                }
                if(cont == 4)
                {
                    ui->label_6->setText(s);
                    ui->label_6->show();
                }
                if(cont == 5)
                {
                    ui->label_7->setText(s);
                    ui->label_7->show();
                }
                if(cont == 6)
                {
                    ui->label_8->setText(s);
                    ui->label_8->show();
                }
                if(cont == 7)
                {
                    ui->label_9->setText(s);
                    ui->label_9->show();
                }
                if(cont == 8)
                {
                    ui->label_10->setText(s);
                    ui->label_10->show();
                }
            }
        }
    }


}

void ventanaLetrasJuego::evaluar()
{
    QString s1,s2,s3,s4,s5,s6,s7,s8,s9;
    s1 = vectorPalabras.at(0);
    s3 = vectorPalabras.at(2);
    s5 = vectorPalabras.at(4);
    s7 = vectorPalabras.at(6);
    s9 = vectorPalabras.at(8);

    s2 = ui->lineEdit_2->text();
    s4 = ui->lineEdit_4->text();
    s6 = ui->lineEdit_6->text();
    s8 = ui->lineEdit_8->text();

    if((s1.at(s1.size()-2) != s2.at(0))||(s1.at(s1.size()-1) != s2.at(1))
            ||(s2.at(s2.size()-2) != s3.at(0)) || (s2.at(s2.size()-1) != s3.at(1))

            ||(s3.at(s3.size()-2) != s4.at(0))||(s3.at(s3.size()-1) != s4.at(1))
            ||(s4.at(s4.size()-2) != s5.at(0)) || (s4.at(s4.size()-1) != s5.at(1))

            ||(s5.at(s5.size()-2) != s6.at(0))||(s5.at(s5.size()-1) != s6.at(1))
            ||(s6.at(s6.size()-2) != s7.at(0)) || (s6.at(s6.size()-1) != s7.at(1))

            ||(s7.at(s7.size()-2) != s8.at(0))||(s7.at(s7.size()-1) != s8.at(1))
            ||(s8.at(s8.size()-2) != s9.at(0)) || (s8.at(s8.size()-1) != s9.at(1)))
    {
        ui->lineEdit_2->clear();
        ui->lineEdit_4->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_8->clear();
    }
    else
    {
        success = true;
        TestCompleted *ventanaCompleted = new TestCompleted();
        ventanaCompleted->PasarTiempo(time);
        ventanaCompleted->show();
        this->destroy(true);



    }


}


void ventanaLetrasJuego::setTime(QTime *t_)
{
    time = t_;
}
