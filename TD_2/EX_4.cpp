#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout << "entrer la taille du tableau :";
    cin >> n;
    int* table = new int[n] ;
    int* carre = new int[n] ;
    for(i=0;i<n;i++){
       cout<<"saisir case  "<<i+1<<": ";
       cin>>table[i];
    }
    for(i=0;i<n;i++){
       carre[i]=table[i]*table[i];
    }
    delete[] table;
    for(i=0;i<n;i++){
        cout << "le carre de la case " << i+1 <<"est : "<<carre[i]<<endl;

    }
    delete[] carre;
    return 0;

}
