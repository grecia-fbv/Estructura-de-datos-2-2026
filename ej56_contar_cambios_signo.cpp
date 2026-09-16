/*
 * Ejercicio 56. Contar cambios de signo
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Contar cuantas veces dos elementos consecutivos no
 * cero tienen signos diferentes.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; -2 3 5 -1 -4 6 -7 -8
 * Salida esperada:
 *   Ejemplo: Cambios de signo = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int cambios = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] != 0 && v[i + 1] != 0) {
            bool positivoActual = v[i] > 0;
            bool positivoSiguiente = v[i + 1] > 0;
            if (positivoActual != positivoSiguiente) cambios++;
        }
    }

    cout << "Cambios de signo = " << cambios << endl;

    return 0;
}
