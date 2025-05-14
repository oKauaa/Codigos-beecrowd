#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Verifica se os valores formam um triângulo (regra da desigualdade triangular)
    if (A + B > C && A + C > B && B + C > A) {
        double perimetro = A + B + C;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    } else {
        double area = ((A + B) * C) / 2.0;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

    return 0;
}
