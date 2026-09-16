/*
 * Ejercicio 90. Maxima area entre dos barras
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Dadas alturas, escoger dos posiciones que formen el
 * contenedor de mayor area: min(altura[i], altura[j]) * (j - i).
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=9; 1 8 6 2 5 4 8 3 7
 * Salida esperada:
 *   Ejemplo: Area maxima = 49
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int altura[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> altura[i];

    int izquierda = 0, derecha = n - 1;
    long long areaMaxima = 0;

    while (izquierda < derecha) {
        int alturaMinima = min(altura[izquierda], altura[derecha]);
        long long area = (long long)alturaMinima * (derecha - izquierda);
        if (area > areaMaxima) areaMaxima = area;

        if (altura[izquierda] < altura[derecha]) izquierda++;
        else derecha--;
    }

    cout << "Area maxima = " << areaMaxima << endl;

    return 0;
}
