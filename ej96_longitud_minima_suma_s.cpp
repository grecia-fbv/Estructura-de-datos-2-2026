/*
 * Ejercicio 96. Longitud minima con suma al menos S
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Con valores positivos, hallar la longitud minima de
 * un subarreglo contiguo cuya suma sea >= S.
 *
 * Entrada: N, S y luego los N valores.
 *   Ejemplo: N=6; S=7; 2 3 1 2 4 3
 * Salida esperada:
 *   Ejemplo: Longitud minima = 2
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    long long s;
    int v[MAX_N];

    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> v[i];

    int mejorLongitud = n + 1;
    int izquierda = 0;
    long long sumaVentana = 0;

    for (int derecha = 0; derecha < n; derecha++) {
        sumaVentana += v[derecha];

        while (sumaVentana >= s) {
            int longitud = derecha - izquierda + 1;
            if (longitud < mejorLongitud) mejorLongitud = longitud;
            sumaVentana -= v[izquierda];
            izquierda++;
        }
    }

    if (mejorLongitud == n + 1) {
        cout << "No existe subarreglo con esa suma" << endl;
    } else {
        cout << "Longitud minima = " << mejorLongitud << endl;
    }

    return 0;
}
