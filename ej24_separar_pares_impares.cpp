/*
 * Ejercicio 24. Separar pares e impares
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer N enteros y construir dos arreglos: uno con los
 * pares y otro con los impares, preservando el orden original.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 7 2 9 4 6 3 8 1
 * Salida esperada:
 *   Ejemplo: Pares: 2 4 6 8; Impares: 7 9 3 1
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int pares[MAX_N];
    int impares[MAX_N];
    int totalPares = 0, totalImpares = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (abs(v[i]) % 2 == 0) {
            pares[totalPares++] = v[i];
        } else {
            impares[totalImpares++] = v[i];
        }
    }

    cout << "Pares:";
    for (int i = 0; i < totalPares; i++) cout << " " << pares[i];

    cout << "; Impares:";
    for (int i = 0; i < totalImpares; i++) cout << " " << impares[i];
    cout << endl;

    return 0;
}
