/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Luces.
*/
#include "Luces.h"

Luces::Luces()
{
    estado = false;
}

bool Luces::getEstado()
{
    return estado;
}

bool Luces::setEstado(bool estadoNuevo)
{
    estado = estadoNuevo; // modifica el estado de las luces
    return estado;
}