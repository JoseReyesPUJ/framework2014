#include "matrizjimages.h"
#include <time.h>
#include <iostream>
#include <ventanamatrizimages.h>

using namespace std;

MatrizJimages::MatrizJimages(int size_)
{
    //Creamos las matrices
    //Matriz de control

    matrizControl = new int*[size_];
    sizeMatriz = size_;
    //Reservamos memoria para la matriz de control
    for(int i = 0; i < size_ ; i++)
        matrizControl[i] = new int[size_];


    int *listaNumeros;
    int *listaVeces;
    int controlRandom;

    // reservamos memoria para estas 2 listas las cuales llevaran el control sobre la elaboracion
    // ramdom de la matriz de numeros y posterior a imagenes
    if(size_ == 2)
    {
        listaNumeros = new int[2];
        listaVeces = new int[2];
        for(int c = 0 ; c < 2 ; c++)
        {
         listaNumeros[c] = c;
         listaVeces[c] = 0;
        }
        controlRandom = 2;
    }
    else
    {
        if(size_ == 4)
        {
            listaNumeros = new int[8];
            listaVeces = new int[8];
            for(int c = 0 ; c < 8 ; c++)
            {
             listaNumeros[c] = c;
             listaVeces[c] = 0;
            }
            controlRandom = 8;
        }
        else
        {
            if(size_ == 6)
            {
                listaNumeros = new int[18];
                listaVeces = new int[18];
                for(int c = 0 ; c < 18 ; c++)
                {
                 listaNumeros[c] = c;
                 listaVeces[c] = 0;
                }
                controlRandom = 18;
            }
        }
    }



    //llenamos la matriz de numeros aleatorios
    cout << "LLEgo"<< endl;
    srand(time(0));
    int random;
    for(int cont = 0 ; cont<size_ ; cont++)
    {
        for(int cont2 = 0 ; cont2<size_ ; cont2++)
        {
           random = rand()% controlRandom;
           if(listaVeces[random]<2)
           {
               matrizControl[cont][cont2] = listaNumeros[random];
               listaVeces[random] = listaVeces[random]+1;
           }
           else
           {
               cont2--;
           }
        }
    }

    //imprimir matriz
    for(int j = 0 ; j < size_;j++)
    {
        for(int k = 0 ; k < size_;k++)
        {
            cout << matrizControl[j][k] << " ";
        }
        cout << endl;
    }

    cout << sizeMatriz << endl;
    VentanaMatrizImages *ventana = new VentanaMatrizImages();
    ventana->construcAobligatorio(matrizControl,sizeMatriz);
    ventana->show();


}
