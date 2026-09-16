/*
 * Ejercicio 23. Rotar una posicion a la izquierda
 * Nivel 2 - Intermedio
 *
 * Enunciado: Desplazar todos los elementos una posicion a la
 * izquierda; el primero pasa a la ultima posicion.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=5; 1 2 3 4 5
 * Salida esperada:
 *   Ejemplo: 2 3 4 5 1
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

    for (int i = 0; i < n - 1; i++) {
        resultado[i] = v[i + 1];
    }
    resultado[n - 1] = v[0];

    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
