#include<iostream>
using namespace std;

int main() {
    int cantidad;
    float precio,descuento, total;
    cout<<"DESCUENTOS"<<endl;
    cout<<"10% SI COMPRAN HASTA 2 CAMISAS"<<endl;
    cout<<"20% SI COMPRAN 3 O MAS CAMISAS"<<endl;
    cout << "Ingrese el precio para la camisa: "<<endl;
    cin >> precio;
    cout << "Ingrese la cantidad de camisas que va a comprar: "<<endl;
    cin >> cantidad;

    total = precio * cantidad;

    if(cantidad >= 3) {
        total=total*0.8;
        descuento=total*0.2; 
    	cout<<"RECIBO DE COMPRA "<<endl;
		cout<<"Monto de la compra: "<<precio<<endl;
		cout<<"Descuento del 20%: "<<descuento<<endl;
		cout << "Total a pagar: S/." << total << endl;

    } else {
        total=total*0.9; 
        descuento=total*0.1; 
    	cout<<"RECIBO DE COMPRA "<<endl;
		cout<<"Monto de la compra: "<<precio<<endl;
		cout<<"Descuento del 10%: "<<descuento<<endl;
        cout << "Total a pagar: S/." << total << endl;
    }
    return 0;
}

