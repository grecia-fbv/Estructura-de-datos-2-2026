/*
 * Ejercicio 8. Contar numeros negativos
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 8 enteros y contar cuantos son menores que cero.
 *
 * Entrada: 8 valores enteros.
 *   Ejemplo: -3 5 0 8 -1 4 -6 2
 * Salida esperada:
 *   Ejemplo: Negativos = 3
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int v[N];
    int negativos = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (v[i] < 0) negativos++;
    }

    cout << "Negativos = " << negativos << endl;

    return 0;
}
