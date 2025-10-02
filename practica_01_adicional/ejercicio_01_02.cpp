// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>

using namespace std;

bool es_primo(int numero) {
    if (numero < 2) return false;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

void promedio_primos() {
    int numero, contador = 0, suma = 0;
    cout << "ingrese numeros (0 o negativo para terminar)" << endl;
    while (true) {
        cin >> numero;
        if (numero <= 0) break;
        if (es_primo(numero)) {
            suma += numero;
            contador++;
        }
    }
    if (contador > 0) {
        cout << "promedio de primos" << (double)suma / contador << endl;
    } else {
        cout << "no se ingresaron numeros primos" << endl;
    }
}

int main() {
    promedio_primos();
    return 0;
}
