/*
 * Ejercicio 73. Prefijos acumulados
 * Nivel 4 - Avanzado
 *
 * Enunciado: Construir P donde P[i] contiene la suma de A[0]
 * hasta A[i].
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 2 4 1 3 5 2
 * Salida esperada:
 *   Ejemplo: Prefijos: 2 6 7 10 15 17
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int prefijos[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    prefijos[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefijos[i] = prefijos[i - 1] + v[i];
    }

    cout << "Prefijos:";
    for (int i = 0; i < n; i++) cout << " " << prefijos[i];
    cout << endl;

    return 0;
}
