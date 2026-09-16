/*
 * Ejercicio 97. Maxima longitud con igual cantidad de 0 y 1
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Dado un arreglo binario, encontrar la longitud del
 * subarreglo contiguo mas largo con igual numero de ceros y unos.
 * No usar mapas STL; se usa un arreglo auxiliar indexado por la
 * suma desplazada (offset).
 *
 * Entrada: N y luego los N valores (0 o 1).
 *   Ejemplo: N=7; 0 0 1 0 1 1 0
 * Salida esperada:
 *   Ejemplo: Longitud maxima = 6
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

    // Se trata cada 0 como -1 y cada 1 como +1. Buscamos el mayor
    // tramo cuya suma sea 0. La suma parcial puede ir de -N a N,
    // por lo que se desplaza con un offset de tamano N para usarla
    // como indice de arreglo.
    int offset = n;
    int tamanoArreglo = 2 * n + 1;
    int primeraVezVisto[2 * MAX_N + 1];
    for (int i = 0; i < tamanoArreglo; i++) primeraVezVisto[i] = -2; // -2 = no visto

    int sumaActual = 0;
    primeraVezVisto[0 + offset] = -1; // suma 0 antes de empezar (indice -1)

    int mejorLongitud = 0;

    for (int i = 0; i < n; i++) {
        sumaActual += (v[i] == 1) ? 1 : -1;

        int indice = sumaActual + offset;
        if (primeraVezVisto[indice] == -2) {
            primeraVezVisto[indice] = i;
        } else {
            int longitud = i - primeraVezVisto[indice];
            if (longitud > mejorLongitud) mejorLongitud = longitud;
        }
    }

    cout << "Longitud maxima = " << mejorLongitud << endl;

    return 0;
}
