#include <iostream>
using namespace std;
 
double sumar(double num1, double num2);

int main()
{
    double num1, num2;
    cout << "ingrese dos numeros " << endl;
    cin >> num1 >> num2;
    
    cout << "El resultado es " << sumar(num1, num2)<< endl;
    
    return 0;
}
    double sumar(double num1, double num2) {
    int resultado = num1 + num2;
    
    return resultado;
}