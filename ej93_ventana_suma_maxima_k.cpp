/*
 * Ejercicio 93. Ventana de suma maxima de tamano K
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Encontrar la suma maxima de exactamente K elementos
 * consecutivos mediante ventana deslizante.
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=8; K=3; 2 1 5 1 3 2 6 2
 * Salida esperada:
 *   Ejemplo: Suma maxima = 11; Ventana: 3 2 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    int v[MAX_N];

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];

    long long sumaVentana = 0;
    for (int i = 0; i < k; i++) sumaVentana += v[i];

    long long mejorSuma = sumaVentana;
    int mejorInicio = 0;

    for (int i = k; i < n; i++) {
        sumaVentana += v[i] - v[i - k];
        if (sumaVentana > mejorSuma) {
            mejorSuma = sumaVentana;
            mejorInicio = i - k + 1;
        }
    }

    cout << "Suma maxima = " << mejorSuma << "; Ventana:";
    for (int i = mejorInicio; i < mejorInicio + k; i++) cout << " " << v[i];
    cout << endl;

    return 0;
}
