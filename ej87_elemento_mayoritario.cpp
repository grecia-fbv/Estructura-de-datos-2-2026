/*
 * Ejercicio 87. Elemento mayoritario
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Determinar si existe un valor que aparezca mas de
 * N/2 veces. Implementar Boyer-Moore y verificar el candidato.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; 2 2 1 2 3 2 2 4 2
 * Salida esperada:
 *   Ejemplo: Mayoritario = 2
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

    // Algoritmo de votacion de Boyer-Moore.
    int candidato = v[0];
    int contador = 1;

    for (int i = 1; i < n; i++) {
        if (contador == 0) {
            candidato = v[i];
            contador = 1;
        } else if (v[i] == candidato) {
            contador++;
        } else {
            contador--;
        }
    }

    // Verificacion del candidato.
    int apariciones = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == candidato) apariciones++;
    }

    if (apariciones > n / 2) {
        cout << "Mayoritario = " << candidato << endl;
    } else {
        cout << "No existe elemento mayoritario" << endl;
    }

    return 0;
}
