// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 11
// Problema planteado: 
/*Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas*/

#include <iostream>
#include <string>
using namespace std;

string invertir_cadena(string texto) {
    string invertida = "";
    for (int i = texto.size() - 1; i >= 0; i--) {
        invertida += texto[i];
    }
    return invertida;
}

int main() {
    string texto;
    cout << "ingrese una palabra o frase: ";
    getline(cin, texto);
    cout << "cadena invertida: " << invertir_cadena(texto) << endl;
    return 0;
}
