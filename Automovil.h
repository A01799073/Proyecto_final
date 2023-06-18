/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
 */
#include "Luces.h"
#include "Tanque.h"
#include "Llantas.h"
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Automovil
{
private:
    bool estadoAuto;
    int velocidadActual;
    Luces luces;
    Tanque tanque;
    Llantas llantas;

public:
    Automovil();

    bool encenderAuto();
    bool apagarAuto();

    int getVelocidadActual();

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();
     double cargar();
};
#endif