/*
 * Ejercicio 25. Sumar dos vectores
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer dos arreglos A y B de igual tamano y generar C
 * donde C[i] = A[i] + B[i].
 *
 * Entrada: N, luego los N valores de A, luego los N valores de B.
 *   Ejemplo: N=4; A: 1 2 3 4; B: 10 20 30 40
 * Salida esperada:
 *   Ejemplo: C: 11 22 33 44
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int a[MAX_N], b[MAX_N], c[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    cout << "C:";
    for (int i = 0; i < n; i++) cout << " " << c[i];
    cout << endl;

    return 0;
}
