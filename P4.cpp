#include<iostream>
using namespace std;

int main() {
    float compra, descuento;
    int numero;
    cout << "+--------------------------+"<<endl;
    cout << "|  PROMOCION & DESCUENTOS  |"<<endl;
	cout << "|   PARA TODO EL PUBLICO   |"<<endl; 
    cout << "+--------------------------+"<<endl;
    cout << ""<<endl;
    
    cout << "Ingresa el total de tu compra: "<<endl;
    cin >> compra;

	if(compra<=0){
		cout<<"¡Monto invalido!"<<endl;
		cout<<"Perdiste tu descuento.";
		return 0;
	}
	cout <<"Bien, ahora para poder participar"<<endl;
	cout <<"debes ingresar un numero del 1 al 100: "<<endl;
    cin >> numero;
    
    if(numero < 74) {
        descuento = compra * 0.15;
    cout<<"¡FELICIDADES!"<<endl;
    cout<<"Descuento del 15% obtenido: " << endl;
    } else {
        descuento = compra * 0.20;
    cout<<"¡FELICIDADES!";
    cout<<"Descuento del 20% obtenido: " << endl;
    }
    cout << "Tu compra es de S/." << compra - descuento << endl;
    
    return 0;
}

