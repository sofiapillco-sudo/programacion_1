// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial 
// Fecha creación: 26/08/2025
// Número de ejercicio: 3


#include <iostream>

using namespace std;

int main() 
{
    
    float base, altura, area;

    cout << "ingrese la base del triangulo ";
    cin >> base;
    cout << "ingrese la altura del triangulo";
    cin >> altura;


    area = (base * altura) / 2;


    cout << "el area del triangulo es: " << area << endl;

    return 0;
}