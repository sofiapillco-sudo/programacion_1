// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

double calcularTarifa (double km_recorridos)
{
    double costo = 10.0;
    costo += (km_recorridos * 2.0);
    if(km_recorridos > 10.0)
    {
        costo -= (costo * 0.1);
    }
    
    return costo;
}

int main()
{
    double recorrido;
    cout << "ingrese el recorrido del viaje en taxi" << endl;
    cin >> recorrido;
    
    double costo = calcular_tarifa(recorrido);
    
    cout << "el costo del viaje es de: " << costo << endl;
    
    return 0;
}