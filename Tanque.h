/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Representa la capacidad que contiene el tanque y su nivel de tanque actual.
 *Declaración de la clase Tanque.
 */

#ifndef TANQUE_H
#define TANQUE_H
#include <string>

class Tanque
{
private:
    int capacidad;
    int nivelActual;

public:
    Tanque();

    int getCapacidad();
    void setCapacidad(double);

    int getNivelActual();
    void setNivelActual(bool estado, int velocidad);
    void imprimir();
};
#endif