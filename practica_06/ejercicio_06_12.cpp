// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 12
// Problema planteado: 
/*Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según
sean o no palíndromos.
Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha
que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y
tildes.
Ejemplo: Ana lleva al oso la avellana.*/

#include <iostream>
#include <string>
using namespace std;

int contar_letra(string texto, char letra) {
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) {
        if (tolower(texto[i]) == tolower(letra)) contador++;
    }
    return contador;
}

int main() {
    string texto;
    char letra;
    cout << "ingrese una palabra o frase: ";
    getline(cin, texto);
    cout << "ingrese una letra a buscar: ";
    cin >> letra;
    cout << "la letra aparece " << contar_letra(texto, letra) << " veces" << endl;
    return 0;
}
