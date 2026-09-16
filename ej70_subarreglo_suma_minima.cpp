/*
 * Ejercicio 70. Subarreglo con suma minima
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar la suma minima de un segmento contiguo y
 * reportar sus indices.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 3 -4 2 -3 -1 7 -5 2
 * Salida esperada:
 *   Ejemplo: Suma minima = -6; Indices = 1..4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int sumaActual = v[0];
    int sumaMinima = v[0];
    int inicioActual = 0;
    int mejorInicio = 0, mejorFin = 0;

    for (int i = 1; i < n; i++) {
        if (sumaActual > 0) {
            sumaActual = v[i];
            inicioActual = i;
        } else {
            sumaActual += v[i];
        }

        if (sumaActual < sumaMinima) {
            sumaMinima = sumaActual;
            mejorInicio = inicioActual;
            mejorFin = i;
        }
    }

    cout << "Suma minima = " << sumaMinima
         << "; Indices = " << mejorInicio << ".." << mejorFin << endl;

    return 0;
}
