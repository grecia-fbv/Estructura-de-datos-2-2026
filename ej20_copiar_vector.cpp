/*
 * Ejercicio 20. Copiar un vector
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 6 enteros, copiarlos elemento por elemento a un
 * segundo arreglo y mostrar la copia.
 *
 * Entrada: 6 valores enteros.
 *   Ejemplo: 11 22 33 44 55 66
 * Salida esperada:
 *   Ejemplo: Copia: 11 22 33 44 55 66
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int v[N];
    int copia[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++) {
        copia[i] = v[i];
    }

    cout << "Copia:";
    for (int i = 0; i < N; i++) {
        cout << " " << copia[i];
    }
    cout << endl;

    return 0;
}
