#include<iostream>
#include<list>
#include<string>
#include<iterator>
using namespace std;
struct personne{ 
    string nom;
    string prenom;
    int age;
};
void showlist(list <personne>& g ){
    list <personne> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it){
    personne p1=*it;
    cout <<"Nom :"<<p1.nom<<"  "<<"Prenom :"<<p1.prenom<<"  "<<"Age :"<< p1.age<<endl;   
    }
}
  bool compare(personne p1 , personne p2){
    if(p1.nom==p2.nom){
    return p1.prenom<p2.prenom;
  }
  return p1.nom<p2.nom;
  }
int main(){
    personne p1;
    list<personne> p;
    int n;
    cout<<"enter le nombre des personnes a ajoute :";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"enter les informations de personne N "<<i+1<<" :"<<endl;
        cout<<"saisir le nom :";
        cin>>p1.nom;
        cout<<"saisir le prenom :";
        cin>>p1.prenom;
        cout<<"saisir l'age :";
        cin>>p1.age;
        p.push_back(p1);
    } 
    p.sort(compare);
    showlist(p);
    return 0;
}