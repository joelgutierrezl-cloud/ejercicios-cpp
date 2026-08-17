#include <iostream>
using namespace std;

int main (){
    float suma = 0 , promedio;
    int calificaciones[5];

    cout << "ingresa 5 calificaciones:" << endl;

    for(int i = 0; i < 5; i++){
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    promedio = suma / 5;

    if(promedio >= 6){
        cout << "aprobado" << endl;
    } else {
        cout << "reprobado" << endl;
    }

    return 0;
}