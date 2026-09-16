/*
 * Ejercicio 84. Busqueda binaria: primera aparicion
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: En un arreglo ordenado con duplicados, encontrar el
 * primer indice de X en O(log N).
 *
 * Entrada: N, los N valores ordenados y luego X.
 *   Ejemplo: N=9; 1 2 2 2 3 4 4 5 6; X=2
 * Salida esperada:
 *   Ejemplo: Primera posicion = 1
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
            fin = medio - 1; // seguir buscando hacia la izquierda
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Primera posicion = " << resultado << endl;

    return 0;
}
