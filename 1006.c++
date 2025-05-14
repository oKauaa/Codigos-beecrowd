#include <iostream>
#include <iomanip>

int main() {
    double A, B, C, MEDIA;

    std::cin >> A >> B >> C;
    MEDIA = (A * 2 + B * 3 + C * 5) / 10.0;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << MEDIA << std::endl;

    return 0;
}
