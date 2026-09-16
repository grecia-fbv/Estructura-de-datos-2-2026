/*
 * Ejercicio 59. Detectar palindromo numerico
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Determinar si el arreglo se lee igual de izquierda a
 * derecha y de derecha a izquierda.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 1 3 5 7 5 3 1
 * Salida esperada:
 *   Ejemplo: Palindromo: SI
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

    bool esPalindromo = true;
    int izquierda = 0, derecha = n - 1;
    while (izquierda < derecha) {
        if (v[izquierda] != v[derecha]) {
            esPalindromo = false;
            break;
        }
        izquierda++;
        derecha--;
    }

    cout << "Palindromo: " << (esPalindromo ? "SI" : "NO") << endl;

    return 0;
}
