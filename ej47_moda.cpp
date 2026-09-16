/*
 * Ejercicio 47. Moda
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Encontrar el valor con mayor frecuencia. Si hay
 * empate, devolver el menor valor entre las modas.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; 4 2 4 3 2 4 2 5 2
 * Salida esperada:
 *   Ejemplo: Moda = 2; Frecuencia = 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int valoresDistintos[MAX_N];
    int frecuencias[MAX_N];
    int totalDistintos = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        int idx = -1;
        for (int j = 0; j < totalDistintos; j++) {
            if (valoresDistintos[j] == v[i]) {
                idx = j;
                break;
            }
        }

        if (idx == -1) {
            valoresDistintos[totalDistintos] = v[i];
            frecuencias[totalDistintos] = 1;
            totalDistintos++;
        } else {
            frecuencias[idx]++;
        }
    }

    int moda = valoresDistintos[0];
    int frecuenciaModa = frecuencias[0];
    for (int i = 1; i < totalDistintos; i++) {
        if (frecuencias[i] > frecuenciaModa ||
            (frecuencias[i] == frecuenciaModa && valoresDistintos[i] < moda)) {
            moda = valoresDistintos[i];
            frecuenciaModa = frecuencias[i];
        }
    }

    cout << "Moda = " << moda << "; Frecuencia = " << frecuenciaModa << endl;

    return 0;
}
