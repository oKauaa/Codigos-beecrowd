#include <iostream>
#include <iomanip>

int main() {
    int X; // Distância total percorrida (em Km)
    double Y; // Total de combustível gasto (em litros)

    std::cin >> X >> Y;

    double consumo_medio = X / Y;

    std::cout << std::fixed << std::setprecision(3) << consumo_medio << " km/l" << std::endl;

    return 0;
}
