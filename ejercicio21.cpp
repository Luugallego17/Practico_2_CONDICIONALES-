#include <iostream>
using namespace std;

int main() {
    int numDocumentos;
    cout << "Ingrese el número de documentos encontrados:" << endl;
    cin >> numDocumentos;

    if (numDocumentos == 0) {
        cout << "No se encontraron documentos" << endl;
    } else if (numDocumentos == 1) {
        cout << "Se encontró un documento" << endl;
    } else {
        cout << numDocumentos << " documentos encontrados." << endl;
    }

    return 0;
}