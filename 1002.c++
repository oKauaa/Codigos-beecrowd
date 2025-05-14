#include <iostream>
#include <iomanip>

int main() {
    double raio, area;
    const double PI = 3.14159;

    std::cin >> raio;             
    area = PI * raio * raio;      

    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}