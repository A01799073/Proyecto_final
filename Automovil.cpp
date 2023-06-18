/*
    Autor:Kenia Esmeralda Ramos Javier.
    Implementación de la clase Automovil.
*/
#include <iostream>
#include "Automovil.h"
using namespace std;

Automovil::Automovil()
{
    bool estadoAuto=false;
    int velocidadActual = 0;
    luces.setEstado(false);
    tanque.setNivelActual(velocidadActual);
    tanque.setCapacidad(velocidadActual);
}

bool Automovil::encenderAuto()
{
    if (estadoAuto == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Automovil::apagarAuto()
{
    if (estadoAuto == true)
    {
        return false;
    }
    else
    {
        return false;
    }
}

int Automovil::getVelocidadActual()
{
    return velocidadActual;
}

bool Automovil::acelerar()
{
    if (estadoAuto == true && velocidadActual < 230)
    {
        velocidadActual += 15;
        return true;

        if (velocidadActual > 160)
        {
            cout << "¡PELIGRO!" << endl;
        }
    }
    else if (estadoAuto == false)
    {
        cout << "No se puede acelerar si el auto esta apagado" << endl;
    }
    return false;
}

bool Automovil::frenar()
{
    if (estadoAuto == true)
    {
        velocidadActual -= 25;
        return true;

        if (velocidadActual < 0)
        {
            velocidadActual = 0;
            return false;
        }
        else
        {
            cout << "No puede frenar si el auto está apagado, por favo enciendalo" << endl;
        }
    }
    return false;
}

bool Automovil::prenderLuces()
{
    if (estadoAuto == true)
    {
        if (luces.getEstado() == false)
        {
            cout << "Las luces se encendieron correctamente" << endl;
        }
        else
        {
            cout << "Las luces ya estaban prendidas" << endl;
        }
    }
    else
    {
        cout << "No se pueden prender las luces si el auto esta apagado" << endl;
    }
    return 0;
}

bool Automovil::apagarLuces()
{
    if (estadoAuto == true)
    {
        if (luces.getEstado() == true)
        {
            cout << "Las luces se apagaron correctamente" << endl;
        }
        else
        {
            cout << "Las luces ya estaban apagadas" << endl;
        }
    }
    else
    {
        cout << "No se puede preden prender las luces si el auto esta apagado" << endl;
    }
    return 0;
}

double Automovil::cargar()
{
    if (estadoAuto == true)
    {
        tanque.setNivelActual(velocidadActual);
        tanque.getNivelActual();

        if (tanque.getNivelActual() < 42 * 01.5)
        {
            double litros;
            cout << "Ingrese los litros que desea agregar: " << endl;
            cin >> litros;
            tanque.setCapacidad(litros);
            
        }
    }
    else
    {
        double litros;
        cout << "Ingrese los litros que desea agregar: " << endl;
        cin >> litros;
        tanque.setCapacidad(litros);
    }
    return 0;
}

void Automovil::inflarDesinflarLlanta(int indice, double presion)
{
    if (indice<0 || indice>=4)
    {
        cout<<"Ingrese la posición de la llanta correcta (1,2,3 o 4)"<<endl;
    }
    else
    {
        llantas[indice].setPresion(presion);
        cout<<"La llanta"<<indice + 1<<" ha sido inflada/desinfalsada"<<endl;
        cout<<"La presion actual de la llanta es de: "<<llantas[indice].getPresion();
    }
    
}

void Automovil::mostrarTablero()
{
    cout<<"NOTA: True=Encendido | False= Apagado";
    cout<<"Estado del auto: " <<estadoAuto<<endl;
    cout<<"Velocidad: "<<velocidadActual<<"km/h"<<endl;
    cout<<"Nivel de gasolina: " << tanque.getNivelActual()<<"litros"<<endl;
    cout<<"Luces: " << luces.getEstado()<<endl;
    for (int i = 0; i < 4; i++)
    {
        double presion= llantas[i].getPresion();
        cout<<"La llanta"<<i+1<<"tien una presion de: "<<presion<<"psi"<<endl;


        if (presion>33*0.2 || presion<33*0.2)
        {
            cout<<"¡PELIGRO!"<<endl;
        }
        
    }
    

    
}
