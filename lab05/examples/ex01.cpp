#include<iostream>

#include<string>
using namespace std;
int calcular(int,int); 


int main(){

    //Escriba un programa que, dado un entero, determine cuántas unidades,
    //decenas, centenas y millares lo componen
    int input;
    cout << "Ingrese un numero a Analizar:" ;
    cin >> input; 

    cout <<  "Unidades: " << calcular(input,1) << endl;

    cout <<  "Decenas :" << calcular(input, 10) << endl;

    cout <<  "Centenas: " << calcular(input,100) << endl;

    cout << "Millares: " << calcular(input, 1000) << endl;





    return 0;
}

int calcular(int input, int digito){
            double save = 0;
            int veces = 0;
            double comp = 0;
            int digitos = 2;
            for(int i = 0; i<digitos; i++ ){

                    double proceso = input/10 - (input%10)/10;
                    
                    comp = input%10;
                    input = proceso;
                  
                    save = proceso;
                    cout << comp << endl;
                   // if(comp == encontrar){
                     //   veces++;
                    //}                
            }
    //int decenas = in%10;

    
}
