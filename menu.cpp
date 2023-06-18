/*
    Profesor:Roberto Martín Román.
    Autor: Kenia Esmeralda Ramos Javier.
    Matrícula: A01799073
    Grupo: 301
    Descripción: Programa principal  de la situación problema
*/

#include <iostream>   //librería
#include "Automovil.h" //clase Automovil
using namespace std;

int main()
{
    cout<<"Kenia Esmeralda Ramos Javier. A01799073. ITC"
    Automovil auto1;
    int opcionMenu;

    do
    {
        auto1.mostrarTablero();   //imprime el Tablero
        //Menú del programa
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
        cin >> opcionMenu;                     //guarda la opcion que escojio el usuario

        switch (opcionMenu)  //se utilizo para selecionar una opcionde varios casos posibles.
        {
        case 1:
            int opcionAuto;
            //pregunta  que desea el usuario porque encender y apagar tienen diferentes constructores.
            cout << "¿Desea apagar o prender el automovil?: " << endl
                 << "1. Encender" << endl  
                 << "2.-Apagar" << endl;
            cin >> opcionAuto;

            if (opcionAuto == 1)  //Opcion que usa el constructor Encender
            {
                auto1.encenderAuto();
                break;
            }
            else if (opcionAuto == 2)  //Opcion que usa el constructor Apagar
            {
                auto1.apagarAuto();
            }
            else  //Si no se seleciona una opcion del 1 al 2 no muestra en la pantalla que no es una opcion disponible
            {
                cout << "Opcion no disponible" << endl;
            }

            break;

        case 2:
            auto1.acelerar();
            break;
        case 3:
            auto1.frenar();
            break;
        case 4:
            auto1.prenderLuces();
            break;
        case 5:
            auto1.apagarLuces();
            break;

        case 6:
            auto1.cargar();
            break;
        case 7:
            int llantas;
            double presion;
            cout<<"Ingrese la posición de la llanta (1,2,3 o 4)" << endl;
            cin >> llantas;
            cout << "Ingrese la presion que quiera modificar: " << endl;
            cin >> presion;
            auto1.inflarDesinflarLlanta(llantas - 1, presion);
            break;

        case 8:
            cout << "¡Hasta la proxima!" << endl;
            cout << "Saliendo.........." << endl;
            break;
        default:
            cout << "La opcion no existe dentro del menu, por favor ingre uno de los numeros que aparecen en el menu" << endl;
        }

    } while (opcionMenu != 8);

    return 0;
}