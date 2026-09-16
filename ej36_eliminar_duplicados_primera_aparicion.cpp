/*
 * Ejercicio 36. Eliminar duplicados conservando primera aparicion
 * Nivel 2 - Intermedio
 *
 * Enunciado: Construir el resultado sin valores repetidos y
 * respetando la primera aparicion de cada elemento.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=10; 4 2 4 7 2 9 7 1 4 5
 * Salida esperada:
 *   Ejemplo: 4 2 7 9 1 5
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int v[MAX_N];
    int resultado[MAX_N];
    int totalResultado = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        bool yaExiste = false;
        for (int j = 0; j < totalResultado; j++) {
            if (resultado[j] == v[i]) {
                yaExiste = true;
                break;
            }
        }

        if (!yaExiste) {
            resultado[totalResultado++] = v[i];
        }
    }

    for (int i = 0; i < totalResultado; i++) {
        cout << resultado[i];
        if (i < totalResultado - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
