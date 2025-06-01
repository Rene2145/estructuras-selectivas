#include<iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float pulsaciones;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;

    if(sexo == 'F' || sexo == 'f') {
        pulsaciones = (220 - edad) / 10.0;
    } else {
        pulsaciones = (210 - edad) / 10.0;
    }

    cout << "Pulsaciones cada 10 segundos: " << pulsaciones << endl;
    
    return 0;
}

