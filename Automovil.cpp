/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include "Automovil.h"
#include "Luces.h"
#include <iostream>
using namespace std;

Auto::Auto()
{
    bool estado=false;
    int velocidadInial=0;
    int velocidadActual=0;
    int numLlantas=4;
}

/*
bool Auto::getEncender()
{
    return estado;
}

bool Auto::setEncender()
{
    return true;
}
*/

bool Auto::encender()
{
    if (estado==true)
    {
        cout << "El ya auto se esta encedido" << endl;
    }

    else
    {
        estado = !estado;
        cout << "Ahora el auto esta prendido" << endl;
        return estado;
    }
}
/*
bool Auto::getApagar()
{
    return false;
}

bool Auto::setApagar()
{
    return false;
}
*/
bool Auto::apagar()
{
    if (estado==false)
    {
        cout << "El auto ya esta apagado" << endl;
    }
    else
    {
        estado = !estado;
        cout << "Ahora el automovil esta apagado" << endl;
        return estado;
    }
}

int Auto::getVelocidadActual()
{
    return velocidadActual;
}

void Auto::setVelocidadActual()
{

}
bool Auto::acelerar()
{
    if (estado==true && velocidadActual< 230)
    {
        velocidadActual+=15;
        return velocidadActual;
    }
}

bool Auto::frenar()
{
    if (estado==true)
    {
        velocidadActual-=25;
        if (velocidadActual<0)
        {
            velocidadActual=0;
            cout<<"La velocidad ha llegado a"<<velocidadActual<<endl;
        }
    }
}

bool Auto::prenderLuces()
{
    return true;
}

bool Auto::apagarLuces()
{
    return false;
}

void Auto::imprimir()
{

}
