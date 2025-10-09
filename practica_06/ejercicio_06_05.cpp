// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 5
// Problema planteado: 
/*Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren
saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores
de nombres y muestre los clientes repetidos.*/

#include <iostream>
#include <vector>
using namespace std;

int encontrar_mayor(vector<int> numeros) {
    int mayor = numeros[0];
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
    }
    return mayor;
}

int encontrar_menor(vector<int> numeros) {
    int menor = numeros[0];
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] < menor) menor = numeros[i];
    }
    return menor;
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
    cout << "el mayor es: " << encontrar_mayor(numeros) << endl;
    cout << "el menor es: " << encontrar_menor(numeros) << endl;
    return 0;
}
