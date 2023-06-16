/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Auto
 */
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
class Automovil
{
private:
    bool estadoAuto;
    bool estadoLuces;
    int velocidadInicial;
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