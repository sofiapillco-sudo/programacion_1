// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>

using namespace std;

int encontrar_max(int numero1, int numero2) {
    if (numero1 > numero2) return numero1;
    else return numero2;
}

int main() {
    int a, b;
    cout << "ingrese dos numeros";
    cin >> a >> b;
    cout << "el mayor es" << encontrar_max(a, b) << endl;
    return 0;
}
