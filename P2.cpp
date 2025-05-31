#include<iostream>
using namespace std;

int main() {
    float compra, total;
    cout << "Ingrese el monto de la compra: ";
    cin >> compra;

    if(compra > 1000) {
        total = compra * 0.8; 
    } else {
        total = compra;
    }

    cout << "Total a pagar: S/." << total << endl;
    return 0;
}

