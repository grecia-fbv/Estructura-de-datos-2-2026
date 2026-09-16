/*
 * Ejercicio 22. Rotar una posicion a la derecha
 * Nivel 2 - Intermedio
 *
 * Enunciado: Desplazar todos los elementos una posicion a la
 * derecha; el ultimo pasa a la primera posicion.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=5; 1 2 3 4 5
 * Salida esperada:
 *   Ejemplo: 5 1 2 3 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 50;

int main() {
    int n;
    int v[MAX_N];
    int resultado[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    resultado[0] = v[n - 1];
    for (int i = 0; i < n - 1; i++) {
        resultado[i + 1] = v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
