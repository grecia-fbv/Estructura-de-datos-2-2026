/*
 * Ejercicio 54. Mezclar dos vectores intercalando
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Intercalar A y B: A[0], B[0], A[1], B[1]... Si tienen
 * distinto tamano, anexar los sobrantes al final.
 *
 * Entrada: NA, los NA valores de A, NB, los NB valores de B.
 *   Ejemplo: A: 1 2 3 4; B: 10 20 30
 * Salida esperada:
 *   Ejemplo: 1 10 2 20 3 30 4
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int na, nb;
    int a[MAX_N], b[MAX_N];
    int resultado[2 * MAX_N];
    int totalResultado = 0;

    cin >> na;
    for (int i = 0; i < na; i++) cin >> a[i];
    cin >> nb;
    for (int i = 0; i < nb; i++) cin >> b[i];

    int minimo = (na < nb) ? na : nb;

    for (int i = 0; i < minimo; i++) {
        resultado[totalResultado++] = a[i];
        resultado[totalResultado++] = b[i];
    }
    for (int i = minimo; i < na; i++) resultado[totalResultado++] = a[i];
    for (int i = minimo; i < nb; i++) resultado[totalResultado++] = b[i];

    for (int i = 0; i < totalResultado; i++) {
        cout << resultado[i];
        if (i < totalResultado - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
