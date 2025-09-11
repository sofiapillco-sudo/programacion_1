// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void datos_alumnos(int n) 
{
    int suma_edad = 0, suma_altura = 0, mayores = 0, altos = 0;
    srand(time(0));

    for (int i = 0; i < n; i++) 
    {
        int edad = 1 + rand() % 35;
        int altura = 120 + rand() % 81;
        suma_edad += edad;
        suma_altura += altura;

        if (edad > 18) mayores++;
        if (altura > 175) altos++;
    }

    cout << "edad promedio" << suma_edad / n << endl;
    cout << "altura promedio" << suma_altura / n << endl;
    cout << "alumnos mayores de 18" << mayores << endl;
    cout << "alumnos con altura > 1.75m" << altos << endl;
}

int main() 
{
    int n;
    cout << "ingrese cantidad de alumnos";
    cin >> n;
    datos_alumnos(n);
    return 0;
}