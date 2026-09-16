/*
 * Ejercicio 66. K-esimo mayor distinto
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar el K-esimo mayor valor distinto del
 * arreglo (K empieza en 1).
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=9; K=3; 8 3 8 5 10 5 7 10 2
 * Salida esperada:
 *   Ejemplo: 3.er mayor distinto = 7
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    int v[MAX_N];
    int distintos[MAX_N];
    int totalDistintos = 0;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        bool yaExiste = false;
        for (int j = 0; j < totalDistintos; j++) {
            if (distintos[j] == v[i]) { yaExiste = true; break; }
        }
        if (!yaExiste) distintos[totalDistintos++] = v[i];
    }

    // Ordenar los valores distintos de forma descendente (insercion).
    for (int i = 1; i < totalDistintos; i++) {
        int clave = distintos[i];
        int j = i - 1;
        while (j >= 0 && distintos[j] < clave) {
            distintos[j + 1] = distintos[j];
            j--;
        }
        distintos[j + 1] = clave;
    }

    cout << k << ".er mayor distinto = " << distintos[k - 1] << endl;

    return 0;
}
