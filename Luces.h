/*
 *Autor: Kenia Esmeralda Ramos Javier.
 *Declaración de la clase Luces.
 */
#ifndef LUCES_H
#define LUCES_H
class Luces
{
private:
    // Atrubutos
    bool estado;

public:
    // Metodos
    Luces();
    bool getEstado();
    bool setEstado(bool estadoNuevo);
};
#endif
