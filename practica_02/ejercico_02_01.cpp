// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    
    int numero, dado, pares = 0;
    cout << "ingrese cantidad de lanzamientos";
    cin >> numero;
    
    for(int i = 0; i < n; i++) 
    {
        dado = 1 + rand() % 6;
        cout << "lanzamiento " << i+1 << dado << endl;
        if(dado % 2 == 0) 
        {
            pares++;
        }
    }
    
    cout << "frecuencia de caras pares" << pares << endl;
    return 0;
}