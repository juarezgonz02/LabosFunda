#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Ingrese un numero para comprobar" << endl;
    cin >> a;  

    bool condition = (a>0);

    if(condition){
        
        cout << "El numero es positivo";
    }else{
        if(a==0){
            cout << "El numero es cero";
        }else{
            cout << "El numero es negativo";
        }
    }
    
}
