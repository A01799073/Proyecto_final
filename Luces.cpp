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
    estado=estadoNuevo;
    return estado;
}