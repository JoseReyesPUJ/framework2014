#include "ventanamatrizimages.h"
#include "ui_ventanamatrizimages.h"
#include <iostream>
#include <sstream>
using namespace std;

VentanaMatrizImages::VentanaMatrizImages(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaMatrizImages)
{
    ui->setupUi(this);
    //Escondemos los botones
    ui->pushButton_1->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->pushButton_6->hide();
    ui->pushButton_7->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->pushButton_10->hide();
    ui->pushButton_11->hide();
    ui->pushButton_12->hide();
    ui->pushButton_13->hide();
    ui->pushButton_14->hide();
    ui->pushButton_15->hide();
    ui->pushButton_16->hide();
    ui->pushButton_17->hide();
    ui->pushButton_18->hide();
    ui->pushButton_19->hide();
    ui->pushButton_20->hide();
    ui->pushButton_21->hide();
    ui->pushButton_22->hide();
    ui->pushButton_23->hide();
    ui->pushButton_24->hide();
    ui->pushButton_25->hide();
    ui->pushButton_26->hide();
    ui->pushButton_27->hide();
    ui->pushButton_28->hide();
    ui->pushButton_29->hide();
    ui->pushButton_30->hide();
    ui->pushButton_31->hide();
    ui->pushButton_32->hide();
    ui->pushButton_33->hide();
    ui->pushButton_34->hide();
    ui->pushButton_35->hide();
    ui->pushButton_36->hide();

    numbrBpressedIntime = 0;
    botonUndido1 = -1;
    botonUndido2 = -2;
    button1 = NULL;
    button2 = NULL;
    success = false;
    numeroParejas = 0;
}

VentanaMatrizImages::~VentanaMatrizImages()
{
    delete ui;
}

void VentanaMatrizImages::construcAobligatorio(int **matrizNumeros_,int size_)
{
    matrizNumeros = matrizNumeros_;
    size = size_;
    ui->centralwidget->setEnabled(true);
    //Modificamos el tamaño de la ventana y mostramos los botones correspondientes
    //respecto al tamño
    if(size == 2)
    {

        ui->centralwidget->setGeometry(0,0,158,171);
        ui->centralwidget->setMinimumWidth(158);
        ui->centralwidget->setMaximumWidth(158);
        ui->centralwidget->setMinimumHeight(171);
        ui->centralwidget->setMaximumHeight(171);


        //Mostramos los botones correspondientes al tamanho
        ui->pushButton_1->show();
        ui->pushButton_2->show();
        ui->pushButton_7->show();
        ui->pushButton_8->show();
    }
    else
    {
        if(size == 4)
        {
            ui->centralwidget->setGeometry(0,0,303,303);

            ui->centralwidget->setMinimumWidth(303);
            ui->centralwidget->setMaximumWidth(303);
            ui->centralwidget->setMinimumHeight(320);
            ui->centralwidget->setMaximumHeight(320);


            //Mostramos los botones correspondientes al tamanho
            ui->pushButton_1->show();
            ui->pushButton_2->show();
            ui->pushButton_3->show();
            ui->pushButton_4->show();
            ui->pushButton_7->show();
            ui->pushButton_8->show();
            ui->pushButton_9->show();
            ui->pushButton_10->show();
            ui->pushButton_13->show();
            ui->pushButton_14->show();
            ui->pushButton_15->show();
            ui->pushButton_16->show();
            ui->pushButton_19->show();
            ui->pushButton_20->show();
            ui->pushButton_21->show();
            ui->pushButton_22->show();
        }
        else
        {
            if(size == 6)
            {
                ui->centralwidget->setGeometry(0,0,446,463);
                ui->centralwidget->setMaximumWidth(446);
                ui->centralwidget->setMinimumWidth(446);
                ui->centralwidget->setMaximumHeight(463);
                ui->centralwidget->setMinimumHeight(463);

                //Mostramos los botones correspondientes al tamanho
                ui->pushButton_1->show();
                ui->pushButton_2->show();
                ui->pushButton_3->show();
                ui->pushButton_4->show();
                ui->pushButton_5->show();
                ui->pushButton_6->show();
                ui->pushButton_7->show();
                ui->pushButton_8->show();
                ui->pushButton_9->show();
                ui->pushButton_10->show();
                ui->pushButton_11->show();
                ui->pushButton_12->show();
                ui->pushButton_13->show();
                ui->pushButton_14->show();
                ui->pushButton_15->show();
                ui->pushButton_16->show();
                ui->pushButton_17->show();
                ui->pushButton_18->show();
                ui->pushButton_19->show();
                ui->pushButton_20->show();
                ui->pushButton_21->show();
                ui->pushButton_22->show();
                ui->pushButton_23->show();
                ui->pushButton_24->show();
                ui->pushButton_25->show();
                ui->pushButton_26->show();
                ui->pushButton_27->show();
                ui->pushButton_28->show();
                ui->pushButton_29->show();
                ui->pushButton_30->show();
                ui->pushButton_31->show();
                ui->pushButton_32->show();
                ui->pushButton_33->show();
                ui->pushButton_34->show();
                ui->pushButton_35->show();
                ui->pushButton_36->show();

            }
        }
    }
}

