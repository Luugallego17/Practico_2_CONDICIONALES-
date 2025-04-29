#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cout << "introduce los valores de a y b" << endl;
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << 0 << endl;
    } else {
        int sum = a + b;
        int numDigits = log10(sum) + 1;
        int product = sum * numDigits;

        cout << "El producto es " << product << endl;
    }

    return 0;
}