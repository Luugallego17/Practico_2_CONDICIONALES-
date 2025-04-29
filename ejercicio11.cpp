#include <iostream>
using namespace std;

int main() {
    double N;
    cout << "introduce el valor del producto " << endl;
    cin >> N;
    double A;
    cout << "introduce el valor del rublo 1 " << endl;
    cin >> A;
    double B;
    cout << "introduce el valor del rublo 2 " << endl;
    cin >> B;
    double X;
    cout << "introduce el valor del descuento 1 " << endl;
    cin >> X;
    double Y;
    cout << "introduce el valor del descuento 2 " << endl;
    cin >> Y;

    if (N > B) {
        N -= N * (Y / 100);
    } else if (N > A) {
        N -= N * (X / 100);
    }

    cout << "El valor con el descuento aplicado es " << N << endl;
    return 0;
}