/*
 * Ejercicio 55. Fusionar dos vectores ordenados
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Dados dos arreglos ya ordenados ascendentemente,
 * fusionarlos en uno tambien ordenado, sin ordenar nuevamente el
 * resultado.
 *
 * Entrada: NA, los NA valores de A, NB, los NB valores de B.
 *   Ejemplo: A: 1 4 7 10; B: 2 3 8 12
 * Salida esperada:
 *   Ejemplo: 1 2 3 4 7 8 10 12
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int na, nb;
    int a[MAX_N], b[MAX_N];
    int resultado[2 * MAX_N];

    cin >> na;
    for (int i = 0; i < na; i++) cin >> a[i];
    cin >> nb;
    for (int i = 0; i < nb; i++) cin >> b[i];

    int i = 0, j = 0, k = 0;
    while (i < na && j < nb) {
        if (a[i] <= b[j]) {
            resultado[k++] = a[i++];
        } else {
            resultado[k++] = b[j++];
        }
    }
    while (i < na) resultado[k++] = a[i++];
    while (j < nb) resultado[k++] = b[j++];

    for (int idx = 0; idx < k; idx++) {
        cout << resultado[idx];
        if (idx < k - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
