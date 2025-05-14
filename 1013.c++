#include <iostream>

int main() {
    int a, b, c, maior;

    std::cin >> a >> b >> c;

    maior = (a > b) ? a : b;
    maior = (maior > c) ? maior : c;

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}
