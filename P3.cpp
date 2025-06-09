#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float precio, descuento, totalBruto, totalFinal;
    
    cout << "DESCUENTOS\n";
    cout << "10% si compra hasta 2 camisas\n";
    cout << "20% si compra 3 o más camisas\n\n";

    cout << "Ingrese el precio de una camisa: ";
    cin >> precio;

    cout << "Ingrese la cantidad de camisas a comprar: ";
    cin >> cantidad;

    totalBruto = precio * cantidad;

    if (cantidad >= 3) {
        descuento = totalBruto * 0.20;
    } else {
        descuento = totalBruto * 0.10;
    }

    totalFinal = totalBruto - descuento;

    cout << "\n----- RECIBO DE COMPRA -----\n";
    cout << "Monto total sin descuento: S/. " << totalBruto << endl;
    cout << "Descuento aplicado: S/. " << descuento << endl;
    cout << "Total a pagar: S/. " << totalFinal << endl;

    return 0;
}
