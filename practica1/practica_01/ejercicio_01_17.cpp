// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 17

#include <iostream>

using namespace std;

int main() 
{
    int a, b, suma_A = 0, suma_B = 0;

    cout << "ingrese el primer numero";
    cin >> a;
    cout << "ingrese el segundo numero";
    cin >> b;

    //para a
    for (int i = 1; i < a; i++) 
    {
        if (a % i == 0) 
        suma_A += i;
    }

    //para b
    for (int i = 1; i < b; i++) 
    {
        if (b % i == 0) 
        suma_B += i;
    }

    if (suma_A == b && suma_B == a)
        cout << a << " y " << b << "son numeros amigos" << endl;
    else
        cout << a << " y " << b << "no son numeros amigos" << endl;

    return 0;
}


