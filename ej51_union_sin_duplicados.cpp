/*
 * Ejercicio 51. Union sin duplicados
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Dados A y B, construir C con todos los valores
 * distintos que aparezcan en cualquiera de los dos arreglos.
 *
 * Entrada: NA, los NA valores de A, NB, los NB valores de B.
 *   Ejemplo: A: 1 2 3 4; B: 3 4 5 6
 * Salida esperada:
 *   Ejemplo: Union: 1 2 3 4 5 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int na, nb;
    int a[MAX_N], b[MAX_N];
    int c[2 * MAX_N];
    int totalC = 0;

    cin >> na;
    for (int i = 0; i < na; i++) cin >> a[i];
    cin >> nb;
    for (int i = 0; i < nb; i++) cin >> b[i];

    for (int i = 0; i < na; i++) {
        bool yaEsta = false;
        for (int j = 0; j < totalC; j++) {
            if (c[j] == a[i]) { yaEsta = true; break; }
        }
        if (!yaEsta) c[totalC++] = a[i];
    }

    for (int i = 0; i < nb; i++) {
        bool yaEsta = false;
        for (int j = 0; j < totalC; j++) {
            if (c[j] == b[i]) { yaEsta = true; break; }
        }
        if (!yaEsta) c[totalC++] = b[i];
    }

    cout << "Union:";
    for (int i = 0; i < totalC; i++) cout << " " << c[i];
    cout << endl;

    return 0;
}
