#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    double fixed_salary, sales, total_salary;

    std::cin >> name >> fixed_salary >> sales;
    total_salary = fixed_salary + (sales * 0.15);

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << total_salary << std::endl;

    return 0;
}
