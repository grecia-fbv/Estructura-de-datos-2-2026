/*
 * Ejercicio 58. Mayor diferencia absoluta consecutiva
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Encontrar dos elementos consecutivos con maxima
 * diferencia absoluta.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 3 15 9 -4 8 10
 * Salida esperada:
 *   Ejemplo: Par: 9 -4; Diferencia = 13
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int mejorIndice = 0;
    int mejorDiferencia = abs(v[0] - v[1]);
    for (int i = 1; i < n - 1; i++) {
        int diferencia = abs(v[i] - v[i + 1]);
        if (diferencia > mejorDiferencia) {
            mejorDiferencia = diferencia;
            mejorIndice = i;
        }
    }

    cout << "Par: " << v[mejorIndice] << " " << v[mejorIndice + 1]
         << "; Diferencia = " << mejorDiferencia << endl;

    return 0;
}
