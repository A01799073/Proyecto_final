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
    int velocidadActual = 0;
    luces.getEstado(false);
}

bool Automovil::encenderAuto()
{
    if (estadoAuto == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Automovil::apagarAuto()
{
    if (estadoAuto == true)
    {
        return false;
    }
    else
    {
        return false;
    }
}

int Automovil::getVelocidadActual()
{
    return velocidadActual;
}

bool Automovil::acelerar()
{
    if (estadoAuto == true && velocidadActual < 230)
    {
        velocidadActual += 15;
        return velocidadActual;
    }
    else if (estadoAuto == false)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }
    return 0;
}

bool Automovil::frenar()
{
    if (estadoAuto == true)
    {
        velocidadActual -= 25;

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
    return 0;
}

bool Automovil::prenderLuces()
{
    if (estadoAuto == true)
    {
        if (luces.getEstado() == false)
        {
            cout << "Las luces se encendieron correctamente" << endl;
        }
        else
        {
            cout << "Las luces ya estaban prendidas" << endl;
        }
    }
    else
    {
        cout << "No se pueden prender las luces si el auto esta apagado" << endl;
    }
    return 0;
}

bool Automovil::apagarLuces()
{
    if (estadoAuto == true)
    {
        if (luces.getEstado() == true)
        {
            cout << "Las luces se apagaron correctamente" << endl;
        }
        else
        {
            cout << "Las luces ya estaban apagadas" << endl;
        }
    }
    else
    {
        cout << "No se puede preden prender las luces si el auto esta apagado" << endl;
    }
    return 0;
}
