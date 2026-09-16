/*
 * Ejercicio 49. Valores mayores que el promedio
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Calcular el promedio y mostrar todos los elementos
 * estrictamente mayores al promedio.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 5 10 15 20 25 30
 * Salida esperada:
 *   Ejemplo: Promedio = 17.5; Mayores: 20 25 30
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int MAX_N = 100;

string formatearDecimal(double x) {
    ostringstream oss;
    oss.precision(6);
    oss << fixed << x;
    string s = oss.str();
    size_t punto = s.find('.');
    if (punto != string::npos) {
        size_t ultimo = s.find_last_not_of('0');
        if (ultimo == punto) ultimo--;
        s = s.substr(0, ultimo + 1);
    }
    return s;
}

int main() {
    int n;
    int v[MAX_N];
    double suma = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        suma += v[i];
    }

    double promedio = suma / n;

    cout << "Promedio = " << formatearDecimal(promedio) << "; Mayores:";
    for (int i = 0; i < n; i++) {
        if (v[i] > promedio) cout << " " << v[i];
    }
    cout << endl;

    return 0;
}
