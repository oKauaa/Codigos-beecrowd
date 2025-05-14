#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q, r;

    r = a % b;
    q = a / b;

    
    if (r < 0) {
        r += abs(b);
        q -= (b > 0) ? 1 : -1;
    }

    cout << q << " " << r << endl;

    return 0;
}
