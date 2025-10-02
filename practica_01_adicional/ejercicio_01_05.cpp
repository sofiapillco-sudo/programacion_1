// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>

using namespace std;

double parte_fraccionaria(double numero) {
    int entero = (int)numero;
    return numero - entero;
}

int main() {
    double x;
    cout << "ingrese un numero";
    cin >> x;
    cout << "parte fraccionaria" << parte_fraccionaria(x) << endl;
    return 0;
}
