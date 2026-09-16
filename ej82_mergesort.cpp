/*
 * Ejercicio 82. Merge Sort con arreglos
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Implementar Merge Sort usando un arreglo auxiliar
 * temporal y fusion manual.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 38 27 43 3 9 82 10 1
 * Salida esperada:
 *   Ejemplo: 1 3 9 10 27 38 43 82
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * std::sort.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int temp[MAX_N];

void fusionar(int v[], int inicio, int medio, int fin) {
    int i = inicio, j = medio + 1, k = inicio;

    while (i <= medio && j <= fin) {
        if (v[i] <= v[j]) temp[k++] = v[i++];
        else temp[k++] = v[j++];
    }
    while (i <= medio) temp[k++] = v[i++];
    while (j <= fin) temp[k++] = v[j++];

    for (int idx = inicio; idx <= fin; idx++) v[idx] = temp[idx];
}

void mergeSort(int v[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mergeSort(v, inicio, medio);
        mergeSort(v, medio + 1, fin);
        fusionar(v, inicio, medio, fin);
    }
}

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
