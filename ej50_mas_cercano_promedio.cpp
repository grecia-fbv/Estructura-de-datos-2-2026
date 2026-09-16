/*
 * Ejercicio 50. Elemento mas cercano al promedio
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Calcular el promedio y hallar el elemento cuya
 * distancia absoluta al promedio sea minima. En empate, escoger el
 * primero.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=5; 1 4 6 10 14
 * Salida esperada:
 *   Ejemplo: Promedio = 7; Mas cercano = 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <cmath>
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

    int masCercano = v[0];
    double menorDistancia = fabs(v[0] - promedio);
    for (int i = 1; i < n; i++) {
        double distancia = fabs(v[i] - promedio);
        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            masCercano = v[i];
        }
    }

    cout << "Promedio = " << formatearDecimal(promedio)
         << "; Mas cercano = " << masCercano << endl;

    return 0;
}
