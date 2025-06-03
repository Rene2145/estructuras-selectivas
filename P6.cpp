#include<iostream>
using namespace std;

int main() {
    float promedio, pension, total;
    cout << "Ingrese su promedio: ";
    cin >> promedio;
    cout << "Ingrese el costo de la pensión: ";
    cin >> pension;

    if(promedio >= 18) {
        total = pension * 0.7; // 30% descuento
    } else {
        total = pension * 1.18; // Incluye 18% IGV
    }

    cout << "Total a pagar: S/." << total << endl;
    
    return 0;
}

