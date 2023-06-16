#ifndef LUCES_H
#define LUCES_H
class Luces
{
private:
    bool estado;
public:
    Luces();
    bool getEstado();
    bool setEstado(bool estadoNuevo);
};
#endif
