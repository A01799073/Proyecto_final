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

int Tanque::getCapacidad()   //valor maximo de carga de la capacidad del tanque 
{
    return capacidad;
}

int Tanque::getNivelActual() //nivel actual del tanque
{
    return nivelActual;
}

void Tanque::setNivelActual(int )
{
    //ciclo for que vaya dismminuyendo el nivel del tanque 

}

void Tanque::setCapacidad(int num)   //LLenar el tanque
{
    
}

string Tanque::aviso()
{
    if (capacidad * 0.15)
    {
        cout << "La capacidade del tanque ha llegado al 15%" << endl;
        cout << "Por favor de llenar el tanque" << endl;
    }
    // return string();
}

    void Tanque::imprimir()
{
    cout << "Capacidad: " << capacidad << endl;
    cout << "Nivel actual: " << nivelActual << endl;
}