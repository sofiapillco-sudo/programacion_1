// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int main() 
{
    int nota;
    cout << "ingrese la nota del estudiante del o al 100";
    cin >> nota;

    if (nota >= 51) 
    {
        if (nota < 60) cout << "aprobado calificacion = C";
        else if (nota < 70) cout << "aprobado calificacion = C+";
        else if (nota < 80) cout << "aprobado calificacion = B";
        else if (nota < 90) cout << "aprobado calificacion = B+";
        else if (nota < 95) cout << "aprobado calificacion = A";
        else if (nota == 100) cout <<"aprobado calificacion = A+";
    } else
        cout << "reprobado";

    return 0;
}