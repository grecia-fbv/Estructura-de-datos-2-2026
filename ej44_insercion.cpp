/*
 * Ejercicio 44. Ordenamiento por insercion
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Ordenar N enteros ascendentemente con Insertion Sort.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 12 11 13 5 6 7
 * Salida esperada:
 *   Ejemplo: 5 6 7 11 12 13
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

    for (int i = 1; i < n; i++) {
        int clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = clave;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
