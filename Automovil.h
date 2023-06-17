/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
 */
#include "Luces.cpp"
#include "Tanque.cpp"
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Automovil
{
private:
    bool estadoAuto;
    int velocidadActual;
    Luces luces;
    Tanque gasolina;

public:
    Automovil();

    bool encenderAuto();
    bool apagarAuto();

    int getVelocidadActual();

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();
};
#endif