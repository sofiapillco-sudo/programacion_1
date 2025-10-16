// Materia: Programación I, Paralelo 3
// Autor: Sofia Pillco
// Fecha creación: 14/10/2024
// Número de ejercicio: 1

#include <iostream>
#include <vector>
using namespace std;

void leer_matriz(vector<vector<int>>& matriz, int n) {
    matriz.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];
}

void mostrar_matriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }
}

void intercambiar_filas(vector<vector<int>>& matriz) {
    int n = matriz.size();
    for (int j = 0; j < n; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matriz;
    leer_matriz(matriz, n);
    intercambiar_filas(matriz);
    mostrar_matriz(matriz);
    return 0;
}
