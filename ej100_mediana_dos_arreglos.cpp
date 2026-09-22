// EJERCICIO 100: Mediana de dos arreglos ordenados
// Enunciado: Dados dos arreglos ordenados A y B, calcular la mediana conjunta sin construir necesariamente un tercer arreglo completo. Como reto, buscar O(log(min(N,M))).
// Restricción: resolver sin std::vector.



#include <iostream>
using namespace std;

int main() {
    const int N = 4, M = 4;
    int A[N], B[M];

    cout << "Ingrese " << N << " elementos de A (ordenados):" << endl;
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
    cout << "Ingrese " << M << " elementos de B (ordenados):" << endl;
    for (int i = 0; i < M; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    // Búsqueda binaria sobre el arreglo más corto
    int total = N + M;
    int mitad = (total + 1) / 2;

    if (N > M) {
        // Asegurar que A sea el más corto
        for (int i = 0; i < N; i++) {
            int aux = A[i];
            A[i] = B[i];
            B[i] = aux;
        }
    }

    int bajo = 0, alto = N;
    double mediana;

    while (bajo <= alto) {
        int i = (bajo + alto) / 2;
        int j = mitad - i;

        int Aizq = (i == 0 ? -1000000 : A[i - 1]);
        int Ader = (i == N ? 1000000 : A[i]);
        int Bizq = (j ==  ​0 ? -1000000 : B[j - 1]);
        int Bder = (j == M ? 1000000 : B[j]);

        if (Aizq <= Bder && Bizq <= Ader) {
            if (total % 2 ==  ​1) {
                mediana = (Aizq > Bizq ? Aizq : Bizq);
            } else {
                int maxIzq = (Aizq > Bizq ? Aizq : Bizq);
                int minDer = (Ader < Bder ? Ader : Bder);
                mediana = (maxIzq + minDer) / 2.0;
            }
break;
        } else if (Aizq > Bder) {
            alto = i - 1;
        } else {
            bajo = i + 1;
        }
    }

    cout << "La mediana conjunta es: " << mediana << endl;

    return 0;
}
