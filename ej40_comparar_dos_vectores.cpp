/*
 * Ejercicio 40. Comparar dos vectores
 * Nivel 2 - Intermedio
 *
 * Enunciado: Determinar si dos arreglos de igual tamano contienen
 * exactamente los mismos valores en las mismas posiciones.
 *
 * Entrada: N, luego los N valores de A, luego los N valores de B.
 *   Ejemplo: N=5; A: 1 3 5 7 9; B: 1 3 5 7 9
 * Salida esperada:
 *   Ejemplo: Iguales: SI
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int a[MAX_N], b[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bool iguales = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            iguales = false;
            break;
        }
    }

    cout << "Iguales: " << (iguales ? "SI" : "NO") << endl;

    return 0;
}
