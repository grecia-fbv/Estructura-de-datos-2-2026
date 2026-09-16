/*
 * Ejercicio 69. Subarreglo con suma maxima
 * Nivel 4 - Avanzado
 *
 * Enunciado: Encontrar la suma maxima de un segmento contiguo
 * usando un enfoque tipo Kadane. Reportar suma e indices.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; -2 1 -3 4 -1 2 1 -5 4
 * Salida esperada:
 *   Ejemplo: Suma maxima = 6; Indices = 3..6; Segmento: 4 -1 2 1
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

    int sumaActual = v[0];
    int sumaMaxima = v[0];
    int inicioActual = 0;
    int mejorInicio = 0, mejorFin = 0;

    for (int i = 1; i < n; i++) {
        if (sumaActual < 0) {
            sumaActual = v[i];
            inicioActual = i;
        } else {
            sumaActual += v[i];
        }

        if (sumaActual > sumaMaxima) {
            sumaMaxima = sumaActual;
            mejorInicio = inicioActual;
            mejorFin = i;
        }
    }

    cout << "Suma maxima = " << sumaMaxima
         << "; Indices = " << mejorInicio << ".." << mejorFin
         << "; Segmento:";
    for (int i = mejorInicio; i <= mejorFin; i++) cout << " " << v[i];
    cout << endl;

    return 0;
}
