// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>

using namespace std;

bool es_par(int numero) {
    return numero % 2 == 0;
}

int main() {
    int n;
    cout << "ingrese un numero";
    cin >> n;
    if (es_par(n)) {
        cout << "es par" << endl;
    } else {
        cout << "es impar" << endl;
    }
    return 0;
}
