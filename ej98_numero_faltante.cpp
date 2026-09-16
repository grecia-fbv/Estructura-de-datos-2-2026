/*
 * Ejercicio 98. Numero faltante en 0..N
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Se reciben N valores distintos del rango 0..N; falta
 * exactamente uno. Encontrarlo sin ordenar, usando suma o XOR.
 * Esta version usa XOR, que evita cualquier riesgo de
 * desbordamiento aritmetico.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=5; valores: 3 0 1 5 2
 * Salida esperada:
 *   Ejemplo: Faltante = 4
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

    // XOR de todos los numeros de 0 a N.
    int xorCompleto = 0;
    for (int i = 0; i <= n; i++) xorCompleto ^= i;

    // XOR de los valores leidos.
    int xorValores = 0;
    for (int i = 0; i < n; i++) xorValores ^= v[i];

    int faltante = xorCompleto ^ xorValores;

    cout << "Faltante = " << faltante << endl;

    return 0;
}
