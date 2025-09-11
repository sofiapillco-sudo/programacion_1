// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

double celsius_a_fahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main() 
{
    double c;
    cout << "ingrese temperatura en celsius";
    cin >> c;
    cout << "temperatura en fahrenheit" << celsius_a_fahrenheit(c) << endl;
    return 0;
}