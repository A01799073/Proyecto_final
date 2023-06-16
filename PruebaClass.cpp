/*
    Borrador de funcionamiento de las clases antes de colocarlas en el main
*/

#include "Tanque.cpp"
#include "Llantas.cpp"
#include "Luces.cpp"


int main()
{
    Tanque val;
    cout << "La capacidad maxima del tanque es de: " << val.getCapacidad() << endl;

    Llantas val2;
    cout << "La presion que tiene la llanta es de: "<<val2.getPresion()<<endl;

    Luces val3;
    val3.setEstado(true);
    cout<<"El nuevo valor de las luces es de:"<<val3.getEstado()<<endl;

    return 0; 
}
