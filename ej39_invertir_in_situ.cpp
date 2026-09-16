/*
 * Ejercicio 39. Invertir el vector in situ
 * Nivel 2 - Intermedio
 *
 * Enunciado: Invertir el arreglo usando intercambios, sin utilizar
 * un segundo arreglo del mismo tamano.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 1 2 3 4 5 6 7
 * Salida esperada:
 *   Ejemplo: 7 6 5 4 3 2 1
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int izquierda = 0, derecha = n - 1;
    while (izquierda < derecha) {
        int temp = v[izquierda];
        v[izquierda] = v[derecha];
        v[derecha] = temp;
        izquierda++;
        derecha--;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
