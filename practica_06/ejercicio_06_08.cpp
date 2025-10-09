// Materia: Programación I, Paralelo 1
// Autor: Sofia Pillco Vera
// Fecha creación: 08/10/2024
// Número de ejercicio: 8
// Problema planteado: 
/* Escribe un programa que valide si una cadena ingresada cumple con el formato básico
de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@' y al
menos un punto '.' después del '@').
• // Entrada: "usuario@example.com"
• // Salida: "Correo electrónico válido"
• // Entrada: "usuarioexample.com"
• // Salida: "Correo electrónico inválido"*/

#include <iostream>
#include <string>
using namespace std;

void mostrar_cadena(string texto) {
    for (int i = 0; i < texto.size(); i++) {
        cout << texto[i] << " ";
    }
    cout << endl;
}

int main() {
    string texto;
    cout << "ingrese una palabra o frase: ";
    getline(cin, texto);
    mostrar_cadena(texto);
    return 0;
}
