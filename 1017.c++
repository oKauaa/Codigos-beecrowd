#include <iostream>
#include <iomanip>

int main() {
    int tempo, velocidade;

    std::cin >> tempo >> velocidade;
    
    double distancia = tempo * velocidade;

    // O consumo é calculado dividindo a distância pela eficiência do carro (12 km/l)
    double litros = distancia / 12.0;

    std::cout << std::fixed << std::setprecision(3) << litros << std::endl;

    return 0;
}
