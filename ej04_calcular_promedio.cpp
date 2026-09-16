/*
 * Ejercicio 4. Calcular promedio
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 6 numeros reales y calcular su promedio aritmetico.
 *
 * Entrada: 6 valores reales.
 *   Ejemplo: 10 12 14 16 18 20
 * Salida esperada:
 *   Ejemplo: Promedio = 15
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    double v[N];
    double suma = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        suma += v[i];
    }

    double promedio = suma / N;
    cout << "Promedio = " << promedio << endl;

    return 0;
}
