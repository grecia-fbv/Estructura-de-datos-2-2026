/*
 * Ejercicio 68. Tres numeros cuya suma sea X
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar tres posiciones distintas cuyos valores
 * sumen X. Basta reportar una terna valida.
 *
 * Entrada: N, luego los N valores, luego X.
 *   Ejemplo: N=7; 1 4 45 6 10 8 12; X=22
 * Salida esperada:
 *   Ejemplo: Valores: 4 6 12
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
    int a = -1, b = -1, c = -1;

    for (int i = 0; i < n && !encontrado; i++) {
        for (int j = i + 1; j < n && !encontrado; j++) {
            for (int k = j + 1; k < n && !encontrado; k++) {
                if (v[i] + v[j] + v[k] == x) {
                    a = v[i]; b = v[j]; c = v[k];
                    encontrado = true;
                }
            }
        }
    }

    if (encontrado) {
        cout << "Valores: " << a << " " << b << " " << c << endl;
    } else {
        cout << "No existe una terna con esa suma" << endl;
    }

    return 0;
}
