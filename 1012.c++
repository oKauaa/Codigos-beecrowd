#include <iostream>
#include <iomanip>

int main() {
    double A, B, C;

    std::cin >> A >> B >> C;

    double area_triangle = (A * C) / 2;
    double area_circle = 3.14159 * C * C;
    double area_trapezoid = ((A + B) * C) / 2;
    double area_square = B * B;
    double area_rectangle = A * B;

    std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << area_triangle << std::endl;
    std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << area_circle << std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << area_trapezoid << std::endl;
    std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << area_square << std::endl;
    std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << area_rectangle << std::endl;

    return 0;
}