void VentanaMatrizImages::hideAll()
{
    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
    ui->pushButton_10->setText("");
    ui->pushButton_11->setText("");
    ui->pushButton_12->setText("");
    ui->pushButton_13->setText("");
    ui->pushButton_14->setText("");
    ui->pushButton_15->setText("");
    ui->pushButton_16->setText("");
    ui->pushButton_17->setText("");
    ui->pushButton_18->setText("");
    ui->pushButton_19->setText("");
    ui->pushButton_20->setText("");
    ui->pushButton_21->setText("");
    ui->pushButton_22->setText("");
    ui->pushButton_23->setText("");
    ui->pushButton_24->setText("");
    ui->pushButton_25->setText("");
    ui->pushButton_26->setText("");
    ui->pushButton_27->setText("");
    ui->pushButton_28->setText("");
    ui->pushButton_29->setText("");
    ui->pushButton_30->setText("");
    ui->pushButton_31->setText("");
    ui->pushButton_32->setText("");
    ui->pushButton_33->setText("");
    ui->pushButton_34->setText("");
    ui->pushButton_35->setText("");
    ui->pushButton_36->setText("");


}

void VentanaMatrizImages::analisis(int numButton_, QPushButton *button_)
{
    if(numButton_ == 1)
    {
        button1 = button_;
    }
    else
    {
        if(numButton_ == 2)
        {
            button2 = button_;
        }
    }
}

// Implementacion de los slots

void VentanaMatrizImages::presionarCuadro1()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][0];
        QString dato;
        dato = QString::number(matrizNumeros[0][0]);
        ui->pushButton_1->setText(dato);
        analisis(1,ui->pushButton_1);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][0];
            QString dato;
            dato = QString::number(matrizNumeros[0][0]);
            ui->pushButton_1->setText(dato);
            analisis(2,ui->pushButton_1);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;

                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;

                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
    //cout << dato1->toStdString() << endl;
    //cout << dato2->toStdString() << endl;
}

