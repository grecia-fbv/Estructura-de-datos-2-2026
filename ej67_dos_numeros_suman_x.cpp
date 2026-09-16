/*
 * Ejercicio 67. Dos numeros cuya suma sea X
 * Nivel 4 - Avanzado
 *
 * Enunciado: Determinar si existen dos posiciones distintas cuyos
 * valores sumen X. Mostrar un par de indices si existe.
 *
 * Entrada: N, luego los N valores, luego X.
 *   Ejemplo: N=7; 2 7 11 15 3 6 8; X=9
 * Salida esperada:
 *   Ejemplo: Indices: 0 y 1; Valores: 2 + 7 = 9
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, x;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> x;

    bool encontrado = false;
    int idxI = -1, idxJ = -1;

    for (int i = 0; i < n && !encontrado; i++) {
        for (int j = i + 1; j < n && !encontrado; j++) {
            if (v[i] + v[j] == x) {
                idxI = i;
                idxJ = j;
                encontrado = true;
            }
        }
    }

    if (encontrado) {
        cout << "Indices: " << idxI << " y " << idxJ
             << "; Valores: " << v[idxI] << " + " << v[idxJ]
             << " = " << x << endl;
    } else {
        cout << "No existe un par con esa suma" << endl;
    }

    return 0;
}
