/*
 * Ejercicio 83. Heap Sort con arreglo
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Implementar Heap Sort construyendo un heap maximo
 * dentro del mismo arreglo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 12 11 13 5 6 7 2 9
 * Salida esperada:
 *   Ejemplo: 2 5 6 7 9 11 12 13
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

void heapify(int v[], int n, int raiz) {
    int mayor = raiz;
    int izquierdo = 2 * raiz + 1;
    int derecho = 2 * raiz + 2;

    if (izquierdo < n && v[izquierdo] > v[mayor]) mayor = izquierdo;
    if (derecho < n && v[derecho] > v[mayor]) mayor = derecho;

    if (mayor != raiz) {
        int temp = v[raiz]; v[raiz] = v[mayor]; v[mayor] = temp;
        heapify(v, n, mayor);
    }
}

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    // Construir el heap maximo.
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }

    // Extraer elementos del heap uno por uno.
    for (int fin = n - 1; fin > 0; fin--) {
        int temp = v[0]; v[0] = v[fin]; v[fin] = temp;
        heapify(v, fin, 0);
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
