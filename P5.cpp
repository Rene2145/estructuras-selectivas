#include <iostream>
using namespace std;

int main() {
    int edad, pulsaciones;
    char sexo;

    cout << ">>>==============================<<<" << endl;
    cout << "          AEROBISLUD 10S" << endl;
    cout << "         Monitor de Pulso" << endl;
    cout << ">>>==============================<<<\n" << endl;

    cout << "Por favor, ingrese su edad: ";
    cin >> edad;

    if (edad <= 0) {
        cout << "\nEdad invalida!\nNo se puede calcular las pulsaciones." << endl;
        return 1;
    }

    cout << "\nIngrese su sexo:\n";
    cout << "1 <- Masculino\n";
    cout << "2 <- Femenino\n";
    cin >> sexo;

    if (sexo == '1') {
        pulsaciones = (220 - edad) / 10;
        cout << "\nListo, amigo! Segun tu edad, debes alcanzar " << pulsaciones << " pulsaciones." << endl;
    } else if (sexo == '2') {
        pulsaciones = (210 - edad) / 10;
        cout << "\nMuy bien amiga. Segun tu edad, debes alcanzar " << pulsaciones << " pulsaciones." << endl;
    } else {
        cout << "\nSexo invalido! Debes ingresar '1' o '2'." << endl;
    }

    return 0;
}