/*
 * Ejercicio 65. K-esimo menor sin std::sort
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar el K-esimo menor elemento (K empieza en 1).
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=8; K=3; 12 3 5 7 19 1 8 4
 * Salida esperada:
 *   Ejemplo: 3.er menor = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * std::sort.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    int v[MAX_N];

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];

    // Seleccion parcial: en cada paso se busca el menor del resto y
    // se coloca en su posicion, hasta llegar a la posicion K-1.
    for (int i = 0; i < k; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[indiceMinimo]) indiceMinimo = j;
        }
        int temp = v[i]; v[i] = v[indiceMinimo]; v[indiceMinimo] = temp;
    }

    cout << k << ".er menor = " << v[k - 1] << endl;

    return 0;
}
