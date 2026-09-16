/*
 * Ejercicio 63. Rotacion in situ por reversas
 * Nivel 4 - Avanzado
 *
 * Enunciado: Rotar K posiciones a la derecha usando solamente
 * intercambios/reversiones y O(1) de memoria auxiliar (algoritmo
 * de las tres reversiones).
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=6; K=2; 10 20 30 40 50 60
 * Salida esperada:
 *   Ejemplo: 50 60 10 20 30 40
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

void invertir(int v[], int inicio, int fin) {
    while (inicio < fin) {
        int temp = v[inicio];
        v[inicio] = v[fin];
        v[fin] = temp;
        inicio++;
        fin--;
    }
}

int main() {
    int n, k;
    int v[MAX_N];

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];

    k = k % n;

    // Rotacion a la derecha en K posiciones usando tres reversiones:
    // 1) invertir todo el arreglo
    // 2) invertir los primeros K elementos
    // 3) invertir los restantes N-K elementos
    invertir(v, 0, n - 1);
    invertir(v, 0, k - 1);
    invertir(v, k, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
