/*
 * Ejercicio 37. Comprobar si esta ordenado ascendentemente
 * Nivel 2 - Intermedio
 *
 * Enunciado: Determinar si cada elemento es menor o igual que el
 * siguiente.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 1 2 2 5 8 10
 * Salida esperada:
 *   Ejemplo: Ordenado ascendentemente: SI
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

    bool ordenado = true;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ordenado = false;
            break;
        }
    }

    cout << "Ordenado ascendentemente: " << (ordenado ? "SI" : "NO") << endl;

    return 0;
}
