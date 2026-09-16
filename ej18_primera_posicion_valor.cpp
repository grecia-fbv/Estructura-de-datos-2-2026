/*
 * Ejercicio 18. Obtener la primera posicion de un valor
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 10 enteros y un valor X. Mostrar el primer
 * indice donde aparece; si no existe, mostrar -1.
 *
 * Entrada: 10 valores enteros y luego X.
 *   Ejemplo: 5 8 3 8 2 9 8 1 4 6   X = 8
 * Salida esperada:
 *   Ejemplo: Primera posicion = 1
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

    int posicion = -1;
    for (int i = 0; i < N; i++) {
        if (v[i] == x) {
            posicion = i;
            break;
        }
    }

    cout << "Primera posicion = " << posicion << endl;

    return 0;
}
