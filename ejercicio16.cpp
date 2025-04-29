#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    cout << "introduzca cinco palabras separadas por espacios" << endl;
    getline(cin, line);

    istringstream iss(line);
    string word;
    string result = "";

    while (iss >> word) {
        result += word[0];
    }

    cout << result << endl;

    if (result[0] == result[result.length() - 1]) {
        cout << "Hemos encontrado algo!" << endl;
    } else {
        cout << "Aun sin suerte" << endl;
    }

    return 0;
}