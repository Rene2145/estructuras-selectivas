#include<iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;
    cout << "Ingrese las 3 calificaciones: "<< endl;
    cin >> n1 >> n2 >> n3;

    promedio = (n1 + n2 + n3) / 3;

    if(promedio >= 70) {
        cout << "Alumno aprobado" << endl;
    } else {
        cout << "Alumno reprobado" << endl;
    }

    return 0;
}

