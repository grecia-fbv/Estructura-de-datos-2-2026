/*
 * Ejercicio 81. QuickSort con arreglos
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Implementar QuickSort recursivo sobre un arreglo de
 * enteros, sin std::sort ni std::vector.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; 10 7 8 9 1 5 3 6 2
 * Salida esperada:
 *   Ejemplo: 1 2 3 5 6 7 8 9 10
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int particionar(int v[], int inicio, int fin) {
    int pivote = v[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {
        if (v[j] <= pivote) {
            i++;
            int temp = v[i]; v[i] = v[j]; v[j] = temp;
        }
    }
    int temp = v[i + 1]; v[i + 1] = v[fin]; v[fin] = temp;
    return i + 1;
}

void quickSort(int v[], int inicio, int fin) {
    if (inicio < fin) {
        int posPivote = particionar(v, inicio, fin);
        quickSort(v, inicio, posPivote - 1);
        quickSort(v, posPivote + 1, fin);
    }
}

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    quickSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
