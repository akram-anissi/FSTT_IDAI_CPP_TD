#include<iostream>
using namespace std;
int cmpt;
void fct(){
    cmpt++;
    cout<<"appel numero : "<<cmpt<<endl;
}
int main(){
    fct();
    fct();
    return 0;
}