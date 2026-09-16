/*
 * Ejercicio 43. Ordenamiento por seleccion
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Ordenar N enteros ascendentemente con Selection Sort.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 29 10 14 37 13 5
 * Salida esperada:
 *   Ejemplo: 5 10 13 14 29 37
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * std::sort.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[indiceMinimo]) indiceMinimo = j;
        }
        if (indiceMinimo != i) {
            int temp = v[i];
            v[i] = v[indiceMinimo];
            v[indiceMinimo] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
