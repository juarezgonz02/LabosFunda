#include <iostream>
using namespace std;

double datos_promedio(int[], int);

int main(){
    cout << "-----PROMEDIADOR DE DATOS-----"<<endl;
    int x;
    cout << "Que cantidad de datos introduciras?: "; cin >> x;

    int datos[x];
    for(int i = 0;i<x;i++){
        int j;
        cout << "Ingresa el numero: ";cin >> j; 
        datos[i]=j;
    }

    cout << "Promedio de los datos introducidos: "<<datos_promedio(datos, x)<<endl;

    return 0;
    }

double datos_promedio(int datos[], int n){
    double suma=0;
    for(int i=0;i<n;i++ ){
        suma+=datos[i];
    }
    double promedio = suma/n;
    return promedio;
  }