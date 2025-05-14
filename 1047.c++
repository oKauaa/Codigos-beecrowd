#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

   
    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;

    
    if (fim <= inicio) {
        fim += 24 * 60;
    }

    int duracao = fim - inicio;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
