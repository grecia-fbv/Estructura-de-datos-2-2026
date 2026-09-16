/*
 * Ejercicio 61. Rotacion K posiciones a la derecha
 * Nivel 4 - Avanzado
 *
 * Enunciado: Rotar un arreglo N posiciones K hacia la derecha.
 * Resolver correctamente cuando K > N usando K % N.
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=7; K=3; 1 2 3 4 5 6 7
 * Salida esperada:
 *   Ejemplo: 5 6 7 1 2 3 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    int v[MAX_N];
    int resultado[MAX_N];

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];

    k = k % n;

    for (int i = 0; i < n; i++) {
        int nuevaPosicion = (i + k) % n;
        resultado[nuevaPosicion] = v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
