// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main() {
    float centigrados, kelvin;

    cout << " ingrese la temperatura en grados centigrados";
    cin >> centigrados;

    kelvin = centigrados + 273.15; // ponemos la frmula de conversión

    cout << "la temperatura en kelvin es:" << kelvin << endl;

    return 0;
}