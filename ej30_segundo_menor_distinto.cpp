/*
 * Ejercicio 30. Segundo menor distinto
 * Nivel 2 - Intermedio
 *
 * Enunciado: Encontrar el segundo valor menor distinto del
 * arreglo. Si no existe, indicarlo.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=7; 4 1 2 1 7 5 9
 * Salida esperada:
 *   Ejemplo: Segundo menor = 2
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
using namespace std;

const int MAX_N = 100;
const int POS_INF = 2000000000;

int main() {
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    int menor = POS_INF, segundoMenor = POS_INF;
    for (int i = 0; i < n; i++) {
        if (v[i] < menor) {
            segundoMenor = menor;
            menor = v[i];
        } else if (v[i] > menor && v[i] < segundoMenor) {
            segundoMenor = v[i];
        }
    }

    if (segundoMenor == POS_INF) {
        cout << "Segundo menor no existe" << endl;
    } else {
        cout << "Segundo menor = " << segundoMenor << endl;
    }

    return 0;
}
