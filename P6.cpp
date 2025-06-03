#include<iostream>
using namespace std;

int main() {
    float promedio, pension, total;
    cout << "$---------------------------------$"<<endl; 
    cout << "|        ESTIMULO ACADEMICO       | " <<endl;
    cout << "$---------------------------------$"<<endl<<""<<endl;
    cout << "Por favor ingrese su promedio general entre 0 y 20: "<<endl;
    cin >> promedio;
    cout << "Ahora ingrese el costo de la pension: "<<endl;
    cin >> pension;

    if(promedio >= 18) {
        total = pension * 0.7;
        cout<<"¡Felicidades! por tu buen promedio obtendras un descuento del 30%"<<endl;
    } else {
        total = pension * 1.18;
		        cout<<"¡Se le va a incluir un 18% de IGV al precio total!"<<endl; 
    }

    cout << "Por lo que su total a pagar sera de S/. " << total << endl;
    
    return 0;
}

