#include<iostream>
using namespace std;

int main(){
    int calificaciones[3][3];
    int suma=0;
    float promedio;
    float promedioestudiante=0;
    int sumaestudiante=0;

    cout << "ingresa 9 calificaciones:"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> calificaciones[i][j];
        }
    }

    cout<< "Matriz de calificaciones:"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << calificaciones[i][j] << " ";
             suma += calificaciones[i][j];
        }
        cout << endl;  
    }
     promedio=suma/9; 

    cout << "Promedio general " << promedio << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sumaestudiante += calificaciones[i][j];
        }
        promedioestudiante=sumaestudiante/3;
        cout << "Promedio del estudiante " << i+1 << " es: " << promedioestudiante << endl;
        sumaestudiante=0;
    }

    return 0;
}