// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 4
// Problema planteado: 
/*Crea un programa que permita al usuario ingresar N números en un vector y luego rota
el vector k posiciones a la derecha. Muestra el vector después de la rotación.*/

#include <iostream>
#include <vector>
using namespace std;

int contar_pares(vector<int> numeros) {
    int contador = 0;
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] % 2 == 0) contador++;
    }
    return contador;
}

int main() {
    int n;
    cout << "ingrese cantidad de numeros: ";
    cin >> n;
    vector<int> numeros(n);
    for (int i = 0; i < n; i++) {
        cout << "ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    int pares = contar_pares(numeros);
    cout << "pares: " << pares << endl;
    cout << "impares: " << n - pares << endl;
    return 0;
}
