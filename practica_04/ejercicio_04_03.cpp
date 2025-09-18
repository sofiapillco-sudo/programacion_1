// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;


void modificar_valores(int valor, int &referencia) 
{
    valor = valor * 2;        
    referencia = referencia + 10;                 // modifica directamente la variable original
    cout << "dentro de la funcion valor por valor: " << valor << endl;
}

int main() 
{
    int a, b;

    cout << "ingrese un numero para pasar por valor";
    cin >> a;

    cout << "ingrese un numero para pasar por referencia";
    cin >> b;

    cout << "\nantes de la funcion: a = " << a << " | b = " << b << endl;

    modificar_valores(a, b);

    cout << "\ndespues de la funcion: a = " << a 
         << " no cambio, paso por valor" << endl;
    cout << "Despues de la funcion: b = " << b 
         << " cambio, paso por referencia" << endl;

    return 0;
}