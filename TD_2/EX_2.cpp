#include<iostream>
using namespace std;

int multiple2(int num){
    if(num%2==0){
        return 2;
    }
    else
        return 0;
}
int multiple3(int num){
    if(num%3==0){
        return 3;
    }
    else
        return 0;
}
int main(){

   int num;
   cout<<"donner un entier :"<<endl;
   cin>>num;
   if(multiple2(num)==2 && multiple3(num)==3){
    cout<<"il est pair"<<endl;
    cout<<"il est multiple de 3"<<endl;
    cout<<endl<<"il est divisble par 6";
   }
   else
     {
        if (multiple2(num)==2)
        {
            cout<<"il est pair";
        }
        else{
            cout<<"il est multiple 3";
        }
        
     }

return 0;

}  