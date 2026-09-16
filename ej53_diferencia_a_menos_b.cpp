/*
 * Ejercicio 53. Diferencia A - B
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Construir un arreglo con valores distintos de A que
 * no esten presentes en B.
 *
 * Entrada: NA, los NA valores de A, NB, los NB valores de B.
 *   Ejemplo: A: 1 2 3 4 5; B: 2 4 6
 * Salida esperada:
 *   Ejemplo: Diferencia: 1 3 5
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int na, nb;
    int a[MAX_N], b[MAX_N];
    int resultado[MAX_N];
    int totalResultado = 0;

    cin >> na;
    for (int i = 0; i < na; i++) cin >> a[i];
    cin >> nb;
    for (int i = 0; i < nb; i++) cin >> b[i];

    for (int i = 0; i < na; i++) {
        bool estaEnB = false;
        for (int j = 0; j < nb; j++) {
            if (b[j] == a[i]) { estaEnB = true; break; }
        }
        if (estaEnB) continue;

        bool yaAgregado = false;
        for (int k = 0; k < totalResultado; k++) {
            if (resultado[k] == a[i]) { yaAgregado = true; break; }
        }
        if (!yaAgregado) resultado[totalResultado++] = a[i];
    }

    cout << "Diferencia:";
    for (int i = 0; i < totalResultado; i++) cout << " " << resultado[i];
    cout << endl;

    return 0;
}
