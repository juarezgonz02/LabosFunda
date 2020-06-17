#include <iostream>

using namespace std;
int sort(int*, int*, int, int);
int buscar(int,int);

int main(){
    /*
    Escriba una función que reciba tres argumentos enteros, a, b y n, y retorne la
    suma de todos los enteros que se encuentran en el intervalo [a, b], que son
    divisores de n. Despliegue en pantalla el resultado retornado por la función.
    Nota: si ningún entero es divisor de n, obviamente se desplegará cero
    */
    int a,b;
    int mayor,menor;
    cout << "-------PROGRAMA_08-------" << endl << " Numero 1: ";
    cin >> a;
    cout << "Numero 2: ";
    cin >> b;
    
    sort(&mayor, &menor, a, b);
    cout << "MENOR: "<< menor << endl;
    cout << "MAYOR: "<< mayor << endl;

    cout << "VECES encontrada: "<< buscar(menor, mayor) << endl;
    return 0;
    
}

int sort(int* mayor, int* menor, int a, int b ){
    if((a-b)>0){
        *mayor = a;
        *menor = b;
    }else{
        *menor = a;
        *mayor = b;
    }

}

int buscar(int menor, int mayor){
    int n, cont=0;
    cout << "Numero a buscar: ";
    cin >> n;

    for(menor; menor<mayor; menor++){
        if(menor%n==0){cont+=1;}
    }
        return cont;

    }

