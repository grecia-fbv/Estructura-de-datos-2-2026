/*
 * Ejercicio 78. Ordenamiento por conteo
 * Nivel 4 - Avanzado
 *
 * Enunciado: Ordenar enteros en el rango 0..100 implementando
 * Counting Sort con arreglos auxiliares.
 *
 * Entrada: N y luego los N valores (cada uno entre 0 y 100).
 *   Ejemplo: N=10; 4 2 2 8 3 3 1 7 0 5
 * Salida esperada:
 *   Ejemplo: 0 1 2 2 3 3 4 5 7 8
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * std::sort.
 */
#include <iostream>
using namespace std;

const int MAX_N = 1000;
const int RANGO = 101;

int main() {
    int n;
    int v[MAX_N];
    int conteo[RANGO] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        conteo[v[i]]++;
    }

    int posicion = 0;
    for (int valor = 0; valor < RANGO; valor++) {
        for (int veces = 0; veces < conteo[valor]; veces++) {
            v[posicion] = valor;
            posicion++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
