// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cmath>

using namespace std;

double convertir_celsius_a_fahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}


double mayor_temperatura(double t1, double t2) 
{
    if (t1 > t2) 
    {
        return t1;
    } else 
    {
        return t2;
    }
}

int main() 
{
    double temp1, temp2;

    cout << "ingrese la primera temperatura en celsius";
    cin >> temp1;

    cout << "ingrese la segunda temperatura en celsius";
    cin >> temp2;

    double f1 = convertir_celsius_a_fahrenheit(temp1);
    double f2 = convertir_celsius_a_fahrenheit(temp2);

    cout << "\ntemperatura 1 en Fahrenheit " << f1 << endl;
    cout << "temperatura 2 en Fahrenheit " << f2 << endl;

    cout << "la mayor temperatura en Celsius es" << mayor_temperatura(temp1, temp2) << endl;

    return 0;
}