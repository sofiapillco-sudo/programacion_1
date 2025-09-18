// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 2


#include <iostream>
#include <cmath>

using namespace std;

double calcular_volumen (double radio, double altura = 10) 
{
    double PI = 3.1416;
    return PI * pow(radio, 2) * altura; // pow eleva radio al cuadrado
}

int main() 
{
    double r, h;

    cout << "ingrese el radio del cilindro";
    cin >> r;

    cout << "ingrese la altura (si desea usar 10 ingrese 0)";
    cin >> h;

    double volumen;

    // si la altura es 0, se usa el valor por defecto
    if (h == 0) {
        volumen = calcular_volumen(r);
    } else {
        volumen = calcular_volumen(r, h);
    }

    cout << "el volumen del cilindro es" << volumen << endl;

    return 0;
}

