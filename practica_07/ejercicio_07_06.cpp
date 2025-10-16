// Materia: Programación I, Paralelo 3
// Autor: Sofia Pillco
// Fecha creación: 14/10/2024
// Número de ejercicio: 6

#include <iostream>
#include <vector>
using namespace std;

void leer_matriz(vector<vector<int>>& matriz, int filas, int columnas) {
    matriz.assign(filas, vector<int>(columnas));
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> matriz[i][j];
}

vector<vector<int>> trasponer_matriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            transpuesta[j][i] = matriz[i][j];
    return transpuesta;
}

void mostrar_matriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matriz;
    leer_matriz(matriz, n, m);
    auto transpuesta = trasponer_matriz(matriz);
    mostrar_matriz(transpuesta);
    return 0;
}
