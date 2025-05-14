#include <iostream>
#include <iomanip>

int main() {
    double R, volume;
    const double pi = 3.14159;

    std::cin >> R;
    volume = (4.0 / 3) * pi * (R * R * R);

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;

    return 0;
}
