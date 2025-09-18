// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    
    int numero, caras = 0, cruces = 0;
    cout << "ingrese cantidad de lanzamientos";
    cin >> numero;
    
    for(int i = 0; i < numero; i++) 
    {
        int moneda = rand() % 2;
        if(moneda == 0) 
        {
            caras++;
        } else 
        {
            cruces++;
        }
    }
    
    cout << "porcentaje de caras" << (caras * 100.0 / numero) << "%" << endl;
    cout << "porcentaje de cruces" << (cruces * 100.0 / numero) << "%" << endl;
    
    return 0;

}

