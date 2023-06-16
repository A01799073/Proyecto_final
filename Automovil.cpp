/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include <iostream>
#include "Automovil.h"
#include "Tanque.h"
#include "Tanque.cpp"
using namespace sdt;

Automovil::Automovil()
{
    bool estadoAuto = false;
    bool estadoLuces = false;
    int velocidadInial = 0;
    //    int numLlantas=4;
}

bool Automovil::encenderAuto()
{
    if (estadoAuto=false)
    {
        return true;
    }
    else
    {
        cout<<"El auto ya esta encendido"<<endl;
    }
    
}

bool Automovil::apagarAuto()
{
    if (estadoAuto=true)
    {
        return false;
    }
    else
    cout<<"El auto está apagado"<<endl;
    
}

int Automovil::getVelocidadActual()
{
    return velocidadIncial;
}
/*
void Automovil::setVelocidadActual()
{
}
*/
bool Automovil::acelerar()
{
    if (estadoAuto = encendido && velocidadIncial < 230)
    {
        velocidadIncial += 15;
        return velocidadIncial;
    }
    else if (estadoAuto = apagado)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }
}
bool Automovil::frenar()
{
    if (estadoAuto = encenderAuto)
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
    return false;
}

bool Automovil::prenderLuces()
{
    if (estadoAuto=true && estadoLuces=false)
    {
        return true;
    }
    else if (estadoAuto=true && estadoLuces=true)
    {
        cout<<"Las luces ya estaban prendidas"<<endl;
    }
    else
    {
        cout<<"No se pueden prender las luces si el auto esta apagado"<<endl;
    }   
}

bool Automovil::apagarLuces()
{
    if (estadoAuto=true && estadoLuces=true)
    {
        return false;
    }
    else if (estadoAuto=true && estadoLuces==false)
    {
        cout<<"Las luces ya estaban apagadas"
    }
    else
    {
        cout<<"Las luces no se pueden apagar si el auto esta apagado"<<endl;
    }
    
    return apagadas;
}
