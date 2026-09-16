/*
 * Ejercicio 72. Equilibrio izquierda-derecha
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar un indice i cuya suma de elementos a la
 * izquierda sea igual a la suma de elementos a la derecha.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; -7 1 5 2 -4 3 0
 * Salida esperada:
 *   Ejemplo: Indice de equilibrio = 3
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    long long sumaTotal = 0;
    for (int i = 0; i < n; i++) sumaTotal += v[i];

    long long sumaIzquierda = 0;
    int indiceEquilibrio = -1;

    for (int i = 0; i < n; i++) {
        long long sumaDerecha = sumaTotal - sumaIzquierda - v[i];
        if (sumaIzquierda == sumaDerecha) {
            indiceEquilibrio = i;
            break;
        }
        sumaIzquierda += v[i];
    }

    cout << "Indice de equilibrio = " << indiceEquilibrio << endl;

    return 0;
}
