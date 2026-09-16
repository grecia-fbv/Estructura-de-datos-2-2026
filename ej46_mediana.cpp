/*
 * Ejercicio 46. Mediana de un conjunto
 * Nivel 3 - Aplicacion y algoritmos
 *
 * Enunciado: Leer N valores, ordenarlos sin std::sort y calcular
 * la mediana. Para N par, promediar los dos centrales.
 *
 * Entrada: N y luego los N valores.
 *   Ejemplo: N=6; 7 1 3 9 5 11
 * Salida esperada:
 *   Ejemplo: Mediana = 6
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector ni
 * std::sort.
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int MAX_N = 100;

// Formatea un double: sin decimales si es entero, sin ceros
// sobrantes si tiene parte decimal.
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
    int n;
    int v[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    // Ordenamiento por insercion (manual, sin std::sort).
    for (int i = 1; i < n; i++) {
        int clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = clave;
    }

    double mediana;
    if (n % 2 == 1) {
        mediana = v[n / 2];
    } else {
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }

    cout << "Mediana = " << formatearDecimal(mediana) << endl;

    return 0;
}
