// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double promedio_ponderado(int n1, int n2, int n3, int n4)
{
    double nota1 = n1 * 10.0;
    double nota2 = n2 * 20.0;
    double nota3 = n3 * 30.0;
    double nota4 = n4 * 40.0;
    
    double nota = nota1 + nota2 + nota3 + nota4;
    
    double promedio = nota / 100.0;
    
    return promedio;
}


int main()
{
    srand(time(NULL));
    
    int n1 = rand() % (101);
    int n2 = rand() % (101);
    int n3 = rand() % (101);
    int n4 = rand() % (101);
    
    cout << "la nota 1 es de: " << n1 << endl;
    cout << "la nota 2 es de: " << n2 << endl;
    cout << "la nota 3 es de: " << n3 << endl;
    cout << "la nota 4 es de: " << n4 << endl;
    
    double promedio = promedioPonderado(n1, n2, n3, n4);
    
    cout << endl << "el promedio ponderado es de: " << promedio << endl;
    
    return 0;
}