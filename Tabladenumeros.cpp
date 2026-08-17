#include <iostream>
using namespace std;

int main(){

    int numeros[2][3];

    cout << "ingresa 6 numeros:" << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> numeros[i][j];
        }
    }

    cout<< "Matriz:" << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }
}