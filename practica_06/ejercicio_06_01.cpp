// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 1
// Problema planteado: 
/*Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
de este arreglo determine la desviación típica.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> llenar_vector(int cantidad) {
    vector<int> numeros(cantidad);
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = rand() % 100; // nmeros entre 0 y 99
    }
    return numeros;
}

void mostrar_vector(vector<int> numeros) {
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "ingrese cantidad de numeros: ";
    cin >> n;
    vector<int> numeros = llenar_vector(n);
    mostrar_vector(numeros);
    return 0;
}
