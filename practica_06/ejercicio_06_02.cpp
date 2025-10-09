// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 2
// Problema planteado: 
/*. Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y
otro contiene los nombres de estos minerales, para obtener:
• Buscar por nombre de mineral y desplegar la producción
• Ordenar del mayor al menor (producción) y mostrar:
Mineral Produccion ™
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412*/

#include <iostream>
#include <vector>
using namespace std;

int sumar_vector(vector<int> numeros) {
    int suma = 0;
    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }
    return suma;
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
    cout << "la suma total es: " << sumar_vector(numeros) << endl;
    return 0;
}

