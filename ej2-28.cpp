#include <iostream>

using namespace std;

int main(){

    int num, num1, num2, num3 ,num4;

    cout << "Ingrese 4 numeros: ";// 9685
    cin >> num;

    num4 = num % 10; //5
    num3 = (num / 10) % 10; //8
    num2 = (num / 100) % 10; //6
    num1 = (num/1000) % 10;

    cout << num4 << "  " << num3 << "  " << num2 << "  " << num1 << "  " << endl;


    return 0; 

}