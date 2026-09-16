/*
 * Ejercicio 1. Leer y mostrar un vector
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 5 numeros enteros en un arreglo y mostrarlos en el
 * mismo orden en que fueron leidos.
 *
 * Entrada: 5 valores enteros.
 *   Ejemplo: 3 8 1 6 4
 * Salida esperada: los 5 valores en el mismo orden, separados por un
 * espacio.
 *   Ejemplo: 3 8 1 6 4
 *
 * Restriccion: resuelto con arreglos nativos de C/C++, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int v[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++) {
        cout << v[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
