#include <iostream>
#include <iomanip>

int main() {
    int code1, num1, code2, num2;
    double price1, price2, total;

    std::cin >> code1 >> num1 >> price1;
    std::cin >> code2 >> num2 >> price2;

    total = (num1 * price1) + (num2 * price2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
