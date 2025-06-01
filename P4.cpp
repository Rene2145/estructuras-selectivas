#include<iostream>
using namespace std;

int main() {
    float compra, descuento;
    int numero;
    
    cout << "Ingrese el total de la compra: ";
    cin >> compra;
    cout << "Ingrese el número (azar): ";
    cin >> numero;

    if(numero < 74) {
        descuento = compra * 0.15;
    } else {
        descuento = compra * 0.20;
    }

    cout << "Descuento obtenido: S/." << descuento << endl;
    cout << "Total a pagar: S/." << compra - descuento << endl;
    
    return 0;
}

