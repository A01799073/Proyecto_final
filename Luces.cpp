#include "Luces.h"

Luces::Luces()
{
    estado=false
}

bool Luces::getEstados()
{
    return estado
}

bool Luces::setEstado()
{
    if (estado==false)
    {
        bool estado= !estado
        nuevoEstado= estado;
        return nuevoEstado;
    }
    
    return false;
}
