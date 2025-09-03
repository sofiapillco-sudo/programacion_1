// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "ingrese un numero entero";
    cin >> numero;

    if (numero > 0) 
    {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) 
    {
        cout << "El numero es negativo." << endl;
    } else 
    {
        cout << "El numero es cero." << endl;
    }

    return 0;
}