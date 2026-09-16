/*
 * Ejercicio 88. Producto excepto en la posicion
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Construir R donde R[i] sea el producto de todos los
 * elementos excepto A[i]. No usar division.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=4; 1 2 3 4
 * Salida esperada:
 *   Ejemplo: 24 12 8 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    long long v[MAX_N];
    long long r[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    // Primera pasada: R[i] = producto de todos los elementos a la
    // izquierda de i.
    long long prefijo = 1;
    for (int i = 0; i < n; i++) {
        r[i] = prefijo;
        prefijo *= v[i];
    }

    // Segunda pasada: multiplicar por el producto de todos los
    // elementos a la derecha de i.
    long long sufijo = 1;
    for (int i = n - 1; i >= 0; i--) {
        r[i] *= sufijo;
        sufijo *= v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << r[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
