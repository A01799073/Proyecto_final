/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include <iostream>
#include "Automovil.h"
#include "Tanque.h"
using namespace sdt;

Automovil::Automovil()
{
    bool estadoAuto = apagado;
    bool estadoLuces = apagado;
    int velocidadInial = 0;
    //    int numLlantas=4;
}

bool Automovil::encenderAuto()
{
    return encedido;
}

bool Automovil::apagarAuto()
{
    return apagado;
}

int Automovil::getVelocidadActual()
{
    return velocidadActual;
}

void Automovil::setVelocidadActual()
{
}

bool Automovil::acelerar()
{
    if (estadoAuto = encedido && velocidadActual < 230)
    {
        velocidadActual += 15;
        return velocidadActual;
    }
    else if (estadoAuto == apagarAuto)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }

}
bool Automovil::frenar()
{
    if (estado == true)
    {
        velocidadActual -= 25;
        if (velocidadActual < 0)
        {
            velocidadActual = 0;
            cout << "La velocidad ha llegado a" << velocidadActual << endl;
        }
    }
    return false;
}

bool Automovil::prenderLuces()
{
    return prendidas;
}

bool Automovil::apagarLuces()
{
    return apagadas;
}

void Automovil::aviso()
{
    
}