#include <iostream>

using namespace std;

int main(){

    int num;
    int num2;

    cout << "Ingrese el primer numero: ";
    cin >> num;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if ((num+num2) % 2 == 0){
        cout << "La suma de los numeros es PAR" << endl;
    } else {
        cout << "La suma de los numeros es IMPAR" << endl;
    }

    return 0;

}