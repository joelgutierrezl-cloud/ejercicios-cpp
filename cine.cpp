#include <iostream>
using namespace std;

main(){

 int boletos=0;
 const float porcentajedescuento= 0.10;
 float descuento =0;
 float precio=0;
 int opcion;
 float subtotal=0;
 float total=0;
 const int niño=50;
 const int adulto=80;
 const int adultomayor=60;

 cout<<"cuanto boletos quieres"<< endl;
 cin>> boletos;

 for(int i=1; 1 <=boletos; i++){
     cout << "1. niño-$50" << endl;
        cout << "2. adulto-$80" << endl;
        cout << "3. adulto mayor- $60" << endl;
        cout << " no hay ese boleto ";
        cin >> opcion;
        switch (opcion){
            case 1: subtotal += niño;
            break;
            case 2: subtotal += adulto;
            break;
            case 3: subtotal += adultomayor;
            break;
            default: cout << "Esa opcion no existe, intenta de nuevo." << endl;
        }

        }

        if (subtotal>4){
            descuento = subtotal * porcentajedescuento;
            }
     cout <<"Subtotal: $" << subtotal << endl;
     cout << "Descuento: $" << descuento << endl;
     cout << "Total a pagar: $" << (subtotal - descuento) << endl;
    

return 0;
}








