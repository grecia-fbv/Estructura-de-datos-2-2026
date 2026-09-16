/*
 * Ejercicio 99. Duplicado y faltante en 1..N
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: El arreglo contiene numeros de 1..N, pero uno esta
 * repetido y otro falta. Determinar ambos sin usar contenedores
 * STL.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 1 2 2 4 5 6
 * Salida esperada:
 *   Ejemplo: Duplicado = 2; Faltante = 3
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    long long v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    // sumaEsperada y sumaCuadradosEsperada corresponden a 1..N.
    long long sumaEsperada = (long long)n * (n + 1) / 2;
    long long sumaCuadradosEsperada = (long long)n * (n + 1) * (2 * n + 1) / 6;

    long long sumaReal = 0;
    long long sumaCuadradosReal = 0;
    for (int i = 0; i < n; i++) {
        sumaReal += v[i];
        sumaCuadradosReal += v[i] * v[i];
    }

    // dif1 = duplicado - faltante
    long long dif1 = sumaReal - sumaEsperada;
    // dif2 = duplicado^2 - faltante^2 = (duplicado - faltante) * (duplicado + faltante)
    long long dif2 = sumaCuadradosReal - sumaCuadradosEsperada;

    long long suma12 = dif2 / dif1; // duplicado + faltante

    long long duplicado = (dif1 + suma12) / 2;
    long long faltante = suma12 - duplicado;

    cout << "Duplicado = " << duplicado << "; Faltante = " << faltante << endl;

    return 0;
}
