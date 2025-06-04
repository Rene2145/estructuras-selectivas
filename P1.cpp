#include<iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;
    cout << "Ingrese las 3 calificaciones par verificar si el alumno esta aprobado o reprobado: "<< endl;
    cout << "Su promedio de tres calificaciones debe ser mayor o igual a 70 para aprobar; "<< endl;
    cout << "De otro modo estara desaprobado; "<< endl;

    cin >> n1 >> n2 >> n3;

    promedio = (n1 + n2 + n3) / 3;

    if(promedio >= 70) {
        cout << "El siguiente alumno esta aprobado" << endl;
    } else {
        cout << "El siguiente alumno esta reprobado" << endl;
    }

    return 0;
}

