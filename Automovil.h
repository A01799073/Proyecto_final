/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
 */

#include "Tanque.h"
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Automovil
{
private:
    bool estadoAuto;
    bool estadoLuces;
    int velocidadIncial;
   // Tanque capacidad;
   // Tanque nivelActual;
//    int numLlantas4;

public:
    Automovil();

    bool encenderAuto();
    bool apagarAuto();

    int getVelocidadActual();
    void setVelocidadActual(int velocidadInicial);

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();
};
#endif