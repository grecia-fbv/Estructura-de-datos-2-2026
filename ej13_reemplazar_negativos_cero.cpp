/*
 * Ejercicio 13. Reemplazar negativos por cero
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 7 enteros y sustituir todo valor negativo por 0.
 *
 * Entrada: 7 valores enteros.
 *   Ejemplo: -4 5 -1 9 0 -8 3
 * Salida esperada:
 *   Ejemplo: 0 5 0 9 0 0 3
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 7;
    int v[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (v[i] < 0) v[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        cout << v[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
