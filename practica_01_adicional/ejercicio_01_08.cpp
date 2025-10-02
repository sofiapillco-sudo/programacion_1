// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco 
// Carnet:7346371
// Carrera del estudiante: ingenieria Industrial
// Fecha creación: 30/08/2025

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool es_primo(int numero) {
    if (numero < 2) return false;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

void generar_numeros(int n) {
    int suma = 0;
    cout << "numeros generados" << endl;
    for (int i = 0; i < n; i++) {
        int numero = 1 + rand() % 1000;
        suma += numero;
        cout << numero;
        if (es_primo(numero)) cout << "*";
        cout << " ";
    }
    cout << endl;
    cout << "suma total" << suma << endl;
    cout << "promedio" << (double)suma / n << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "ingrese cantidad de numeros a generar";
    cin >> n;
    generar_numeros(n);
    return 0;
}
