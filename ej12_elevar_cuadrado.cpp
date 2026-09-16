/*
 * Ejercicio 12. Elevar al cuadrado
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 5 enteros y crear un segundo arreglo con el
 * cuadrado de cada valor.
 *
 * Entrada: 5 valores enteros.
 *   Ejemplo: 2 3 4 5 6
 * Salida esperada:
 *   Ejemplo: 4 9 16 25 36
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int v[N];
    int cuadrados[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        cuadrados[i] = v[i] * v[i];
    }

    for (int i = 0; i < N; i++) {
        cout << cuadrados[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
