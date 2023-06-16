/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include "Automovil.h"

Automovil::Auto()
{
    bool estadoAuto=false;
    bool estadoLuces=false;
    int velocidadInial=0;
    int velocidadActual=0;
    int numLlantas=4;
}

bool Automovil::encender()
{
    if (estadoAuto=true)
    {
        cout << "El ya auto se esta encedido" << endl;
    }

    else
    {
        estadoAuto = !estadoAuto;
        cout << "Ahora el auto esta prendido" << endl;
        return estadoAuto;
    }
}

bool Automovil::apagar()
{
    if (estadoAuto=false)
    {
        cout << "El auto ya esta apagado" << endl;
    }
    else
    {
        estadoAuto = !estadoAuto;
        cout << "Ahora el auto esta apagado" << endl;
        return estadoAuto;
    }
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
        if (estado==true && velocidadActual< 230)
    {
        velocidadActual+=15;
        return velocidadActual;
    }
    return false;
}
bool Automovil::frenar()
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
    return false;
}

bool Automovil::prenderLuces()
{
    return true;
}

bool Automovil::apagarLuces()
{
    return false;
}

void Automovil::aviso()
{
    if (velocidadIncial>160)
    {
        cout<<"¡PELIGRO!"
    }
    
}