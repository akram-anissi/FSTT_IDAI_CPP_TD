#include <iostream> 
using namespace std; 
class Test{ 
public:
 static int tableau[] ; 
public :
 static int division(int indice, int diviseur){
    if(diviseur==0){
        throw runtime_error("Attempted to divide by zero !");
    }
    if(indice<0 || indice>= 10){
        throw out_of_range("this indice it's not in the table !");
    }
 return tableau[indice]/diviseur; 
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() { 
 int x, y; 
 try{
 cout << "Entrez l’indice de l’entier à diviser: " << endl; 
 cin >> x ;
 cout << "Entrez le diviseur: " << endl; 
 cin >> y ;
 cout << "Le résultat de la division est: "<< endl;
 int k=Test::division(x,y); 
 cout <<k << endl;
 }catch(const runtime_error& e){
    cerr<<e.what()<<endl;
 }catch(const out_of_range& e){
    cerr<<e.what()<<endl;
 }
 return 0;
 }



