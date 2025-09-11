// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

bool esCapicua(int numero) 
{
    int original = numero, invertido = 0;
    while (numero > 0) 
    {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    return original == invertido;
}

int main() 
{
    int n;
    cout << "ingrese un número: ";
    cin >> n;
    if (es_capicua(n))
        cout << n << " es capicua" << endl;
    else
        cout << n << " no es capicua" << endl;
    return 0;
}