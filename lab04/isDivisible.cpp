#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "A: el Numerador" << endl;
    cin >> a; 

    cout << "b: el Denominador" << endl;
    cin >> b; 

    bool residuo = (a%b==0);

    if(residuo){
        cout << "A " << "es divible entre B";
    }else{
        cout << "A " << "NO es divible entre B";
    }
    
}
