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
    nivelActual = 0;
}

int Tanque::getCapacidad() // valor maximo de carga de la capacidad del tanque
{
    return capacidad;
}

int Tanque::getNivelActual() // nivel actual del tanque
{
    return nivelActual;
}

void Tanque::setNivelActual(bool estado, int velocidad)
{
    if (estado && velocidad < 230)
    {
        nivelActual=capacidad- 0.005 * velocidad;
        
        if (42 * 0.15)
        {
        cout << "La capacidade del tanque ha llegado al 15%" << endl;
        cout << "Por favor de llenar el tanque" << endl;
        }
    }
}

void Tanque::setCapacidad(double num) // LLenar el tanque
{
    capacidad+= num;
    if (capacidad>42)
    {
        capacidad=42;
        cout<<"El nivel de gasolina ha sobrepasado el nivel de tanque"<<endl;
        cout<<"El nivel Actual del tanque es de"<< capacidad<<endl;   
    }   
}

void Tanque::imprimir()
{
    cout << "Capacidad: " << capacidad << endl;
    cout << "Nivel actual: " << nivelActual << endl;   
}