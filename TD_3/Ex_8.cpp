#include <iostream>
using namespace std ;

template<typename t>t  carre(t &num){
    return num*num;
}
int main(){
    int num=5;
    float num1=2.5;
    cout<<carre(num)<<endl;
    cout<<carre(num1);
    return 0;
}