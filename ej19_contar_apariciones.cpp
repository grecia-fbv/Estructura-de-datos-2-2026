/*
 * Ejercicio 19. Contar apariciones de un valor
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 10 enteros y un valor X. Contar cuantas veces
 * aparece X.
 *
 * Entrada: 10 valores enteros y luego X.
 *   Ejemplo: 2 4 2 7 2 9 1 2 5 2   X = 2
 * Salida esperada:
 *   Ejemplo: Apariciones = 5
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int v[N];
    int x;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    cin >> x;

    int apariciones = 0;
    for (int i = 0; i < N; i++) {
        if (v[i] == x) apariciones++;
    }

    cout << "Apariciones = " << apariciones << endl;

    return 0;
}
