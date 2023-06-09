/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Tanque.
*/
#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque()
{
    capacidad=42;
    nivelActual=0;
}

int Tanque::getCapacidad()
{
    return capacidad;
}

void Tanque::setCapacidad(int n)
{
    if(n>0)
    {
        capacidad=n;
    }
    else
    {
        capacidad=0;
    }
}

int Tanque::getNivelActual()
{
    return nivelActual;
}

void Tanque::setNivelActual(int n)
{
    if(n>=0 && n<=capacidad)
    {
        nivelActual=n;
    }
}

void Tanque::imprimir()
{
    cout << "Capacidad: " << capacidad << endl;
    cout << "Nivel actual: " << nivelActual << endl;

}