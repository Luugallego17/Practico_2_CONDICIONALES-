#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linea_5;
    string linea_4;
    string linea_3;

    cout << "Ingresa tres palabras " << endl;
    cin >> linea_5;
    cin >> linea_4;
    cin >> linea_3;

    if (linea_4 < linea_5) {
        cout << "la menor es: " << linea_4 << endl;
    } else if (linea_3 < linea_4) {
        cout << "la menor es: " << linea_3 << endl;
    } else if (linea_5 < linea_3) {
        cout << "la menor es: " << linea_5 << endl;
    }

    return 0;
}