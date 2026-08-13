#include <iostream>
using namespace std;

int main() {
    double nota1 = 0, nota2 = 0, nota3 = 0;
    double resultado = 0;

    cout << "Escribe la calificacion 1: ";
    cin >> nota1;
    cout << "Escribe la calificacion 2: ";
    cin >> nota2;
    cout << "Escribe la calificacion 3: ";
    cin >> nota3;

    resultado = (nota1 + nota2 + nota3) / 3;

    cout << "\nTu resultado final es: " << resultado << endl;

    if (resultado < 6) {
        cout << "Estatus: No alcanzaste el minimo" << endl;
    } else if (resultado < 7) {
        cout << "Estatus: Aprobado apenas" << endl;
    } else if (resultado < 8) {
        cout << "Estatus: Buen rendimiento" << endl;
    } else if (resultado < 9) {
        cout << "Estatus: Muy buen trabajo" << endl;
    } else {
        cout << "Estatus: Desempeño sobresaliente" << endl;
    }

    return 0;
}