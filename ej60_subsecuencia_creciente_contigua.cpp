/*
 * Ejercicio 60. Subsecuencia creciente mas larga contigua
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Encontrar la mayor cantidad de elementos consecutivos
 * estrictamente crecientes y reportar su tramo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; 2 4 6 1 3 5 7 0 2
 * Salida esperada:
 *   Ejemplo: Longitud = 4; Tramo: 1 3 5 7
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

    int mejorInicio = 0, mejorLongitud = 1;
    int inicioActual = 0, longitudActual = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            longitudActual++;
        } else {
            inicioActual = i;
            longitudActual = 1;
        }
        if (longitudActual > mejorLongitud) {
            mejorLongitud = longitudActual;
            mejorInicio = inicioActual;
        }
    }

    cout << "Longitud = " << mejorLongitud << "; Tramo:";
    for (int i = mejorInicio; i < mejorInicio + mejorLongitud; i++) {
        cout << " " << v[i];
    }
    cout << endl;

    return 0;
}
