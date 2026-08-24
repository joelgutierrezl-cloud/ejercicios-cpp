#include <iostream>
using namespace std;

int main (){
    float suma = 0 , promedio, calificaciones[5];
     int aprobados = 0;

    cout << "ingresa 5 calificaciones:" << endl;

    for(int i = 0; i < 5; i++){
        cin >> calificaciones[i];
        suma += calificaciones[i];

        if(promedio >= 6){
       aprobados++;
    }
    

    cout<< "Calificaciones registradas:"<< endl;

    for(int i = 0; i < 5; i++){
        cout << calificaciones[i] << endl;
    }

    promedio =suma / 5;

    cout << "Promedio:" << promedio <<
    endl;
    
    cout << "Aprobados: " << aprobados << endl;


        return 0;
}
}
