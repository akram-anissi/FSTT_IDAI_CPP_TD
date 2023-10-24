#include<iostream>
using namespace std;
 
/* EX 3_a
int main(){
    int table[10],i;
    int max=0,min,pmax,pmin;
    for(i=0;i<10;i++){
       cout <<"saisir case "<<i+1<<": ";
       cin>>table[i];
    }
    for(i=0;i<10;i++){
        if(max < table[i]){
            max=table[i];
            pmax=i;
        }
        min=table[0];
        if(min > table[i]){
            min = table[i];
            pmin=i;
        }}
        cout<<"la valeur max est : "<<max<<" sa position est "<<pmax<<endl;
        cout<<"la valeur min est : "<<min<<" sa position est "<<pmin<<endl;
        return 0;

}*/

 //EX 3_b :
 
int main(){
    int table[10];
    int* pmax,* pmin,* i;
    for(i=table;i<=table+10-1;i++){
       cout<<"saisir case  : ";
       cin>>*i;
    }
    *pmax=0;
    for(i=table;i<=table+10-1;i++){
        if(*i>*pmax){
            *pmax=*i;
        }
        if(*pmin >*i){
            *pmin = *i;
        }
    }
        cout<<"la valeur max est : "<<*pmax<<" sa position est "<<pmax<<endl;
        cout<<"la valeur min est : "<<*pmin <<" sa position est "<<pmin<<endl;
        return 0;
}
