/*
 * Ejercicio 6. Encontrar el menor
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 7 enteros y determinar el valor menor.
 *
 * Entrada: 7 valores enteros.
 *   Ejemplo: 5 -2 13 0 -9 8 4
 * Salida esperada:
 *   Ejemplo: Menor = -9
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
    }

    int menor = v[0];
    for (int i = 1; i < N; i++) {
        if (v[i] < menor) menor = v[i];
    }

    cout << "Menor = " << menor << endl;

    return 0;
}
