/*
    Borrador de funcionamiento de las clases antes de colocarlas en el main
*/

#include "Tanque.cpp"
#include "Luces.cpp"

int main()
{
    Tanque val;
    cout << "La capacidad maxima del tanque es de: " << val.getCapacidad() << endl;

 
    return 0; 
}





Automovil::Automovil()
{
    bool estadoAuto=false;
    bool estadoLuces=false;
    int velocidadInial=0;
    int velocidadActual=0;
    int numLlantas=4;
}

bool Automovil::encender()
{
    if (estadoAuto=true)
    {
        cout << "El ya auto se esta encedido" << endl;
    }

    else
    {
        estadoAuto = !estadoAuto;
        cout << "Ahora el auto esta prendido" << endl;
        return estadoAuto;
    }
}

bool Automovil::apagar()
{
    if (estadoAuto=false)
    {
        cout << "El auto ya esta apagado" << endl;
    }
    else
    {
        estadoAuto = !estadoAuto;
        cout << "Ahora el auto esta apagado" << endl;
        return estadoAuto;
    }
}

Automovil::Auto()
{
}

bool Automovil::acelerar()
{
    return false;
}

int Automovil::getVelocidadActual()
{
    return velocidadActual;
}

void Automovil::setVelocidadActual()
{

}
bool Autovil::acelerar()
{
    if (estado==true && velocidadActual< 230)
    {
        velocidadActual+=15;
        return velocidadActual;
    }
}

bool Autovil::frenar()
{
    if (estado==true)
    {
        velocidadActual-=25;
        if (velocidadActual<0)
        {
            velocidadActual=0;
            cout<<"La velocidad ha llegado a"<<velocidadActual<<endl;
        }
    }
}
