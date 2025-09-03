// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 15

#include <iostream>

using namespace std;

int main() 
{
    int cantidad_notas;
    float nota, suma = 0, promedio;

    cout << "ingrese la cantidad de notas";
    cin >> cantidad_notas;

    for (int i = 1; i <= ccantidad_notas; i++) 
    {
        cout << "ingrese la nota " << i << ": ";
        cin >> nota;
        suma = suma + nota;
    }

    promedio = suma / cantidad_notas;
    cout << "el promedio general es: " << promedio;

    return 0;
}