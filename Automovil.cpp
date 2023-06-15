/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/

#include "Automovil.h"
#include <iostream>
using namespace std;
bool Auto::encender()
{
    if (true)
    {
        cout <<"El ya auto se está encedido"<<endl;
    }
    
    if (false)
    {
        estado = !estado;
        cout << "El auto esta prendido" << endl;
        return estado;
    }
    
}

bool Auto::apagar()
{
    if (true)
    {
        cout << "El auto ya está prendido" << endl;
        return true;
    }
    else
    {
        cout << "El auto está apagado" << endl;
    }
}

bool Auto::acelerar()
{
    if (true)
    {
        for (i = 0; i < 231; 15 ++)
        {
            contadorVelocidad = 0;
        }
    }
}

bool Auto::frenar()
{
    return false;
}

bool Auto::prenderLuces()
{
    return false;
}

bool Auto::apagarLuces()
{
    return false;
}

int Auto::getVelocidadActual()
{
    return 0;
}

void Auto::setVelocidadActual()
{
}

void Auto::imprimir()
{
}
