/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
*/

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Auto
{
private:
    bool estado;
    int velocidad;
    int numLlantas = 4;

public:
    bool encender();
    bool apagar();

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();

    int getVelocidadActual();
    void setVelocidadActual();

    void imprimir();
}