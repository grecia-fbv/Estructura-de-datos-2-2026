/*
 * Ejercicio 7. Contar numeros positivos
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 8 enteros y contar cuantos son mayores que cero.
 *
 * Entrada: 8 valores enteros.
 *   Ejemplo: -3 5 0 8 -1 4 -6 2
 * Salida esperada:
 *   Ejemplo: Positivos = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int v[N];
    int positivos = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (v[i] > 0) positivos++;
    }

    cout << "Positivos = " << positivos << endl;

    return 0;
}
