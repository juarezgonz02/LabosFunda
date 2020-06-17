#include <iostream>
using namespace std;
bool isBisiesto(int);
bool comprobacion(int, int, int);
void siguiente_dia(int*,int*,int*);
int tamano_mes (int,int);

int main(){
    int anno, mes, dia;
    cout<<"ingrese la fecha en el siguiente formato: aa/mm/dd"<<endl;
    
    cout<<"aa: ";
    cin>>anno;
    cout<<"mm: ";
    cin >> mes;
    cout<<"dd: ";
    cin>>dia;
    
    if(comprobacion(mes, dia, anno)){
        siguiente_dia(&mes,&dia,&anno);
        cout << endl<<"Fecha al dia siguiente: "<< anno <<"/"<<mes<<"/"<<dia<<endl;
    }else{
        cout<<"----FECHA INVALIDA----"<<endl;
    }

}
void siguiente_dia(int* mes, int* dia, int* aa){
    *dia+=1;
    if(tamano_mes(*mes,*aa)<*dia){
        *mes+=1;
        *dia=1;
    }
    if(*mes>12){
        *mes=1;
        *aa+=1;
    }
}
bool comprobacion(int mm, int dd, int aa ){
    
    bool comprobacion_mes=(tamano_mes(mm,aa)<dd);
    return !comprobacion_mes;
    
    
}bool isBisiesto(int anno){
    
    if((anno%400)==0){
        return true;
    }
    else if((anno%4==0)&&(anno%100!=0)){
        return true;
    }
    else{
        return false;
    }

}
int tamano_mes (int mm,int aa ){
     switch (mm)
    {
        //31 dias
    case 1:case 3:case 5:case 7:case 8:case 12:
        return 31;
    
    break;

        //30 dias
    case 4:case 6:case 9:case 10:case 11:
        return 30;
    break;    

    case 2: 
    if(isBisiesto(aa)){
        return 29;
    }else{
        return 28;
    }
    break;

    default:
        cout<<"---Fecha incorreta---"<<endl;         
    break;
    }
}
