// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 18

#include <iostream>

using namespace std;

int main() 
{
    int contador = 0, numero = 2;

    while (contador < 100) 
    {
        int divisores = 0;
        for (int i = 1; i <= numero; i++)
            if (numero % i == 0) divisores++;

        if (divisores == 2) 
        {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    return 0;
}