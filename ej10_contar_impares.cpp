/*
 * Ejercicio 10. Contar impares
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 10 enteros y contar cuantos son impares.
 *
 * Entrada: 10 valores enteros.
 *   Ejemplo: 1 2 3 4 5 6 7 8 9 10
 * Salida esperada:
 *   Ejemplo: Impares = 5
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    int v[N];
    int impares = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (abs(v[i]) % 2 != 0) impares++;
    }

    cout << "Impares = " << impares << endl;

    return 0;
}