void VentanaMatrizImages::presionarCuadro2()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][1];
        QString dato;
        dato = QString::number(matrizNumeros[0][1]);
        ui->pushButton_2->setText(dato);
        analisis(1,ui->pushButton_2);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][1];
            QString dato;
            dato = QString::number(matrizNumeros[0][1]);
            ui->pushButton_2->setText(dato);
            analisis(2,ui->pushButton_2);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {

                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro3()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][2];
        QString dato;
        dato = QString::number(matrizNumeros[0][2]);
        ui->pushButton_3->setText(dato);
        analisis(1,ui->pushButton_3);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][2];
            QString dato;
            dato = QString::number(matrizNumeros[0][2]);
            ui->pushButton_3->setText(dato);
            analisis(2,ui->pushButton_3);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro4()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][3];
        QString dato;
        dato = QString::number(matrizNumeros[0][3]);
        ui->pushButton_4->setText(dato);
        analisis(1,ui->pushButton_4);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][3];
            QString dato;
            dato = QString::number(matrizNumeros[0][3]);
            ui->pushButton_4->setText(dato);
            analisis(2,ui->pushButton_4);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro5()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][4];
        QString dato;
        dato = QString::number(matrizNumeros[0][4]);
        ui->pushButton_5->setText(dato);
        analisis(1,ui->pushButton_5);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][4];
            QString dato;
            dato = QString::number(matrizNumeros[0][4]);
            ui->pushButton_5->setText(dato);
            analisis(2,ui->pushButton_5);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro6()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[0][5];
        QString dato;
        dato = QString::number(matrizNumeros[0][5]);
        ui->pushButton_6->setText(dato);
        analisis(1,ui->pushButton_6);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[0][5];
            QString dato;
            dato = QString::number(matrizNumeros[0][5]);
            ui->pushButton_6->setText(dato);
            analisis(2,ui->pushButton_6);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro7()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][0];
        QString dato;
        dato = QString::number(matrizNumeros[1][0]);
        ui->pushButton_7->setText(dato);
        analisis(1,ui->pushButton_7);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][0];
            QString dato;
            dato = QString::number(matrizNumeros[1][0]);
            ui->pushButton_7->setText(dato);
            analisis(2,ui->pushButton_7);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro8()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][1];
        QString dato;
        dato = QString::number(matrizNumeros[1][1]);
        ui->pushButton_8->setText(dato);
        analisis(1,ui->pushButton_8);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][1];
            QString dato;
            dato = QString::number(matrizNumeros[1][1]);
            ui->pushButton_8->setText(dato);
            analisis(2,ui->pushButton_8);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro9()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][2];
        QString dato;
        dato = QString::number(matrizNumeros[1][2]);
        ui->pushButton_9->setText(dato);
        analisis(1,ui->pushButton_9);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][2];
            QString dato;
            dato = QString::number(matrizNumeros[1][2]);
            ui->pushButton_9->setText(dato);
            analisis(2,ui->pushButton_9);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro10()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][3];
        QString dato;
        dato = QString::number(matrizNumeros[1][3]);
        ui->pushButton_10->setText(dato);
        analisis(1,ui->pushButton_10);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][3];
            QString dato;
            dato = QString::number(matrizNumeros[1][3]);
            ui->pushButton_10->setText(dato);
            analisis(2,ui->pushButton_10);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro11()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][4];
        QString dato;
        dato = QString::number(matrizNumeros[1][4]);
        ui->pushButton_11->setText(dato);
        analisis(1,ui->pushButton_11);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][4];
            QString dato;
            dato = QString::number(matrizNumeros[1][4]);
            ui->pushButton_11->setText(dato);
            analisis(2,ui->pushButton_11);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro12()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[1][5];
        QString dato;
        dato = QString::number(matrizNumeros[1][5]);
        ui->pushButton_12->setText(dato);
        analisis(1,ui->pushButton_12);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[1][5];
            QString dato;
            dato = QString::number(matrizNumeros[1][5]);
            ui->pushButton_12->setText(dato);
            analisis(2,ui->pushButton_12);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro13()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][0];
        QString dato;
        dato = QString::number(matrizNumeros[2][0]);
        ui->pushButton_13->setText(dato);
        analisis(1,ui->pushButton_13);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][0];
            QString dato;
            dato = QString::number(matrizNumeros[2][0]);
            ui->pushButton_13->setText(dato);
            analisis(2,ui->pushButton_13);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro14()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][1];
        QString dato;
        dato = QString::number(matrizNumeros[2][1]);
        ui->pushButton_14->setText(dato);
        analisis(1,ui->pushButton_14);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][1];
            QString dato;
            dato = QString::number(matrizNumeros[2][1]);
            ui->pushButton_14->setText(dato);
            analisis(2,ui->pushButton_14);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro15()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][2];
        QString dato;
        dato = QString::number(matrizNumeros[2][2]);
        ui->pushButton_15->setText(dato);
        analisis(1,ui->pushButton_15);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][2];
            QString dato;
            dato = QString::number(matrizNumeros[2][2]);
            ui->pushButton_15->setText(dato);
            analisis(2,ui->pushButton_15);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro16()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][3];
        QString dato;
        dato = QString::number(matrizNumeros[2][3]);
        ui->pushButton_16->setText(dato);
        analisis(1,ui->pushButton_16);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][3];
            QString dato;
            dato = QString::number(matrizNumeros[2][3]);
            ui->pushButton_16->setText(dato);
            analisis(2,ui->pushButton_16);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro17()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][4];
        QString dato;
        dato = QString::number(matrizNumeros[2][4]);
        ui->pushButton_17->setText(dato);
        analisis(1,ui->pushButton_17);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][4];
            QString dato;
            dato = QString::number(matrizNumeros[2][4]);
            ui->pushButton_17->setText(dato);
            analisis(2,ui->pushButton_17);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro18()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[2][5];
        QString dato;
        dato = QString::number(matrizNumeros[2][5]);
        ui->pushButton_18->setText(dato);
        analisis(1,ui->pushButton_18);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[2][5];
            QString dato;
            dato = QString::number(matrizNumeros[2][5]);
            ui->pushButton_18->setText(dato);
            analisis(2,ui->pushButton_18);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro19()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][0];
        QString dato;
        dato = QString::number(matrizNumeros[3][0]);
        ui->pushButton_19->setText(dato);
        analisis(1,ui->pushButton_19);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][0];
            QString dato;
            dato = QString::number(matrizNumeros[3][0]);
            ui->pushButton_19->setText(dato);
            analisis(2,ui->pushButton_19);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro20()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][1];
        QString dato;
        dato = QString::number(matrizNumeros[3][1]);
        ui->pushButton_20->setText(dato);
        analisis(1,ui->pushButton_20);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][1];
            QString dato;
            dato = QString::number(matrizNumeros[3][1]);
            ui->pushButton_20->setText(dato);
            analisis(2,ui->pushButton_20);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro21()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][2];
        QString dato;
        dato = QString::number(matrizNumeros[3][2]);
        ui->pushButton_21->setText(dato);
        analisis(1,ui->pushButton_21);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][2];
            QString dato;
            dato = QString::number(matrizNumeros[3][2]);
            ui->pushButton_21->setText(dato);
            analisis(2,ui->pushButton_21);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro22()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][3];
        QString dato;
        dato = QString::number(matrizNumeros[3][3]);
        ui->pushButton_22->setText(dato);
        analisis(1,ui->pushButton_22);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][3];
            QString dato;
            dato = QString::number(matrizNumeros[3][3]);
            ui->pushButton_22->setText(dato);
            analisis(2,ui->pushButton_22);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro23()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][4];
        QString dato;
        dato = QString::number(matrizNumeros[3][4]);
        ui->pushButton_23->setText(dato);
        analisis(1,ui->pushButton_23);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][4];
            QString dato;
            dato = QString::number(matrizNumeros[3][4]);
            ui->pushButton_23->setText(dato);
            analisis(2,ui->pushButton_23);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro24()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[3][5];
        QString dato;
        dato = QString::number(matrizNumeros[3][5]);
        ui->pushButton_24->setText(dato);
        analisis(1,ui->pushButton_24);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[3][5];
            QString dato;
            dato = QString::number(matrizNumeros[3][5]);
            ui->pushButton_24->setText(dato);
            analisis(2,ui->pushButton_24);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro25()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][0];
        QString dato;
        dato = QString::number(matrizNumeros[4][0]);
        ui->pushButton_25->setText(dato);
        analisis(1,ui->pushButton_25);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][0];
            QString dato;
            dato = QString::number(matrizNumeros[4][0]);
            ui->pushButton_25->setText(dato);
            analisis(2,ui->pushButton_25);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro26()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][1];
        QString dato;
        dato = QString::number(matrizNumeros[4][1]);
        ui->pushButton_26->setText(dato);
        analisis(1,ui->pushButton_26);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][1];
            QString dato;
            dato = QString::number(matrizNumeros[4][1]);
            ui->pushButton_26->setText(dato);
            analisis(2,ui->pushButton_26);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro27()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][2];
        QString dato;
        dato = QString::number(matrizNumeros[4][2]);
        ui->pushButton_27->setText(dato);
        analisis(1,ui->pushButton_27);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][2];
            QString dato;
            dato = QString::number(matrizNumeros[4][2]);
            ui->pushButton_27->setText(dato);
            analisis(2,ui->pushButton_27);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro28()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][3];
        QString dato;
        dato = QString::number(matrizNumeros[4][3]);
        ui->pushButton_28->setText(dato);
        analisis(1,ui->pushButton_28);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][3];
            QString dato;
            dato = QString::number(matrizNumeros[4][3]);
            ui->pushButton_28->setText(dato);
            analisis(2,ui->pushButton_28);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro29()
{ if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][4];
        QString dato;
        dato = QString::number(matrizNumeros[4][4]);
        ui->pushButton_29->setText(dato);
        analisis(1,ui->pushButton_29);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][4];
            QString dato;
            dato = QString::number(matrizNumeros[4][4]);
            ui->pushButton_29->setText(dato);
            analisis(2,ui->pushButton_29);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro30()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[4][5];
        QString dato;
        dato = QString::number(matrizNumeros[4][5]);
        ui->pushButton_30->setText(dato);
        analisis(1,ui->pushButton_30);

    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[4][5];
            QString dato;
            dato = QString::number(matrizNumeros[4][5]);
            ui->pushButton_30->setText(dato);
            analisis(2,ui->pushButton_30);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro31()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][0];
        QString dato;
        dato = QString::number(matrizNumeros[5][0]);
        ui->pushButton_31->setText(dato);
        analisis(1,ui->pushButton_31);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][0];
            QString dato;
            dato = QString::number(matrizNumeros[5][0]);
            ui->pushButton_31->setText(dato);
            analisis(2,ui->pushButton_31);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro32()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][1];
        QString dato;
        dato = QString::number(matrizNumeros[5][1]);
        ui->pushButton_32->setText(dato);
        analisis(1,ui->pushButton_32);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][1];
            QString dato;
            dato = QString::number(matrizNumeros[5][1]);
            ui->pushButton_32->setText(dato);
            analisis(2,ui->pushButton_32);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro33()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][2];
        QString dato;
        dato = QString::number(matrizNumeros[5][2]);
        ui->pushButton_33->setText(dato);
        analisis(1,ui->pushButton_33);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][2];
            QString dato;
            dato = QString::number(matrizNumeros[5][2]);
            ui->pushButton_33->setText(dato);
            analisis(2,ui->pushButton_33);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro34()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][3];
        QString dato;
        dato = QString::number(matrizNumeros[5][3]);
        ui->pushButton_34->setText(dato);
        analisis(1,ui->pushButton_34);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][3];
            QString dato;
            dato = QString::number(matrizNumeros[5][3]);
            ui->pushButton_34->setText(dato);
            analisis(2,ui->pushButton_34);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}
