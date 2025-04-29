#include <iostream>
using namespace std;

int main() {
	char caracter;
     cout << "introduce un caracter " << endl;
	cin >> caracter;

	if (caracter >= 'A' && caracter <= 'Z') {
		cout << "lower-case alphabet" << endl;
	} else if (caracter >= 'a' && caracter <= 'z') {
		cout << "upper-case alphabet" << endl;
	} else {
		cout << "not an alphabet" << endl;
	}

	return 0;
}