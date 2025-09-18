// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

double calcular_salario(double horas, double tarifa, double bonificacion) 
{
    double salario_normal;
    double salario_extra = 0;

    if (horas <= 8) 
    {
        salario_normal = horas * tarifa;
    } else {
        salario_normal = 8 * tarifa;
        double horas_extra = horas - 8;
        salario_extra = horas_extra * tarifa * (1 + bonificacion / 100);
    }

    return salario_normal + salario_extra;
}

int main() 
{
    double horas, tarifa, bono;

    cout << "ingrese horas trabajadas";
    cin >> horas;

    cout << "ingrese tarifa por hora";
    cin >> tarifa;

    cout << "ingrese porcentaje de bonificacion para horas extra";
    cin >> bono;

    double salario = calcular_salario(horas, tarifa, bono);

    cout << "el salario total es" << salario << endl;

    return 0;
}