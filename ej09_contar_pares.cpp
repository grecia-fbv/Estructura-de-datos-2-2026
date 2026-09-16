/*
 * Ejercicio 9. Contar pares
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 10 enteros y contar cuantos son pares.
 *
 * Entrada: 10 valores enteros.
 *   Ejemplo: 1 2 3 4 5 6 7 8 9 10
 * Salida esperada:
 *   Ejemplo: Pares = 5
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int v[N];
    int pares = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (abs(v[i]) % 2 == 0) pares++;
    }

    cout << "Pares = " << pares << endl;

    return 0;
}
