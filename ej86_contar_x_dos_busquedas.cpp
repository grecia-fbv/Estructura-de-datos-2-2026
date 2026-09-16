/*
 * Ejercicio 86. Contar X con dos busquedas binarias
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Contar cuantas veces aparece X en un arreglo
 * ordenado usando primera y ultima aparicion, con complejidad
 * O(log N).
 *
 * Entrada: N, los N valores ordenados y luego X.
 *   Ejemplo: N=10; 1 2 2 2 2 3 4 5 5 7; X=2
 * Salida esperada:
 *   Ejemplo: Cantidad = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int primeraAparicion(int v[], int n, int x) {
    int inicio = 0, fin = n - 1, resultado = -1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (v[medio] == x) {
            resultado = medio;
            fin = medio - 1;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return resultado;
}

int ultimaAparicion(int v[], int n, int x) {
    int inicio = 0, fin = n - 1, resultado = -1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (v[medio] == x) {
            resultado = medio;
            inicio = medio + 1;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return resultado;
}

int main() {
    int n, x;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> x;

    int primera = primeraAparicion(v, n, x);
    int cantidad = 0;
    if (primera != -1) {
        int ultima = ultimaAparicion(v, n, x);
        cantidad = ultima - primera + 1;
    }

    cout << "Cantidad = " << cantidad << endl;

    return 0;
}
