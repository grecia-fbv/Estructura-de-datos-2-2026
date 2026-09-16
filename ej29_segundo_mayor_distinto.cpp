/*
 * Ejercicio 29. Segundo mayor distinto
 * Nivel 2 - Intermedio
 *
 * Enunciado: Encontrar el segundo valor mayor distinto del
 * arreglo. Si no existe, indicarlo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 4 9 2 9 7 5 1
 * Salida esperada:
 *   Ejemplo: Segundo mayor = 7
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;
const int NEG_INF = -2000000000;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int mayor = NEG_INF, segundoMayor = NEG_INF;
    for (int i = 0; i < n; i++) {
        if (v[i] > mayor) {
            segundoMayor = mayor;
            mayor = v[i];
        } else if (v[i] < mayor && v[i] > segundoMayor) {
            segundoMayor = v[i];
        }
    }

    if (segundoMayor == NEG_INF) {
        cout << "Segundo mayor no existe" << endl;
    } else {
        cout << "Segundo mayor = " << segundoMayor << endl;
    }

    return 0;
}
