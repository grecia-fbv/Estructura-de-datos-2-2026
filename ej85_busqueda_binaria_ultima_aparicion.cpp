/*
 * Ejercicio 85. Busqueda binaria: ultima aparicion
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: En un arreglo ordenado con duplicados, encontrar el
 * ultimo indice de X en O(log N).
 *
 * Entrada: N, los N valores ordenados y luego X.
 *   Ejemplo: N=9; 1 2 2 2 3 4 4 5 6; X=2
 * Salida esperada:
 *   Ejemplo: Ultima posicion = 3
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
    int resultado = -1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (v[medio] == x) {
            resultado = medio;
            inicio = medio + 1; // seguir buscando hacia la derecha
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Ultima posicion = " << resultado << endl;

    return 0;
}
