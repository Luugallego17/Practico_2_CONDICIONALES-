#include <iostream>
#include <string>
using namespace std;

int main() {
    string colorCasa1, colorCasa2, colorCasa3, colorReportado;
    int pisosCasa1, pisosCasa2, pisosCasa3, pisosReportados;

    cout << "introduzca el color y el número de pisos de las tres casas seguido del color y número de pisos informado por un transeúnte:" << endl;
    cin >> colorCasa1 >> pisosCasa1 >> colorCasa2 >> pisosCasa2 >> colorCasa3 >> pisosCasa3 >> colorReportado >> pisosReportados;

    if ((colorCasa1 == colorReportado || colorReportado == "?") && (pisosCasa1 == pisosReportados || pisosReportados == -1)) {
        cout << 1 << endl;
    }
    if ((colorCasa2 == colorReportado || colorReportado == "?") && (pisosCasa2 == pisosReportados || pisosReportados == -1)) {
        cout << 2 << endl;
    }
    if ((colorCasa3 == colorReportado || colorReportado == "?") && (pisosCasa3 == pisosReportados || pisosReportados == -1)) {
        cout << 3 << endl;
    } else {
        cout << "no existe casa con esas caracteristicas " << endl;
    }

    return 0;
}
