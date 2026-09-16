/*
 * Ejercicio 77. Histograma de enteros acotados
 * Nivel 4 - Avanzado
 *
 * Enunciado: Los valores estaran entre 0 y 9. Construir un
 * arreglo de frecuencias de tamano 10.
 *
 * Entrada: N y luego los N valores (cada uno entre 0 y 9).
 *   Ejemplo: N=12; 1 3 3 7 0 3 9 1 7 7 7 2
 * Salida esperada:
 *   Ejemplo: Frecuencias [0..9]: 1 2 1 3 0 0 0 4 0 1
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 1000;
const int RANGO = 10;

int main() {
    int n;
    int v[MAX_N];
    int frecuencias[RANGO] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        frecuencias[v[i]]++;
    }

    cout << "Frecuencias [0..9]:";
    for (int i = 0; i < RANGO; i++) cout << " " << frecuencias[i];
    cout << endl;

    return 0;
}
