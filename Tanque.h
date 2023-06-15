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
    void setCapacidad(int n);

    int getNivelActual();
    void setNivelActual(int n);

   std::string aviso();

    void imprimir();
};
#endif