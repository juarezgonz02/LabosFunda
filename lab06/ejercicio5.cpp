#include <iostream>
using namespace std;
int agregar(int[]);
void imprimir(int[]);

int main(){
    int array[100];
    agregar(array);
}

int agregar(int arra[]){
    int j=0;
    for(int i = 0; i<200; i++ ){
        if(i%2!=0){
            j+=1;
            arra[j]=i;
    }}
    imprimir(arra);
   
}

void imprimir(int arr[]){
    for(int i = 100; i>0; i-- ){
        cout << "I: " << arr[i] << endl;
    }
}