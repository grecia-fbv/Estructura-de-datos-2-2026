/*
 * Ejercicio 28. Diferencia entre maximo y minimo
 * Nivel 2 - Intermedio
 *
 * Enunciado: Leer N enteros y calcular maximo - minimo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 12 3 25 7 18 10
 * Salida esperada:
 *   Ejemplo: Diferencia = 22
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

    int maximo = v[0], minimo = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maximo) maximo = v[i];
        if (v[i] < minimo) minimo = v[i];
    }

    cout << "Diferencia = " << (maximo - minimo) << endl;

    return 0;
}
