/*
 * Ejercicio 32. Eliminar logicamente un elemento por posicion
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer N, el arreglo y una posicion P valida (base 0).
 * Desplazar a la izquierda desde P y reducir el tamano logico en
 * uno.
 *
 * Entrada: N, los N valores y luego P.
 *   Ejemplo: N=6; 10 20 30 40 50 60; P=2
 * Salida esperada:
 *   Ejemplo: 10 20 40 50 60
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, p;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> p;

    int tamanoLogico = n;
    for (int i = p; i < tamanoLogico - 1; i++) {
        v[i] = v[i + 1];
    }
    tamanoLogico--;

    for (int i = 0; i < tamanoLogico; i++) {
        cout << v[i];
        if (i < tamanoLogico - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
