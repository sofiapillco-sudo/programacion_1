// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 6
// Problema planteado: 
/*. Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus
estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0
y 100. Luego debe calcular el porcentaje de estudiantes en cada rango:
• 0-59 (Reprobado)
• 60-79 (Regular)
• 80-89 (Bueno)
• 90-100 (Excelente)*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> invertir_vector(vector<int> numeros) {
    vector<int> invertido(numeros.size());
    for (int i = 0; i < numeros.size(); i++) {
        invertido[i] = numeros[numeros.size() - 1 - i];
    }
    return invertido;
}

void mostrar_vector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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
    vector<int> invertido = invertir_vector(numeros);
    mostrar_vector(invertido);
    return 0;
}
