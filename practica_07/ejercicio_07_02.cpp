// Materia: Programación I, Paralelo 3
// Autor: Sofia Pillco
// Fecha creación: 14/10/2024
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generar_matriz(vector<vector<int>>& matriz, int n, int a, int b) {
    matriz.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = a + rand() % (b - a + 1);
}

void mostrar_matriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }
}

int suma_ultima_columna(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += matriz[i][n - 1];
    return suma;
}

long long producto_ultima_fila(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    long long producto = 1;
    for (int j = 0; j < n; j++)
        producto *= matriz[n - 1][j];
    return producto;
}

int mayor_elemento(const vector<vector<int>>& matriz, int& fila, int& columna) {
    int mayor = matriz[0][0];
    fila = 0;
    columna = 0;
    for (int i = 0; i < matriz.size(); i++)
        for (int j = 0; j < matriz[i].size(); j++)
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
    return mayor;
}

double desviacion_estandar(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    double suma = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            suma += matriz[i][j];
    double media = suma / (n * n);
    double varianza = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            varianza += pow(matriz[i][j] - media, 2);
    varianza /= (n * n);
    return sqrt(varianza);
}

int main() {
    srand(time(0));
    int n, a, b;
    cin >> n >> a >> b;
    vector<vector<int>> matriz;
    generar_matriz(matriz, n, a, b);
    mostrar_matriz(matriz);
    cout << suma_ultima_columna(matriz) << endl;
    cout << producto_ultima_fila(matriz) << endl;
    int f, c;
    cout << mayor_elemento(matriz, f, c) << endl;
    cout << f << " " << c << endl;
    cout << desviacion_estandar(matriz) << endl;
    return 0;
}
