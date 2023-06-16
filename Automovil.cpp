/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include <iostream>
#include "Automovil.h"
using namespace std;

Automovil::Automovil()
{
    bool estadoAuto = false;
    luces.setEstado(false);
    int velocidadInicial = 0;
}

bool Automovil::encenderAuto()
{
    if (estadoAuto == false)
    {
        return true;
    }
    else
    {
        cout << "El auto ya esta encendido" << endl;
    }
}

bool Automovil::apagarAuto()
{
    if (estadoAuto == true)
    {
        return false;
    }
    else
        cout << "El auto está apagado" << endl;
}

int Automovil::getVelocidadActual()
{
    return velocidadInicial;
}

void Automovil::setVelocidadActual(int num)
{
    this->velocidadInicial = num;
}

bool Automovil::acelerar()
{
    if (estadoAuto == true && velocidadInicial < 230)
    {
        velocidadInicial += 15;
        return velocidadInicial;
    }
    else if (estadoAuto = false)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }
}
bool Automovil::frenar()
{
    if (estadoAuto== true)
    {
        velocidadInicial -= 25;
        if (velocidadInicial < 0)
        {
            velocidadInicial = 0;
            cout << "La velocidad ha llegado a" << velocidadInicial << endl;
        }
        else
        {
            cout << "No puede frenar si el auto está apagado, por favo enciendalo" << endl;
        }
    }
    return false;
}

bool Automovil::prenderLuces()
{
    if (estadoAuto == true)
    {
        if (luces.getEstado()==false)
        {
            cout << "Las luces se encendieron correctamente" << endl;
        }
        else
        {
            cout<< "Las luces ya estaban prendidas" << endl;
        }
    }
    else
    {
        cout << "No se pueden prender las luces si el auto esta apagado" << endl;
    }
}
bool Automovil::apagarLuces()
{
    if (estadoAuto==true)
    {
        if (luces.getEstado()==true)
        {
            cout<< "Las luces se apagaron correctamente"<<endl;
        }
        else
        {
            cout<<"Las luces ya estaban apagadas"<<endl;
        }
    }
    else
    {
        cout<<"No se puede preden prender las luces si el auto esta apagado"<<endl;
    }
}
