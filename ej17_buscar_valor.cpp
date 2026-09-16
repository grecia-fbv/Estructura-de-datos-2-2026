/*
 * Ejercicio 17. Buscar un valor
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 8 enteros y luego un numero X. Indicar si X
 * aparece en el arreglo.
 *
 * Entrada: 8 valores enteros y luego X.
 *   Ejemplo: 4 9 2 7 5 1 8 3   X = 7
 * Salida esperada:
 *   Ejemplo: Encontrado
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 8;
    int v[N];
    int x;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    cin >> x;

    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (v[i] == x) {
            encontrado = true;
            break;
        }
    }

    cout << (encontrado ? "Encontrado" : "No encontrado") << endl;

    return 0;
}
