/*
 * Ejercicio 89. Agua atrapada entre barras
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Cada elemento representa una altura. Calcular cuanta
 * agua queda atrapada despues de llover.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=12; 0 1 0 2 1 0 1 3 2 1 2 1
 * Salida esperada:
 *   Ejemplo: Agua atrapada = 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int altura[MAX_N];
    int maximoIzquierda[MAX_N];
    int maximoDerecha[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> altura[i];

    maximoIzquierda[0] = altura[0];
    for (int i = 1; i < n; i++) {
        maximoIzquierda[i] = max(maximoIzquierda[i - 1], altura[i]);
    }

    maximoDerecha[n - 1] = altura[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        maximoDerecha[i] = max(maximoDerecha[i + 1], altura[i]);
    }

    long long aguaTotal = 0;
    for (int i = 0; i < n; i++) {
        int nivelAgua = min(maximoIzquierda[i], maximoDerecha[i]);
        aguaTotal += nivelAgua - altura[i];
    }

    cout << "Agua atrapada = " << aguaTotal << endl;

    return 0;
}
