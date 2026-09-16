/*
 * Ejercicio 4. Calcular promedio
 * Nivel 1 - Basico
 *
 * Enunciado: Leer 6 numeros reales y calcular su promedio aritmetico.
 *
 * Entrada: 6 valores reales.
 *   Ejemplo: 10 12 14 16 18 20
 * Salida esperada:
 *   Ejemplo: Promedio = 15
 *
 * Restriccion: resuelto con arreglos nativos, sin std::vector.
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Formatea un double: sin decimales si es entero, y sin ceros
// sobrantes si tiene parte decimal (15 -> "15", 17.5 -> "17.5").
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
    const int N = 6;
    double v[N];
    double suma = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        suma += v[i];
    }

    double promedio = suma / N;
    cout << "Promedio = " << formatearDecimal(promedio) << endl;

    return 0;
}
