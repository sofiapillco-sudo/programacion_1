// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 14

#include <iostream>

using namespace std;

int main() 
{
    int numero;
    cout << "ingrese la altura del triangulo";
    cin >> numero;

    for (int i = 1; i <= numero; i++) 
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}