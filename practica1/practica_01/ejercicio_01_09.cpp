// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

int main() 
{
    int edad;
    cout << "ingrese su edad";
    cin >> edad;

    if (edad <= 11) cout << "nino";
    else if (edad <= 18) cout << "adolescente";
    else if (edad < 60) cout << "mayor de edad";
    else cout << "adulto mayor";

    return 0;
}