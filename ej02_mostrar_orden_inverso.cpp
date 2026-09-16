/*
 * Ejercicio 2. Mostrar un vector en orden inverso
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 6 enteros y mostrar sus elementos desde el ultimo
 * hasta el primero.
 *
 * Entrada: 6 valores enteros.
 *   Ejemplo: 2 4 6 8 10 12
 * Salida esperada:
 *   Ejemplo: 12 10 8 6 4 2
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int v[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << v[i];
        if (i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}
