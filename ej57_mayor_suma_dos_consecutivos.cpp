/*
 * Ejercicio 57. Mayor suma de dos consecutivos
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Encontrar el par de elementos adyacentes cuya suma
 * sea maxima.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 4 8 -2 10 7 1
 * Salida esperada:
 *   Ejemplo: Par: 10 7; Suma = 17
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

    int mejorIndice = 0;
    int mejorSuma = v[0] + v[1];
    for (int i = 1; i < n - 1; i++) {
        int suma = v[i] + v[i + 1];
        if (suma > mejorSuma) {
            mejorSuma = suma;
            mejorIndice = i;
        }
    }

    cout << "Par: " << v[mejorIndice] << " " << v[mejorIndice + 1]
         << "; Suma = " << mejorSuma << endl;

    return 0;
}
