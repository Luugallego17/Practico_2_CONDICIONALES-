#include <iostream>
using namespace std;

int main() {
    int edad, experiencia;
    cout << "Ingrese la edad y los años de experiencia del candidato:" << endl;
    cin >> edad >> experiencia;

    if (edad < 18) {
        cout << "Ningún puesto disponible" << endl;
    } else if (experiencia >= 5) {
        cout << "Director de proyecto senior" << endl;
    } else if (experiencia >= 3) {
        cout << "Director de proyecto" << endl;
    } else {
        cout << "Coordinador de proyecto" << endl;
    }

    return 0;
}