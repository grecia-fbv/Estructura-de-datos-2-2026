/*
 * Ejercicio 64. Particion alrededor de un pivote
 * Nivel 4 - Avanzado
 *
 * Enunciado: Dado X, reorganizar el arreglo de modo que primero
 * queden valores menores que X, luego iguales y despues mayores.
 * El enunciado indica explicitamente que existen varias soluciones
 * validas.
 *
 * Entrada: N, X y luego los N valores.
 *   Ejemplo: N=9; X=5; 7 3 5 2 8 5 1 9 4
 * Salida esperada (una de las validas):
 *   Ejemplo: 3 2 1 4 5 5 7 8 9
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, x;
    int v[MAX_N];

    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> v[i];

    // Particion de bandera holandesa (Dutch National Flag) con tres
    // punteros: bajo, medio y alto.
    int bajo = 0, medio = 0, alto = n - 1;

    while (medio <= alto) {
        if (v[medio] < x) {
            int temp = v[bajo]; v[bajo] = v[medio]; v[medio] = temp;
            bajo++;
            medio++;
        } else if (v[medio] == x) {
            medio++;
        } else {
            int temp = v[medio]; v[medio] = v[alto]; v[alto] = temp;
            alto--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
