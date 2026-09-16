/*
 * Ejercicio 100. Mediana de dos arreglos ordenados
 * Nivel 5 - Reto/Experto
 *
 * Enunciado: Dados dos arreglos ordenados A y B, calcular la
 * mediana conjunta sin construir necesariamente un tercer arreglo
 * completo. Como reto, se busca complejidad O(log(min(N,M)))
 * mediante busqueda binaria por particiones.
 *
 * Entrada: NA, los NA valores de A, NB, los NB valores de B.
 *   Ejemplo: A: 1 3 8; B: 7 9 10 11
 * Salida esperada:
 *   Ejemplo: Mediana = 8
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int MAX_N = 100;
const long long INF = 2000000000LL;

string formatearDecimal(double x) {
    ostringstream oss;
    oss.precision(6);
    oss << fixed << x;
    string s = oss.str();
    size_t punto = s.find('.');
    if (punto != string::npos) {
        size_t ultimo = s.find_last_not_of('0');
        if (ultimo == punto) ultimo--;
        s = s.substr(0, ultimo + 1);
    }
    return s;
}

int main() {
    int na, nb;
    long long a[MAX_N], b[MAX_N];

    cin >> na;
    for (int i = 0; i < na; i++) cin >> a[i];
    cin >> nb;
    for (int i = 0; i < nb; i++) cin >> b[i];

    // Aseguramos que A sea el arreglo mas pequeno (o igual) para
    // que la busqueda binaria sea O(log(min(N,M))).
    long long *menor = a, *mayor = b;
    int n = na, m = nb;
    if (n > m) {
        menor = b; mayor = a;
        n = nb; m = na;
    }

    int lo = 0, hi = n;
    double mediana = 0;

    while (lo <= hi) {
        int i = (lo + hi) / 2;             // particion en el arreglo menor
        int j = (n + m + 1) / 2 - i;        // particion en el arreglo mayor

        long long izqMenor = (i == 0) ? -INF : menor[i - 1];
        long long derMenor = (i == n) ? INF : menor[i];
        long long izqMayor = (j == 0) ? -INF : mayor[j - 1];
        long long derMayor = (j == m) ? INF : mayor[j];

        if (izqMenor <= derMayor && izqMayor <= derMenor) {
            if ((n + m) % 2 == 0) {
                long long maxIzquierda = max(izqMenor, izqMayor);
                long long minDerecha = min(derMenor, derMayor);
                mediana = (maxIzquierda + minDerecha) / 2.0;
            } else {
                mediana = (double)max(izqMenor, izqMayor);
            }
            break;
        } else if (izqMenor > derMayor) {
            hi = i - 1;
        } else {
            lo = i + 1;
        }
    }

    cout << "Mediana = " << formatearDecimal(mediana) << endl;

    return 0;
}
