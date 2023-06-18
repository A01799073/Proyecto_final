/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Representa la capacidad que contiene el tanque y su nivel de tanque actual.
 *Declaración de la clase Tanque.
 */

#ifndef TANQUE_H
#define TANQUE_H

class Tanque
{
private:
    int capacidad;
    int nivelActual;

public:
    Tanque();

    int getCapacidad();
    void setNivelActual(int num);
    void setCapacidad(double num);
    int getNivelActual();

};
#endif