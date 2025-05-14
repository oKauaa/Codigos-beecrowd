#include <iostream>

int main() {
    int dias;

    std::cin >> dias;

    int anos = dias / 365;       
    dias %= 365;                  
    int meses = dias / 30;        
    dias %= 30;                   

    std::cout << anos << " ano(s)" << std::endl;
    std::cout << meses << " mes(es)" << std::endl;
    std::cout << dias << " dia(s)" << std::endl;

    return 0;
}
