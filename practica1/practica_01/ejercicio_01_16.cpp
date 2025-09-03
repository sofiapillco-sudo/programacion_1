// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 16

#include <iostream>

using namespace std;

int main() 
{
    int numero, divisores = 0;
    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero <= 1)
        cout << "no es primo";
    else 
        for (int i = 1; i <= numero; i++)
            if (numero % i == 0) divisores++;

        if (divisores == 2) cout << "es primo";
        else cout << "no es primo";
    

    return 0;
}