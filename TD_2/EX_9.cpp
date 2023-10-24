#include<iostream>
#include<string>
using namespace std;
class Animal {
private :
    string nom;
    int age;
public :
    string get_nom(){
        return nom;
    }
    int get_age(){
        return age;
    }
    void set_value(string nom,int age){
        this->nom=nom;
        this->age=age;
    }
};
class Zebra : private Animal{
    private :
    string lieu_dorigine;
    public :
    void set_value(string nom,int age,string lieu_dorigine){
        Animal::set_value(nom,age);
        this->lieu_dorigine=lieu_dorigine;
    }
    string get_lieu(){
        return lieu_dorigine;
    }
    void affiche(){
        cout<<"le nom de cette zebra est : "<<get_nom()<<endl;
        cout<<"l'age de cette zebra est : "<<get_age()<<endl;
        cout<<"lieu d'origine de cette zebra est : "<<get_lieu()<<endl;
    }
};
class Dolphin : private Animal{
    private :
    string lieu_dorigine;
    public :
    void set_value(string nom,int age,string lieu_dorigine){
        Animal::set_value(nom,age);
        this->lieu_dorigine=lieu_dorigine;
    }
    string get_lieu(){
        return lieu_dorigine;
    }
    void affiche(){
        cout<<"le nom de ce dolphin est : "<<get_nom()<<endl;
        cout<<"l'age de ce dolphin est : "<<get_age()<<endl;
        cout<<"lieu d'origine de ce dolphin est : "<<get_lieu()<<endl;
    }
};
int main(){
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("JOLI",6,"Afrique");
    dolphin.set_value("DEXTER",6,"Ocean Atlantique");
    zebra.affiche();\
    cout<<"----------------------------------------------------"<<endl;
    dolphin.affiche();
    return 0;
}
