/*
 * Ejercicio 80. Reordenar segun una permutacion
 * Nivel 4 - Avanzado
 *
 * Enunciado: Dados valores A y un arreglo P de indices, construir
 * B tal que B[i] = A[P[i]].
 *
 * Entrada: N, los N valores de A y luego los N valores de P.
 *   Ejemplo: N=5; A: 10 20 30 40 50; P: 2 4 1 0 3
 * Salida esperada:
 *   Ejemplo: B: 30 50 20 10 40
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int a[MAX_N], p[MAX_N], b[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> p[i];

    for (int i = 0; i < n; i++) {
        b[i] = a[p[i]];
    }

    cout << "B:";
    for (int i = 0; i < n; i++) cout << " " << b[i];
    cout << endl;

    return 0;
}
