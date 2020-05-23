#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int RealLenght;
    string input;
 
    cout << "Escriba un palabra a analizar" << endl;
    cin >> input;  
     
    RealLenght = input.length()-1;

    if(input[0] == input[RealLenght] ){
        cout << "Inicia y finaliza con la misma letra" << endl;
    }else{
        cout << "No inicia con la misma letra que termina" << endl;
    }
    
}
