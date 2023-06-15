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
        cout << "El ya auto se esta encedido" << endl;
    }

    else
    {
        estado = !estado;
        cout << "Ahora el auto esta prendido" << endl;
        return estado;
    }
}

bool Auto::apagar()
{
    if (true)
    {
        cout << "El auto ya esta apagado" << endl;
    }
    else
    {
        estado = !estado;
        cout << "El auto está apagado" << endl;
        return estado;
    }
}

bool Auto::acelerar()
{
    if (true)
    {
        if (estado && velocidad < 230)
        {
            velocidad += 15;
        
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
