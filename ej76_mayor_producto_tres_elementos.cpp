/*
 * Ejercicio 76. Mayor producto de tres elementos
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar el maximo producto posible usando tres
 * posiciones distintas.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; -10 -10 5 2 8 1
 * Salida esperada:
 *   Ejemplo: Mayor producto = 800 (-10 * -10 * 8)
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

    // Ordenar una copia de forma ascendente (insercion).
    for (int i = 1; i < n; i++) {
        int clave = ordenado[i];
        int j = i - 1;
        while (j >= 0 && ordenado[j] > clave) {
            ordenado[j + 1] = ordenado[j];
            j--;
        }
        ordenado[j + 1] = clave;
    }

    // Candidato A: los tres mayores.
    long long productoTop3 = (long long)ordenado[n - 1] * ordenado[n - 2] * ordenado[n - 3];
    // Candidato B: los dos menores (posiblemente muy negativos) por
    // el mayor.
    long long productoDosMenoresPorMayor = (long long)ordenado[0] * ordenado[1] * ordenado[n - 1];

    long long mejorProducto;
    int a, b, c;

    if (productoTop3 >= productoDosMenoresPorMayor) {
        mejorProducto = productoTop3;
        a = ordenado[n - 3]; b = ordenado[n - 2]; c = ordenado[n - 1];
    } else {
        mejorProducto = productoDosMenoresPorMayor;
        a = ordenado[0]; b = ordenado[1]; c = ordenado[n - 1];
    }

    cout << "Mayor producto = " << mejorProducto
         << " (" << a << " * " << b << " * " << c << ")" << endl;

    return 0;
}
