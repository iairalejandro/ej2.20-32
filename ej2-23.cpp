#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, num4, num5;
    cout << "Ingrese 5 numeros: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    int min = num1;
    int max = num1;

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        min = num1;
    if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        min = num2;
    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        min = num3;
    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        min = num4;
    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        min = num5;
    cout << "El numero mas bajo es " << min << endl;

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
        max = num1;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
        max = num2;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
        max = num3;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
        max = num4;
    if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
        max = num5;
    cout << "El numero mas alto es " << max << endl;


    return 0; 

}