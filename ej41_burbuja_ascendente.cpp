/*
 * Ejercicio 41. Ordenamiento burbuja ascendente
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Ordenar N enteros de menor a mayor implementando
 * Bubble Sort manualmente.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 9 3 7 1 8 2 5
 * Salida esperada:
 *   Ejemplo: 1 2 3 5 7 8 9
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
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
