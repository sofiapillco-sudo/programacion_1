// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 13

#include <iostream>

using namespace std;

int main()
{
    int numero, suma = 0;
    cout << "ingrese un numero";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
        suma = suma + i;

    cout << "la suma de 1 hasta " << numero << " es: " << suma;
    return 0;
}