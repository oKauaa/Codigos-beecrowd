#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    
    int orig1 = a, orig2 = b, orig3 = c;

    
    int valores[3] = {a, b, c};
    sort(valores, valores + 3);

   
    cout << valores[0] << endl;
    cout << valores[1] << endl;
    cout << valores[2] << endl;

    
    cout << endl;

    // Imprime os valores na ordem original
    cout << orig1 << endl;
    cout << orig2 << endl;
    cout << orig3 << endl;

    return 0;
}
