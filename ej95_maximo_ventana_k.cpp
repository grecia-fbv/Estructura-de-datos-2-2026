/*
 * Ejercicio 95. Maximo de cada ventana de tamano K
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Para cada ventana consecutiva de K elementos,
 * mostrar el maximo usando una cola doble manual basada en
 * arreglo de indices.
 *
 * Entrada: N, K y luego los N valores.
 *   Ejemplo: N=8; K=3; 1 3 -1 -3 5 3 6 7
 * Salida esperada:
 *   Ejemplo: 3 3 5 5 6 7
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    int v[MAX_N];
    int deque_[MAX_N]; // guarda indices, valores decrecientes
    int frente = 0, final_ = -1;

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];

    bool primero = true;

    for (int i = 0; i < n; i++) {
        while (frente <= final_ && deque_[frente] <= i - k) frente++;

        while (frente <= final_ && v[deque_[final_]] <= v[i]) final_--;

        deque_[++final_] = i;

        if (i >= k - 1) {
            if (!primero) cout << " ";
            cout << v[deque_[frente]];
            primero = false;
        }
    }
    cout << endl;

    return 0;
}
