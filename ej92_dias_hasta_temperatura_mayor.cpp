/*
 * Ejercicio 92. Temperaturas: dias hasta una mayor
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Para cada temperatura, calcular cuantas posiciones
 * hay que avanzar hasta encontrar una temperatura mayor; si no
 * existe, 0. Usar pila manual con arreglos.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 73 74 75 71 69 72 76 73
 * Salida esperada:
 *   Ejemplo: 1 1 4 2 1 1 0 0
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int resultado[MAX_N] = {0};
    int pila[MAX_N]; // guarda indices
    int tope = -1;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        while (tope >= 0 && v[pila[tope]] < v[i]) {
            int indiceAnterior = pila[tope];
            resultado[indiceAnterior] = i - indiceAnterior;
            tope--;
        }
        pila[++tope] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
