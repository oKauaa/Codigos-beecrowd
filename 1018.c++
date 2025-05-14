#include <iostream>

int main() {
    int N;

    std::cin >> N;

    std::cout << N << std::endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 7; i++) {
        int quantidade = N / notas[i];
        N = N % notas[i];
        std::cout << quantidade << " nota(s) de R$ " << notas[i] << ",00" << std::endl;
    }

    return 0;
}
