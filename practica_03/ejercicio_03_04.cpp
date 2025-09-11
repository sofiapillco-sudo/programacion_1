// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

double calcular_IMC(double peso, double altura) 
{
    return peso / (altura * altura);
}

int main() 
{
    double peso, altura;
    cout << "ingrese su peso en kg";
    cin >> peso;
    cout << "ingrese su altura en metros";
    cin >> altura;

    cout << "su IMC es" << calcular_IMC(peso, altura) << endl;
    return 0;
}