#include<iostream>
using namespace std;

int main() {
    int cantidad;
    float precio, total;
    cout << "Ingrese el precio de la camisa: ";
    cin >> precio;
    cout << "Ingrese la cantidad de camisas: ";
    cin >> cantidad;

    total = precio * cantidad;

    if(cantidad >= 3) {
        total *= 0.8; 
    } else {
        total *= 0.9; 
    }

    cout << "Total a pagar: S/." << total << endl;
    return 0;
}

