/*
 * Ejercicio 15. Sumar posiciones impares
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 8 enteros y sumar los elementos ubicados en
 * indices impares: 1, 3, 5, 7 (base 0).
 *
 * Entrada: 8 valores enteros.
 *   Ejemplo: 3 5 7 9 11 13 15 17
 * Salida esperada:
 *   Ejemplo: Suma indices impares = 44
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int v[N];
    int suma = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (i % 2 != 0) suma += v[i];
    }

    cout << "Suma indices impares = " << suma << endl;

    return 0;
}
