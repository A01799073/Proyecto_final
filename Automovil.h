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
    // Atrubutos
    bool estadoAuto;
    int velocidadActual;
    Luces luces;
    Tanque tanque;
    Llantas llantas[4]; // arreglo de la posición de la llantas

public:
    // Metodos
    Automovil();

    bool encenderAuto();
    bool apagarAuto();

    int getVelocidadActual();

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();

    double cargar();
    void inflarDesinflarLlanta(int indice, double presion);
    void mostrarTablero();
};
#endif