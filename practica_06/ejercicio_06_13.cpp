// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 13
// Problema planteado: 
/*  Crea una función que reciba un String de cualquier tipo y se encargue de poner en
mayúscula la primera letra de cada palabra.
- No se pueden utilizar operaciones del lenguaje que lo resuelvan directamente.*/

#include <iostream>
#include <string>
using namespace std;

string unir_cadenas(string texto1, string texto2) {
    return texto1 + " " + texto2;
}

int main() {
    string texto1, texto2;
    cout << "ingrese primera palabra o frase: ";
    getline(cin, texto1);
    cout << "ingrese segunda palabra o frase: ";
    getline(cin, texto2);
    cout << "resultado: " << unir_cadenas(texto1, texto2) << endl;
    return 0;
}
