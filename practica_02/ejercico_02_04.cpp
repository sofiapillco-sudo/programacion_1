// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 17/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int p = rand() % (51);
    
    int intentos = 1, prueba = -1;
    int minimo = 0, maximo = 50;
    
    while(prueba != p && intentos <= 5)
    {
        cout << "estoy pensando en un numero entre" << minimo << " y " << maximo << endl;
        cout << "intento" << intentos << ": " << endl;
        
        cin >> prueba;
        
        if(prueba == p)
        {
            cout << "felicidades, ganaste" << endl;
        } else if (prueba < p)
        {
            minimo = prueba;
            cout << "numero equivocado" << endl;
        } 
        else if (prueba > p)
        {
            maximo = prueba;
            cout << "numero equivocado" << endl;
        }
        
        intentos++;
    }
    
    if(prueba != p)
    {
        cout << "perdiste el juego" << endl;
    }
    

    return 0;

}
