#include <iostream>
#include <string>
using namespace std;

int main() {
    string codigo_collar;
    cout << "Introduce el codigo encontrado" << endl;
    cin >> codigo_collar;

    if (codigo_collar == "11235813") {
        cout << "Se encontro Fibonacci" << endl;
    } else {
        cout << "Esto no es de Fibonacci" << endl;
    }

    return 0;
}