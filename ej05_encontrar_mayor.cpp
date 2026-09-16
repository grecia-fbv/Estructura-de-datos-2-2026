/*
 * Ejercicio 5. Encontrar el mayor
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 7 enteros y determinar el valor mayor.
 *
 * Entrada: 7 valores enteros.
 *   Ejemplo: 5 12 3 27 9 18 4
 * Salida esperada:
 *   Ejemplo: Mayor = 27
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

    int mayor = v[0];
    for (int i = 1; i < N; i++) {
        if (v[i] > mayor) mayor = v[i];
    }

    cout << "Mayor = " << mayor << endl;

    return 0;
}
