// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 22

#include <iostream>

using namespace std;

int main() 
{
    int a, b;
    cout << "ingrese el primer numero";
    cin >> a;
    cout << "ingrese el segundo numero";
    cin >> b;

    if (a % b == 0)
        cout << a << "es multiplo de" << b << endl;
    else if (b % a == 0)
        cout << b << "es multiplo de" << a << endl;
    else
        cout << "ninguno es multiplo del otro" << endl;

    return 0;
}