// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int main() 
{
    char letra;
    cout << "ingrese una letra";
    cin >> letra;

    if (letra >= 'a' && letra <= 'z')
        if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
            cout << "es una vocal";
        else
            cout << "es una consonante";
    else
        cout << "es un caracter especial";

    return 0;
}