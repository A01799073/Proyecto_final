/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/
#include "Automovil.h"
#include <iostream>
using namespace std;

Automovil::Automovil()
{
    bool estadoAuto = false;
    int velocidadActual = 0;
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
    return velocidadActual;
}

bool Automovil::acelerar()
{
    if (estadoAuto = true && velocidadActual < 230)
    {
        velocidadActual += 15;
        return velocidadActual;
    }
    else if (estadoAuto = false)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }
}
bool Automovil::frenar()
{
    if (estadoAuto = true && velocidadActual>0)
    {
        velocidadActual -= 25;
        return velocidadActual;
        if (velocidadActual < 0)
        {
            velocidadActual = 0;
            cout << "La velocidad ha llegado a" << velocidadActual << endl;
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
        if (estadoLuces == false)
        {
            estadoLuces = true;
            cout << "Las luces se encendieron correctamente" << endl;
        }
        else if (estadoLuces = true)
        {
            cout << "Las luces ya estaban prendidas" << endl;
        }
        else
        {
            cout << "No se pueden prender las luces si el auto esta apagado" << endl;
        }
    }
}

bool Automovil::apagarLuces()
{
    if (estadoAuto == true)
    {
        if (estadoLuces == true)
        {
            estadoLuces = false;
            cout << "Las luces se apagaron correctamente" << endl;
        }
        else if (estadoLuces == false)
        {
            cout << "Las luces ya estaban apagadas" << endl;
        }
        else
        {
            cout << "No se pueden prender las luces si el auto esta apagado" << endl;
        }
    }   
}
