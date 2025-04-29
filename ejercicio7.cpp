#include <iostream>
using namespace std;

int main()
{
    string libro_a;
    string libro_b;
    string libro_c;
    cout << "Introduce el nombre del primer libro " << endl;
    getline (cin, libro_a);
    
    cout << "Introduce el nombre del segundo libro " << endl;
    getline (cin, libro_b);
    
    cout << "Introduce el nombre del tercer libro " << endl;
    getline (cin, libro_c);
    
    cout << libro_c << endl;
    cout << libro_b << endl;
    cout << libro_a << endl;
    
    return 0;
}