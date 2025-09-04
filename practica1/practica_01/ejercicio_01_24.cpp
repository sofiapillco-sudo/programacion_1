// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 24

#include <iostream>

using namespace std;

int main() 
{
    int opcion;

    do {
        cout << "menu" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "elija una opcion";
        cin >> opcion;

        switch (opcion) 
        {
            case 1: cout << "opcion 1" << endl; 
                break;
            case 2: cout << "opcion 2" << endl;
                break;
            case 3: cout << "opcion 3" << endl;
                break;
            case 0: cout << "saliendo del programa" << endl;
                break;
            default: cout << "opcion invalida" << endl;
        }

    } while (opcion != 0);

    return 0;
}