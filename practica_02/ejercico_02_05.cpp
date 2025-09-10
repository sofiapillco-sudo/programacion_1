// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    
    int n;
    cout << "ingrese cantidad de numeros";
    cin >> n;
    
    int num;
    int suma = 0;
    int mayor, menor;
    
    //generamos el primer número
    numero = 1 + rand() % 1000;
    suma = numero;
    mayor = numero;
    menor = numero;
    cout << numero << " ";
    
    for(int i = 1; i < n; i++) 
    {
        numero = 1 + rand() % 1000;
        cout << numero << " ";
        suma += numero;
        if(numero > mayor) mayor = numero;
        if(numero < menor) menor = numero;
    }
    
    cout << endl << "sumatoria" << suma << endl;
    cout << "promedio" << (suma * 1.0 / n) << endl;
    cout << "mayor" << mayor << endl;
    cout << "nenor" << menor << endl;
    
    return 0;
}