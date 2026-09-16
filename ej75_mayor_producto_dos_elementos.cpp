/*
 * Ejercicio 75. Mayor producto de dos elementos
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar el maximo producto entre dos posiciones
 * distintas considerando tambien numeros negativos (dos negativos
 * grandes pueden producir un producto positivo mayor).
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; -10 -3 5 6 -2 4
 * Salida esperada:
 *   Ejemplo: Mayor producto = 30 (5 * 6)
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int ordenado[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ordenado[i] = v[i];
    }

    // Ordenar una copia de forma ascendente (insercion) para ubicar
    // facilmente los dos mayores y los dos menores.
    for (int i = 1; i < n; i++) {
        int clave = ordenado[i];
        int j = i - 1;
        while (j >= 0 && ordenado[j] > clave) {
            ordenado[j + 1] = ordenado[j];
            j--;
        }
        ordenado[j + 1] = clave;
    }

    long long productoMayores = (long long)ordenado[n - 1] * ordenado[n - 2];
    long long productoMenores = (long long)ordenado[0] * ordenado[1];

    long long mejorProducto;
    int factor1, factor2;

    if (productoMayores >= productoMenores) {
        mejorProducto = productoMayores;
        factor1 = ordenado[n - 2];
        factor2 = ordenado[n - 1];
    } else {
        mejorProducto = productoMenores;
        factor1 = ordenado[0];
        factor2 = ordenado[1];
    }

    cout << "Mayor producto = " << mejorProducto
         << " (" << factor1 << " * " << factor2 << ")" << endl;

    return 0;
}
