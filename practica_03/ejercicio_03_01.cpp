// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void es_par_impar(int numero) 
{
    if (numero % 2 == 0)
        cout << numero << " es par" << endl;
    else
        cout << numero << " es impar" << endl;
}

int main() 
{
    int n;
    cout << "ingrese un número";
    cin >> n;
    es_par_impar(n);
    return 0;
}