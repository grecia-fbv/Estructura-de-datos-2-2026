/*
 * Ejercicio 27. Producto escalar
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer dos arreglos enteros A y B de tamano N y
 * calcular la suma de A[i] * B[i].
 *
 * Entrada: N, luego los N valores de A, luego los N valores de B.
 *   Ejemplo: N=4; A: 1 2 3 4; B: 5 6 7 8
 * Salida esperada:
 *   Ejemplo: Producto escalar = 70
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

    long long producto = 0;
    for (int i = 0; i < n; i++) {
        producto += (long long)a[i] * b[i];
    }

    cout << "Producto escalar = " << producto << endl;

    return 0;
}
