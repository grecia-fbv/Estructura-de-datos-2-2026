/*
 * Ejercicio 3. Sumar todos los elementos
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 5 enteros y calcular la suma total de sus elementos.
 *
 * Entrada: 5 valores enteros.
 *   Ejemplo: 4 7 2 9 3
 * Salida esperada:
 *   Ejemplo: Suma = 25
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int v[N];
    int suma = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        suma += v[i];
    }

    cout << "Suma = " << suma << endl;

    return 0;
}
