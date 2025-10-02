// Materia: Programación I, Paralelo 4
// Autor: Sofia Pillco
// Fecha creación: 30/09/2025
// Número de ejercicio: 1
// Problema planteado: . Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
//a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
//b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
//c. Una lista de 30 caracteres alfanuméricos.
//d. Una lista de 100 años en número entero (entre 1990 y 2025)
//e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
//f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
//Los datos debes ser generados utilizando numero aleatorios.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double generar_aleatorio(double minimo, double maximo) {
    return minimo + (rand() / (RAND_MAX + 1.0)) * (maximo - minimo);
}

vector<double> generar_voltajes() {
    vector<double> voltajes(100);
    for (int i = 0; i < 100; i++) {
        voltajes[i] = generar_aleatorio(20.0, 220.0);
    }
    return voltajes;
}

vector<double> generar_temperaturas() {
    vector<double> temperaturas(50);
    for (int i = 0; i < 50; i++) {
        temperaturas[i] = generar_aleatorio(0.0, 100.0);
    }
    return temperaturas;
}

vector<char> generar_caracteres() {
    vector<char> caracteres(30);
    string alfanum = "abcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 30; i++) {
        caracteres[i] = alfanum[rand() % alfanum.size()];
    }
    return caracteres;
}

vector<int> generar_anios() {
    vector<int> anios(100);
    for (int i = 0; i < 100; i++) {
        anios[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
    return anios;
}

vector<double> generar_velocidades() {
    vector<double> velocidades(32);
    for (int i = 0; i < 32; i++) {
        velocidades[i] = generar_aleatorio(10.0, 300.0);
    }
    return velocidades;
}

vector<double> generar_distancias() {
    vector<double> distancias(1000);
    for (int i = 0; i < 1000; i++) {
        distancias[i] = generar_aleatorio(1.0, 1000.0);
    }
    return distancias;
}

int main() {
    srand(time(0));
    vector<double> voltajes = generar_voltajes();
    vector<double> temperaturas = generar_temperaturas();
    vector<char> caracteres = generar_caracteres();
    vector<int> anios = generar_anios();
    vector<double> velocidades = generar_velocidades();
    vector<double> distancias = generar_distancias();
    cout << "listas generadas" << endl;
    return 0;
}
