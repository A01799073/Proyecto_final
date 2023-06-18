/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Tanque.
*/
#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque()
{
    capacidad = 42;
    nivelActual = 42; // EL TANQUE ESTA LLENO
}

int Tanque::getCapacidad() // valor maximo de carga de la capacidad del tanque
{
    return capacidad;
}
void Tanque::setCapacidad(double num) // LLenar el tanque
{
    nivelActual += num;
    if (nivelActual > 42)
    {
        cout << "El nivel de gasolina ha sobrepasado el nivel de tanque" << endl;
        cout << "No se puede realizar"<<endl;
    }
    else
    {
        cout << "Por favor ingrese el numero positivo de litros que desea agregar"<<endl;
    }
}

int Tanque::getNivelActual() // nivel actual del tanque
{
    return nivelActual;
}

void Tanque::setNivelActual(bool estadoauto, int num)
{
    if (estadoauto && num < 230)
    {
        nivelActual -= 0.005 * velocidadActual;

        if (nivelActual < capacidad * 0.15)
        {
            cout << "La capacidad del tanque ha llegado al 15%" << endl;
            cout << "Por favor de llenar el tanque" << endl;
        }
    }
}