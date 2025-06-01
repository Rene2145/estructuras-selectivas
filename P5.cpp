#include<iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    int pulsaciones;
    cout<<">>>==============================<<<"<<endl;
	cout<<"          AEROBISLUD 10S"<<endl;
	cout<<"         monitor de pulso"<<endl;
	cout<<">>>==============================<<<"<<endl;
	cout<<""<<endl;
    cout << "Porfavor, ingrese su edad: "<<endl;
    cin >> edad;
    if (edad <= 0) {
        cout << "¡Tu edad es incorrecta!"<<endl<<"No podemos calcular tus pulsaciones."<< endl;
        }else{
        	cout << "Ahora, ingrese su sexo: "<<endl;
    		cout<<"1 <- Masculino"<<endl;
    		cout<<"2 <- Femenino"<<endl;
    		cin >> sexo;
    		if( sexo == '1') {
        	pulsaciones = (220 - edad) / 10.0;
        	cout << "¡Listo, amigo! Considerando tu edad el numero de pulsaciones que debes alcanzar es de " << pulsaciones <<"."<<endl;
   			} else {
        		pulsaciones = (210 - edad) / 10.0;
        	cout << "Muy bien amiga, Considerando tu edad el numero de pulsaciones que debes alcanzar es de " << pulsaciones <<"."<<endl;
    		}    
		}
    
    return 0;
}

