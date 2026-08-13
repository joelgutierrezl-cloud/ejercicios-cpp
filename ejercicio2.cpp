#include <iostream>
using namespace std;

int main() {
    const int cafe=35;
    const int sandwich=65;
    const int jugo=40;
    const double descuento=0.10;
     double montoDescuento=0.0;
    int cantidad=0;
    int subtotal=0;
    int eleccion=0;

    cout << "Cuantos productos va a llevar?" << endl;
    cin >> cantidad;
    for (int i = 1; i <= cantidad; i++){
        cout << "1. Cafe ($35)" << endl;
        cout << "2. Sandwich ($65)" << endl;
        cout << "3. Jugo ($40)" << endl;
        cout << "Digite el numero del producto: ";
        cin >> eleccion;
        switch (eleccion){
            case 1: subtotal += cafe;
            break;
            case 2: subtotal += sandwich;
            break;
            case 3: subtotal += jugo;
            break;
            default: cout << "Esa opcion no existe, intenta de nuevo." << endl;
        }
    }
     
     if (subtotal> 150){
        montoDescuento = subtotal * descuento;
     }
     cout <<"Subtotal: $" << subtotal << endl;
     cout << "Descuento: $" << montoDescuento << endl;
     cout << "Total a pagar: $" << (subtotal - montoDescuento) << endl;
    

return 0;
}