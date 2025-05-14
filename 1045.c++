#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Ordenar os lados de forma decrescente
    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

    // Verificar se os lados formam um triângulo
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        // Verificar os tipos de triângulo
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        // Verificar se é equilátero ou isósceles
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
