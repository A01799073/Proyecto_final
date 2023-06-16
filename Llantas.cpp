#include "Llantas.h"

Llantas::Llantas()
{
    presion=33;
}

int Llantas::getPresion()
{
    return presion;
}

void Llantas::setPresion(double num)
{
    presion=num;
}
