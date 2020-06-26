#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Ingrese un numero para comprobar" << endl;
    cin >> a;  

    bool condition = (a%2==1);

    if(condition){
        cout << "El numero es impar";
    }else{
        cout << "El numero es par";
    }
    
}
