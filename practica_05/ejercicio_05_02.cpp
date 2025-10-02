// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Fecha creación: 30/09/2025
// Número de ejercicio: 2
// Problema planteado: Escriba un programa para introducir los siguientes valores en un arreglo nombrado
// voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
// introducido los datos, haga que su programa despliegue los valores.
// 11.95 16.32 12.15
// 8.22 15.98 26.22
// 13.54 6.45 17.59

#include <iostream>
#include <vector>

using namespace std;

void mostrar_arreglo(vector<double> voltios) {
    for (int i = 0; i < voltios.size(); i++) {
        cout << voltios[i] << "\t";
        if ((i + 1) % 3 == 0) cout << endl;
    }
}

int main() {
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    mostrar_arreglo(voltios);
    return 0;
}
