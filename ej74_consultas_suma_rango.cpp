/*
 * Ejercicio 74. Consultas de suma por rango
 * Nivel 4 - Avanzado
 *
 * Enunciado: Construir prefijos y responder Q consultas [L,R] en
 * O(1) por consulta despues del preprocesamiento.
 *
 * Entrada: N, los N valores de A, Q y luego Q pares L R.
 *   Ejemplo: N=6; A: 2 4 1 3 5 2; Q=3; rangos: [0,2] [2,4] [1,5]
 * Salida esperada:
 *   Ejemplo: 7; 9; 15
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n;
    int a[MAX_N];
    long long prefijos[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    prefijos[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefijos[i] = prefijos[i - 1] + a[i];
    }

    int q;
    cin >> q;

    for (int consulta = 0; consulta < q; consulta++) {
        int l, r;
        cin >> l >> r;

        long long suma = (l == 0) ? prefijos[r] : prefijos[r] - prefijos[l - 1];

        cout << suma;
        if (consulta < q - 1) cout << "; ";
    }
    cout << endl;

    return 0;
}
