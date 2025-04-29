#include <iostream>
 using namespace std;
 
int main()
{
    double num1, num2; 
    
    cout << "ingrese dos numeros " << endl;
    cin >> num1 >> num2;
    
     if (num2 != 0){
    cout << "El resultado es " << num1 / num2 << endl;
     } else {
    cout << "No se puede dividir entre 0 " << endl;     
     }
    
    return 0;
}