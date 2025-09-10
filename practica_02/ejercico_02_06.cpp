// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 6


#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int n)
{
    if(n <= 1)
    {
        return false;
    }
    
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    srand(time(NULL));
    
    int n;
    
    cout << "ingrese un numero" << endl;
    cin >> n;
    
    int primos = 0, aleatorio;
    
    for(int i = 0; i < n; i++)
    {
        aleatorio = rand() % (10001) + 1;
        bool p = esPrimo(aleatorio);
        if(p)
        {
            cout << aleatorio << "es primo" << endl;
            primos++;
        } else {
            cout << aleatorio << endl;
        }
    }
    
    cout << "se han generado " << primos << "numeros primos" << endl;
    return 0;
}