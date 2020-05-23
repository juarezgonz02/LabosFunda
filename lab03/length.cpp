#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int lenght;
    string input;
 
    cout << "Escriba un palabra a analizar" << endl;
    cin >> input;  
     
    lenght = input.length();
    cout << "Tu palabra contiene: " << lenght << " Digitos" << endl;
    
    if(lenght > 9){
        cout << "La palabra ingresada contiene 10 o mas caracteres" << endl; 
    }else{
        cout << "La palabra ingresada contiene menos de 10 caracteres"<< endl; 
    }
    
    bool condition = (lenght%2==1);

    if(condition){
        cout << "El longitud es impar";
    }else{
        cout << "El longitud es par";
    }
    
}
