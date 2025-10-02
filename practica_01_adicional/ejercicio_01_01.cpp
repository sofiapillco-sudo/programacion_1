// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>

using namespace std;

void leer_calificaciones(double &promedio, bool &todas_mayores_80) {
    double suma = 0;
    todas_mayores_80 = true;
    for (int i = 1; i <= 5; i++) {
        double nota;
        cout << "ingrese calificacion " << i << ": ";
        cin >> nota;
        suma += nota;
        if (nota < 80) todas_mayores_80 = false;
    }
    promedio = suma / 5.0;
}

int main() {
    double promedio;
    bool todas_mayores_80;
    leer_calificaciones(promedio, todas_mayores_80);
    if (promedio >= 85 && todas_mayores_80) {
        cout << "esta en la lista de honor" << endl;
    } else {
        cout << "no esta en la lista de honor" << endl;
    }
    return 0;
}
