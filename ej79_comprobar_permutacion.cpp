/*
 * Ejercicio 79. Comprobar permutacion de 1..N
 * Nivel 4 - Avanzado
 *
 * Enunciado: Determinar si el arreglo contiene exactamente una
 * vez cada entero desde 1 hasta N.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 4 1 6 2 5 3
 * Salida esperada:
 *   Ejemplo: Es permutacion: SI
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 101;

int main() {
    int n;
    int v[MAX_N];
    int presente[MAX_N] = {0};

    cin >> n;

    bool esPermutacion = true;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 1 || v[i] > n) {
            esPermutacion = false;
        } else {
            presente[v[i]]++;
        }
    }

    if (esPermutacion) {
        for (int valor = 1; valor <= n; valor++) {
            if (presente[valor] != 1) {
                esPermutacion = false;
                break;
            }
        }
    }

    cout << "Es permutacion: " << (esPermutacion ? "SI" : "NO") << endl;

    return 0;
}
