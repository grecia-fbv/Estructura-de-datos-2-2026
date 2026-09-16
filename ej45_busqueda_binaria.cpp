/*
 * Ejercicio 45. Busqueda binaria
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Dado un arreglo ya ordenado ascendentemente y un
 * valor X, encontrar su indice (base 0) mediante busqueda binaria.
 *
 * Entrada: N, los N valores ordenados y luego X.
 *   Ejemplo: N=8; 2 5 8 12 16 23 38 56; X=23
 * Salida esperada:
 *   Ejemplo: Posicion = 5
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

    int inicio = 0, fin = n - 1;
    int posicion = -1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (v[medio] == x) {
            posicion = medio;
            break;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Posicion = " << posicion << endl;

    return 0;
}
