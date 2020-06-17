#include <iostream>
using namespace std;
int MCD(int,int);

int main(){
    cout<<"-----EJERCICIO 1 MCD-----"<<endl;
    int a,b;
    cout<<"Primer numero: ";
        cin>>a;
    cout<<"Segundo numero: ";
        cin>>b;

    cout << "MCD: "<<  MCD(a,b) << endl ;
}

int MCD(int a, int b){
    int mcd;
    int  r;
    do{
        
        r = a%b;
        a=b;
         b=r;
    }
    while(r!=0);
    mcd = a;
    return mcd;
}