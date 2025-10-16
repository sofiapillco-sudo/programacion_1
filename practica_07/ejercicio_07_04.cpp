// Materia: Programación I, Paralelo 3
// Autor: Sofia Pillco
// Fecha creación: 14/10/2024
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> crear_patron(int n) {
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = 1 + 2 * i + j;
    return matriz;
}

void mostrar_matriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    auto matriz = crear_patron(n);
    mostrar_matriz(matriz);
    return 0;
}
