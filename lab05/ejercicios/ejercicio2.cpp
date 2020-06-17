#include<iostream>
using namespace std;
int tiempo(int*, int*, int*);
int main(){
    int hora, min, seg;
    cout<<"Hora: ";
    cin>>hora;
    cout<<"Min: ";
    cin >> min;
    cout<<"segundos: ";
    cin>>seg;

    tiempo(&hora, &min, &seg);
    cout<<"Ahora son: "<<hora<<":"<<min<<":"<<seg<<endl;
}
int tiempo(int* hora, int* min, int* seg){
    *seg+=1;
    if(*seg >= 60){*min+=1;*seg=0; }
    if(*min >= 60){*hora+=1;*min=0; }
    if(*hora > 23){*seg=1;*hora=0; }
}