// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

double tiempo_trabajado(int minutos)
{
    double horas = minutos / 60.0;
    
    return horas - 8.0;
}

void mostrar_resultado () 
{
    cout << "ingrese la cantidad de minutos trabajados" << endl;
    int minutos;
    cin >> minutos;
    
    double horas = tiempo_trabajado(minutos);
    
    if(horas == 0){
        cout << "ha trabajado 8 horas exactas" << endl;
    } else if (horas < 0)
    {
        cout << "ha trabajado menos horas" << endl;
        cout << "le debe a la empresa: " << (-1) * horas << " horas de trabajo" << endl;
    } else if (horas > 0)
    {
        cout << "ha trabajado horas extra" << endl;
        cout << "la empresa le debe pagar " << horas << " horas extra" << endl;
    }
}

int main()
{
    
    mostrar_resultado();
    
    return 0;
}