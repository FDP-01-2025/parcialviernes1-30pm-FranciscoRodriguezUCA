// Cree un programa que pida al usuario que ingrese una nota entre 0 y 10. Utilice una estructura while para repetir el ingreso hasta que se introduzca un valor válido.

#include <iostream>
using namespace std;

int main(){

    float nota = 0;

    do{
        cout << "\nIngrese una nota del 0 al 10: ";
        cin >> nota;

        if(nota > 10){
            cout << "\nLa nota ingresada no se encuentra dentro del rango. Intente nuevamente.\n";
        }
        else{
            cout << "\nLa nota ingresada es " << nota << endl << endl;
        }
    } while(nota > 10);

    return 0;
}