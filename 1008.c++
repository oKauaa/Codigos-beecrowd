#include <iostream>
#include <iomanip>

int main() {
    int number, hours;
    double rate, salary;

    std::cin >> number >> hours >> rate;
    salary = hours * rate;

    std::cout << "NUMBER = " << number << std::endl;
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salary << std::endl;

    return 0;
}
