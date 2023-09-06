#include <iostream>

using namespace std;

int main(){

    int peso;

    float altura;

    cout << "Como calcular el BMI? " <<endl;

    cout << "pesoEnKg/alturaEnMetros*alturaEnMetros" << endl;
    
    cout << "Ingrese su peso en kilogramos: ";

    cin >> peso;

    cout << "Ingrese su altura en metros: ";

    cin >> altura;

    cout << "BMI es igual: " << (peso/(altura*altura))<< endl;


    return 0; 

}