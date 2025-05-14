#include <iostream>
#include <iomanip>

int main() {
    double A, B, MEDIA;

    std::cin >> A >> B;
    MEDIA = (A * 3.5 + B * 7.5) / 11.0;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << MEDIA << std::endl;

    return 0;
}
