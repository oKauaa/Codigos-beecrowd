#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, quantidade;
    cin >> codigo >> quantidade;

    double preco;

    switch (codigo) {
        case 1:
            preco = 4.00;
            break;
        case 2:
            preco = 4.50;
            break;
        case 3:
            preco = 5.00;
            break;
        case 4:
            preco = 2.00;
            break;
        case 5:
            preco = 1.50;
            break;
        default:
            preco = 0.0; 
    }

    double total = preco * quantidade;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}
