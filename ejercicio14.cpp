#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
     cout << "introduce el valor del radio" << endl;
    cin >> radius;

    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        double area = 4 * M_PI * pow(radius, 2);
        cout << fixed << area << endl;
    }

    return 0;
}