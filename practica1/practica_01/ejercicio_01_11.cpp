// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

int main() 
{
    int mes;
    cout << "ingrese un numero de 1 al 12";
    cin >> mes;

    switch (mes) 
    {
        case 1: cout << "enero"; 
             break;
        case 2: cout << "febrero";
            break;
        case 3: cout << "marzo"; 
            break;
        case 4: cout << "abril"; 
            break;
        case 5: cout << "mayo"; 
            break;
        case 6: cout << "junio"; 
            break;
        case 7: cout << "julio"; 
            break;
        case 8: cout << "agosto"; 
            break;
        case 9: cout << "septiembre"; 
            break;
        case 10: cout << "octubre"; 
            break;
        case 11: cout << "noviembre"; 
            break;
        case 12: cout << "diciembre"; 
            break;
        default: cout << "mes invalido";
    }

    return 0;
}