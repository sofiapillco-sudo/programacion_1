// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int factorial(int numero) 
{
    int resultado = 1;
    for(int i = 1; i <= numero; i++) 
    {
        resultado *= i;
    }
    return resultado;
}

int main() 
{
    srand(time(NULL));
    
    int num = 1 + rand() % 10;
    cout << "numero generado" << num << endl;
    cout << "factorial" << factorial(num) << endl;
    
    return 0;
}