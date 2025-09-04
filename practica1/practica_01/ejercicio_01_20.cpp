// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 03/09/2025
// Número de ejercicio: 20

#include <iostream>

using namespace std;

int main() 
{
    int numero, digitos = 0;
    cout << "ingrese un numero entero";
    cin >> numero;

    if (numero == 0) 
        digitos = 1;
    else 
    {
        while (n != 0) 
        {
            numero = numero / 10;
            digitos++;
        }
    }

    cout << "el numero tiene" << digitos << "digitos" << endl;
    return 0;
}
