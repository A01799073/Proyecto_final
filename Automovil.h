/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
 */
#include "Luces.cpp"
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Automovil
{
private:
    bool estadoAuto;
    int velocidadInicial;
    Luces luces;

public:
    Automovil();

    bool encenderAuto();
    bool apagarAuto();

    int getVelocidadActual();
    void setVelocidadActual(int num);

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();
};
#endif