#include <iostream>

using namespace std;

int main() {

    int radio;

    int pi = 3.14159;

    cout << "Ingrese el radio: ";

    cin >> radio;

    cout << "El diametro del circulo es: " << 2*radio << endl;
    cout << "La circunferencia es: " << 2*pi*radio << endl;
    cout << "El area del circulo es: " << pi*(radio*radio);

    return 0;

}