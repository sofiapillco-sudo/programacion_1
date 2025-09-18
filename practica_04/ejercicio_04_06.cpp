// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cmath> // Para usar sqrt()

using namespace std;


int sumar_digitos_no_cero(int numero) 
{
    int suma = 0;
    while (numero > 0) 
    {
        int digito = numero % 10;
        if (digito != 0) 
        {
            suma = suma + digito;
        }
        numero = numero / 10;
    }
    return suma;
}

bool es_primo(int n) 
{
    if (n < 2) 
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int numero;

    cout << "ingrese un numero entero";
    cin >> numero;

    int suma = sumar_digitos_no_cero(numero);

    cout << "la suma de los digitos distintos de cero es: " << suma << endl;

    if (es_primo(suma)) 
    {
        cout << "la suma es un numero primo" << endl;
    } else 
    {
        cout << "la suma NO es un numero primo" << endl;
    }

    return 0;
}