void VentanaMatrizImages::presionarCuadro35()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][4];
        QString dato;
        dato = QString::number(matrizNumeros[5][4]);
        ui->pushButton_35->setText(dato);
        analisis(1,ui->pushButton_35);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][4];
            QString dato;
            dato = QString::number(matrizNumeros[5][4]);
            ui->pushButton_35->setText(dato);
            analisis(2,ui->pushButton_35);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}

void VentanaMatrizImages::presionarCuadro36()
{
    if(numbrBpressedIntime == 0)
    {
        numbrBpressedIntime++;
        botonUndido1 = matrizNumeros[5][5];
        QString dato;
        dato = QString::number(matrizNumeros[5][5]);
        ui->pushButton_36->setText(dato);
        analisis(1,ui->pushButton_36);
    }
    else
    {
        if(numbrBpressedIntime == 1)
        {
            numbrBpressedIntime++;
            botonUndido2 = matrizNumeros[5][5];
            QString dato;
            dato = QString::number(matrizNumeros[5][5]);
            ui->pushButton_36->setText(dato);
            analisis(2,ui->pushButton_36);
        }
        else
        {
            if(numbrBpressedIntime == 2)
            {
                numbrBpressedIntime = 0;
                //-------------------Analisis -----------------------------------//
                if(botonUndido1 == botonUndido2)
                {
                    numeroParejas+=2;

                    button1->hide();
                    button2->hide();
                    if(numeroParejas == (size*size))
                    {
                        success = true;
                        cout << success << endl;
                        mostrarSegundaVentana();
                        this->destroy(true);
                    }
                }
                button1 = 0;
                button2 = 0;
                botonUndido1 = -1;
                botonUndido2 = -2;
                hideAll();

            }
        }
    }
}


void VentanaMatrizImages::setSegundaVentana(ventanaLetrasJuego *v_)
{
    ventanaJuegoLetras = v_;
}

void VentanaMatrizImages::mostrarSegundaVentana()
{
    ventanaJuegoLetras->show();
}
