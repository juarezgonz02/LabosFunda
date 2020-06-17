#include <iostream>
using namespace std;
void llamada(int, int*, int*);

/*Escriba un programa que solicite números desde el teclado hasta que presione
el número 0 y calcule: la suma de todos los números ingresados, la cantidad de
números ingresados y su promedio]/*/

int main(){
    int input;
    int n = 0, suma;

    cout << "ESCRIBE NUMEROS" << endl;
    llamada(input, &n, &suma);

    cout << "Suma: " << suma << endl;
    cout << "Numeros introducidos: " << n << endl;
    cout << "PROMEDIO: " << suma/n << endl;

}
void llamada(int input, int *n,  int *suma){
    cout << "Escribe un numero: " ;
    do{

       cin >> input;
       *suma += input;
       ++ *n ;
        cout << "Otro numero o 0 para terminar: ";

    }while(0!=input);
    -- *n;

} 