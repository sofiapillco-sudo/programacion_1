// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main() 
{
    float radio, volumen;


    cout << "ingrese el radio de la esfera";
    cin >> radio;


    float pi = 3.1416; // le doy el valor de pi
    volumen = (4.0 / 3.0) * pi * (radio * radio * radio);


    cout << "el volumen de la esfera es:" << volumen << endl;

    return 0;
}