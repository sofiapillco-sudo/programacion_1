// Materia: Programación I, Paralelo 4
// Autor: Sofia Paola Pillco Vera
// Carnet: 7346371 L.P.
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 08/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    
    int n;
    cout << "ingrese cantidad de niños";
    cin >> n;
    
    int n1 = 0, n2 = 0, n3 = 0, total = 0;
    
    while(total < n) 
    {
        int edad = 1 + rand() % 3;
        if(total + 1 <= n) 
        {
            if(edad == 1) n1++;
            else if(edad == 2) n2++;
            else n3++;
            total++;
        }
    }
    
    int consumo = (n1 * 6) + (n2 * 3) + (n3 * 2);
    
    cout << "niños de 1 año" << n1 << endl;
    cout << "niños de 2 años" << n2 << endl;
    cout << "niños de 3 años" << n3 << endl;
    cout << "consumo total de panales" << consumo << endl;
    
    return 0;
}