#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cout << "Intoduce el valor de A B y C " << endl;
    cin >> A >> B >> C;

    double discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        double raiz2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << raiz1 << " " << raiz2 << endl;
    } 
    else if (discriminante == 0) {
        double raiz = -B / (2 * A);
        cout << raiz << endl; 
    } else {
        cout << "No hay solución" << endl;
    }

    return 0;
}