/*
 * Ejercicio 34. Eliminar todas las apariciones de X
 * Nivel 2 - Intermedio
 *
 * Enunciado: Eliminar logicamente todas las ocurrencias de un
 * valor X, sin usar un arreglo auxiliar (se sobrescribe el mismo
 * arreglo con dos punteros).
 *
 * Entrada: N, los N valores y luego X.
 *   Ejemplo: N=9; 2 5 2 7 2 8 3 2 4; X=2
 * Salida esperada:
 *   Ejemplo: 5 7 8 3 4
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

    int escritura = 0;
    for (int lectura = 0; lectura < n; lectura++) {
        if (v[lectura] != x) {
            v[escritura] = v[lectura];
            escritura++;
        }
    }

    for (int i = 0; i < escritura; i++) {
        cout << v[i];
        if (i < escritura - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
