/*
 * Ejercicio 35. Compactar ceros al final
 * Nivel 2 - Intermedio
 *
 * Enunciado: Mover todos los valores cero al final manteniendo el
 * orden relativo de los no-cero.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 0 5 0 3 8 0 1 0
 * Salida esperada:
 *   Ejemplo: 5 3 8 1 0 0 0 0
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

    int escritura = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            v[escritura] = v[i];
            escritura++;
        }
    }
    for (int i = escritura; i < n; i++) {
        v[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
