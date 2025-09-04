// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 21

#include <iostream>

using namespace std;

int main() 
{
    int a, b, resultado = 0;
    cout << "ingrese el primer numero";
    cin >> a;
    cout << "ingrese el segundo numero";
    cin >> b;

    for (int i = 0; i < b; i++) 
    {
        resultado += a;
    }

    cout << "el resultado de la multiplicacion es:" << resultado << endl;
    return 0;
}