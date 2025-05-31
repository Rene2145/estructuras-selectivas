#include<iostream>
using namespace std;

int main() {
    float compra,descuento, total;
    cout << "REALIZAMOS UN DESCUENTO DEL 20% CUYA COMPRA SUPERE LOS S/.1000 "<<endl;
    cout << "Ingrese el monto de la compra: "<<endl;
    cin >> compra;

    if(compra > 1000) {
        total = compra * 0.8;
		descuento=compra*0.2; 
    } else {
        total = compra;
    }
	cout<<"RECIBO DE COMPRA "<<endl;
	cout<<"Monto de la compra: "<<compra<<endl;
	cout<<"Descuento del 20%: "<<descuento<<endl;
    cout << "Total a pagar: S/." << total << endl;
    return 0;
}

