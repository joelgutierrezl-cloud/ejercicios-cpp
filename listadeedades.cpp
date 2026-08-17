#include <iostream>
using namespace std;

int main() {
     
    int edades[5];
    
    cout << "Edades" << endl;
    cout << "Ingresa 5 edades: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> edades[i];
    }

    cout << "Las edades son:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << edades[i] << endl;
    }

    return 0;
}