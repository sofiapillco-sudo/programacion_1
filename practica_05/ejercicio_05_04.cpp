// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Fecha creación: 30/09/2025
// Número de ejercicio: 4
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro
//vector

#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresar_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

vector<int> multiplicar_vectores(vector<int> v1, vector<int> v2) {
    vector<int> v3(v1.size());
    for (int i = 0; i < v1.size(); i++) {
        v3[i] = v1[i] * v2[i];
    }
    return v3;
}

void mostrar_vector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "ingrese dimension: ";
    cin >> n;
    vector<int> v1 = ingresar_vector(n);
    vector<int> v2 = ingresar_vector(n);
    vector<int> v3 = multiplicar_vectores(v1, v2);
    mostrar_vector(v3);
    return 0;
}
