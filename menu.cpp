/*
    Profesor:Roberto Martín Román.
    Autor: Kenia Esmeralda Ramos Javier.
    Matrícula: A01799073
    Grupo: 301
    Descripción: Programa principal  de la situación problema
*/

#include <iostream>
#include "Automovil.h"
#include "Automovil.cpp"
#include "Tanque.h"
#include "Tanque.cpp"
using namespace std;

int main()
{
    int opcionMenu;
    Automovil a;

    do
    {
        cout << "                    !Bienvenid@!                   " << endl;
        cout << " Seleccione la opcion que desea consultar del menu " << endl;
        cout << "------------------------MENU-----------------------" << endl;
        cout << " 1. Prender/Apagar el auto.........................." << endl;
        cout << " 2. Acelerar........................................" << endl;
        cout << " 3. Frenar.........................................." << endl;
        cout << " 4. Prender las luces..............................." << endl;
        cout << " 5. Apagar las luces................................" << endl;
        cout << " 6. Cargar gasolina................................." << endl;
        cout << " 7. Inflar/o desinflar llantas......................" << endl;
        cout << " 8. Salir..........................................." << endl;

        cout << "Ingrese la opcion: " << endl;
        cin >> opcionMenu;

        switch (opcionMenu)
        {
        case 1:
            if ()
            {
                
            }
            else
            {

            }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

        case 6:
            break;
        case 7:
            break;

        case 8:
            cout<<"¡Hasta la proxima!"<<endl;
            cout<<"Saliendo.........."<<endl;
            break;
        default:
            cout << "La opcion no existe dentro del menu, por favor ingre uno de los numeros que aparecen en el menu" << endl;
        }

    } while (opcionMenu != 8);

    return 0;
}