/*
 * Ejercicio 16. Contar ceros
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 10 enteros y contar cuantos elementos son
 * exactamente cero.
 *
 * Entrada: 10 valores enteros.
 *   Ejemplo: 0 2 0 4 5 0 7 8 0 10
 * Salida esperada:
 *   Ejemplo: Ceros = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int v[N];
    int ceros = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (v[i] == 0) ceros++;
    }

    cout << "Ceros = " << ceros << endl;

    return 0;
}
