// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

bool es_bisiesto(int anio) 
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int dias_mes(int anio, int mes) 
{
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && es_bisiesto(anio))
        return 29;
    return dias[mes-1];
}

int main() 
{
    int anio, mes;
    cout << "ingrese año";
    cin >> anio;
    cout << "ingrese mes (1-12)";
    cin >> mes;
    cout << "ese mes tiene" << dias_mes(anio, mes) << " días" << endl;
    return 0;
}