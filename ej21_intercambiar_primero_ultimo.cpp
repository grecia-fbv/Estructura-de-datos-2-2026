/*
 * Ejercicio 21. Intercambiar primero y ultimo
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer N enteros (2 <= N <= 50), intercambiar el primer
 * elemento con el ultimo y mostrar el arreglo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=5; 10 20 30 40 50
 * Salida esperada:
 *   Ejemplo: 50 20 30 40 10
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 50;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int temp = v[0];
    v[0] = v[n - 1];
    v[n - 1] = temp;

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
