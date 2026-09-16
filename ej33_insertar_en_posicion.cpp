/*
 * Ejercicio 33. Insertar un elemento en una posicion
 * Nivel 2 - Intermedio
 *
 * Enunciado: Con capacidad suficiente, insertar X en la posicion P
 * (base 0) desplazando a la derecha los elementos necesarios.
 *
 * Entrada: N, los N valores, X y P.
 *   Ejemplo: N=5; 10 20 30 40 50; X=99; P=2
 * Salida esperada:
 *   Ejemplo: 10 20 99 30 40 50
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 101;

int main() {
    int n, x, p;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> x >> p;

    int tamanoLogico = n;
    for (int i = tamanoLogico; i > p; i--) {
        v[i] = v[i - 1];
    }
    v[p] = x;
    tamanoLogico++;

    for (int i = 0; i < tamanoLogico; i++) {
        cout << v[i];
        if (i < tamanoLogico - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
