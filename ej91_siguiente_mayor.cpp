/*
 * Ejercicio 91. Siguiente elemento mayor
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Para cada posicion, encontrar el primer valor a su
 * derecha que sea mayor. Implementar una solucion eficiente con
 * un arreglo usado como pila manual.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=4; 4 5 2 25
 * Salida esperada:
 *   Ejemplo: 5 25 25 -1
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int resultado[MAX_N];
    int pila[MAX_N]; // guarda indices
    int tope = -1;   // pila vacia

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        // Mientras el tope de la pila sea menor que el valor actual,
        // el actual es su siguiente mayor.
        while (tope >= 0 && v[pila[tope]] < v[i]) {
            resultado[pila[tope]] = v[i];
            tope--;
        }
        pila[++tope] = i;
    }

    // Lo que quede en la pila no tiene siguiente mayor.
    while (tope >= 0) {
        resultado[pila[tope]] = -1;
        tope--;
    }

    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
