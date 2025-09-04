// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 23

#include <iostream>

using namespace std;

int main() 
{
    int numero, invertido = 0, cifra;
    cout << "ingrese un numero";
    cin >> numero;

    while (numero > 0) 
    {
        cifra = numero % 10;
        invertido = invertido * 10 + cifra;
        numero = numero / 10;
    }

    cout << "el numero invertido es" << invertido << endl;
    return 0;
}