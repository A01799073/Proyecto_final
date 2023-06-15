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
    int velocidadIncial;
    int velocidadActual;
    int numLlantas4;

public:
    Auto();

    bool encender();
//    bool getEncender();
//    bool setEncender();

    bool apagar();
//    bool getApagar();
//    bool setApagar();

    int getVelocidadActual();
   void setVelocidadActual();

    bool acelerar();
    bool frenar();

    bool prenderLuces();
    bool apagarLuces();

    void imprimir();
};
#endif