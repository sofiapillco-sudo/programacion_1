// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lanzar_moneda(int n) {
    int caras = 0, cruces = 0;
    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2;
        if (resultado == 0) caras++;
        else cruces++;
    }
    cout << "porcentaje de caras" << (caras * 100.0 / n) << "%" << endl;
    cout << "porcentaje de cruces" << (cruces * 100.0 / n) << "%" << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "ingrese numero de lanzamientos";
    cin >> n;
    lanzar_moneda(n);
    return 0;
}
