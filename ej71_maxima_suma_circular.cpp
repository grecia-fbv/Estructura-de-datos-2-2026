/*
 * Ejercicio 71. Maxima suma circular
 * Nivel 4 - Avanzado
 *
 * Enunciado: Calcular la suma maxima de un subarreglo contiguo
 * considerando que el arreglo es circular.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 8 -1 3 4 -6 7 -2
 * Salida esperada segun el documento base: Suma maxima circular = 16
 *
 * NOTA TECNICA: al verificar el algoritmo estandar (Kadane normal
 * combinado con "suma total - Kadane minimo" para el caso circular)
 * sobre el ejemplo anterior, el resultado correcto es 19, obtenido
 * con el segmento circular {7, -2, 8, -1, 3, 4} (indices 5,6,0,1,2,3).
 * El valor 16 que figura en el enunciado original no corresponde a
 * ningun subarreglo (contiguo o circular) de esos datos, por lo que
 * se considera una errata del material; este programa implementa el
 * algoritmo correcto y producira 19 para el ejemplo dado.
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

    long long total = 0;
    long long sumaMaxActual = v[0], sumaMaxGlobal = v[0];
    long long sumaMinActual = v[0], sumaMinGlobal = v[0];

    for (int i = 0; i < n; i++) total += v[i];

    for (int i = 1; i < n; i++) {
        sumaMaxActual = max((long long)v[i], sumaMaxActual + v[i]);
        sumaMaxGlobal = max(sumaMaxGlobal, sumaMaxActual);

        sumaMinActual = min((long long)v[i], sumaMinActual + v[i]);
        sumaMinGlobal = min(sumaMinGlobal, sumaMinActual);
    }

    long long resultado;
    if (sumaMaxGlobal < 0) {
        // Todos los elementos son negativos: la version circular no
        // ayuda, la respuesta es el maximo subarreglo normal.
        resultado = sumaMaxGlobal;
    } else {
        long long candidatoCircular = total - sumaMinGlobal;
        resultado = max(sumaMaxGlobal, candidatoCircular);
    }

    cout << "Suma maxima circular = " << resultado << endl;

    return 0;
}
