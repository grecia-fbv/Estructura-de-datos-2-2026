/*
 * Ejercicio 11. Duplicar cada elemento
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 5 enteros, multiplicar cada elemento por 2 y
 * mostrar el arreglo resultante.
 *
 * Entrada: 5 valores enteros.
 *   Ejemplo: 1 3 5 7 9
 * Salida esperada:
 *   Ejemplo: 2 6 10 14 18
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int v[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        v[i] *= 2;
    }

    for (int i = 0; i < N; i++) {
        cout << v[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
