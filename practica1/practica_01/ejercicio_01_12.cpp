// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 12

#include <iostream>

using namespace std;

int main() 
{
    int numero;
    cout << "ingrese un numero entre 1 y 5";
    cin >> numero;

    while (numero < 1 || numero > 5) 
    {
        cout << "numero invalido, intente de nuevo:";
        cin >> numero;
    }

    cout << "numero valido:" << numero;
    return 0;
}