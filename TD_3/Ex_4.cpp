#include<iostream>
#include<set>
#include<vector>
#include <list>
#include<iterator>
using namespace std;
// search with 2 parameters
static bool search(int s,set<int> p){
    for(auto itr=p.begin();itr!=p.end();itr++){
        if(p.find(s)==p.end())
        return 0;
        else
        return 1;
    }
}
//search with 3 parameters
static bool search(int s,set<int>::iterator begin,set<int>::iterator end){
    for(auto itr=begin;itr!=end;itr++){
     if(*itr == s){
        return 1;
        break;
    }
    }
}
// search with template
template <typename Iterator, typename T>bool searchtemp(T value,Iterator begin, Iterator end) {
    while (begin != end) {
        if (*begin == value) {
            return 1;
        }
        ++begin;
    }
    return 0;}

int main (){
    set<int> num;
    list<int> list;
    vector<int> vect;
    int t[101];
    int s;
    for(int i=0;i<=100;i++){
        num.insert(i);
        list.push_back(i);
        vect.push_back(i);
        t[i]=i;
    }
    // search in set
    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
    if(search(s,num))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;

    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
    if(search(s,num.begin(),num.end()))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;
    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
    if(searchtemp(s,num.begin(),num.end()))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;
    // search in a list
    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
    if(searchtemp(s,list.begin(),list.end()))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;
    // search in a vector
    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
     if(searchtemp(s,vect.begin(),vect.end()))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;
    // search in a table
    auto itr=t;
    auto jtr=t+101;
    cout<<"sasir le nombre que tu veut chercher : ";
    cin>>s;
    if(searchtemp(s,itr,jtr))
    cout<<"la valeur donnee existe !"<<endl;
    else
    cout<<"la valeur donnee n'existe pas !"<<endl;

return 0;
}