/*
 * Ejercicio 48. Rango y amplitud
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Calcular minimo, maximo y amplitud (maximo - minimo).
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 18 4 25 9 11 30 6
 * Salida esperada:
 *   Ejemplo: Minimo = 4; Maximo = 30; Amplitud = 26
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

    int minimo = v[0], maximo = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < minimo) minimo = v[i];
        if (v[i] > maximo) maximo = v[i];
    }

    cout << "Minimo = " << minimo << "; Maximo = " << maximo
         << "; Amplitud = " << (maximo - minimo) << endl;

    return 0;
}
