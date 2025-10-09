// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 3
// Problema planteado: 
/*Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces*/

#include <iostream>
#include <vector>
using namespace std;

double calcular_promedio(vector<int> numeros) {
    int suma = 0;
    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }
    return (double)suma / numeros.size();
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
    cout << "el promedio es: " << calcular_promedio(numeros) << endl;
    return 0;
}
