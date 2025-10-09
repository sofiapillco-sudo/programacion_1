// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 14
// Problema planteado: 
/* Realizar el ejercicio de este video (Contando cada vocal en una frase):
https://www.youtube.com/watch?v=CuQzFZGqTP8*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> contarVocales (string texto){
    int n = texto.length();
    vector<int> vocales(5, 0);
    
    for(int i = 0; i < n; i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            vocales[0]++;
        } else if (texto[i] == 'e' || texto[i] == 'E'){
            vocales[1]++;
        } else if (texto[i] == 'i' || texto[i] == 'I'){
            vocales[2]++;
        } else if (texto[i] == 'o' || texto[i] == 'O'){
            vocales[3]++;
        } else if (texto[i] == 'u' || texto[i] == 'U'){
            vocales[4]++;
        } 
    }
    
    return vocales;
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    vector<int> vocales = contarVocales(texto);
    
    cout << "a: " << vocales[0] << endl;
    cout << "e: " << vocales[1] << endl;
    cout << "i: " << vocales[2] << endl;
    cout << "o: " << vocales[3] << endl;
    cout << "u: " << vocales[4] << endl;
     
    return 0;
}