/*
 * Ejercicio 31. Frecuencia de cada elemento
 * Nivel 2 - Intermedio
 *
 * Enunciado: Para cada valor distinto, mostrar cuantas veces
 * aparece. No usar estructuras de datos de la STL (mapas, etc.).
 * Se muestran en el orden de primera aparicion.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=8; 3 1 3 2 1 3 4 2
 * Salida esperada:
 *   Ejemplo: 3 -> 3; 1 -> 2; 2 -> 2; 4 -> 1
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * contenedores de la STL.
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

    for (int i = 0; i < totalDistintos; i++) {
        cout << valoresDistintos[i] << " -> " << frecuencias[i];
        if (i < totalDistintos - 1) cout << "; ";
    }
    cout << endl;

    return 0;
}
