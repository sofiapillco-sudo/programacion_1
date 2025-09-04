// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 25

#include <iostream>

using namespace std;

int main() 
{
    int numero;
    char respuesta;

    do {
        cout << "ingrese un numero";
        cin >> numero;

        cout << "tabla de multiplicar del" << numero << endl;
        for (int i = 1; i <= 10; i++) 
        {
            cout << numero << "x" << i << "=" << numero * i << endl;
        }

        cout << "desea calcular otra tabla? (s/n)";
        cin >> respuesta;

    } while (respuesta == 's');

    return 0;
}