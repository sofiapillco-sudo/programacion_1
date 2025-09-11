// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

double retirarDinero (double saldo, int cantidad)
{
    if(saldo < cantidad)
    {
        cout << "no tiene saldo suficiente" << endl;
        return 0.0;
    }
    
    if(cantidad % 10 != 0){
        cout << "la cantidad no es valida para retirar" << endl;
        return 0.0;
    }
    
    cout << "el retiro es valido" << endl;
    return saldo - cantidad;
}


int main()
{
    double saldo;
    int cantidad;
    cout << "ingrese el saldo: " << endl;
    cin >> saldo;
    cout << "ingrese la cantidad a retirar" << endl;
    cin >> cantidad;
    
    double nuevoSaldo = retirarDinero(saldo, cantidad);
    
    if(nuevoSaldo == 0)
    {
        cout << "no se realizo la transaccion" << endl;
    } else 
    {
        cout << "su saldo actual es de" << nuevoSaldo << endl;
    }
    return 0;
}