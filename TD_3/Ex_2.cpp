#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void showlist(list <int> g){
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it){
    cout << '\t' << *it;
    cout << '\n';}
}

void tri_bull(list <int>& g){
  list<int> :: iterator it;
  for(it = g.begin(); it != g.end(); ++it){   
    list<int> :: iterator jt;
    for(jt=g.begin();jt!=g.end();jt++) 
    if (*it < *jt) {                                 
       swap(*jt,*it);
    }
  }
}
 void tri_selec(list<int>& g){
  list <int> :: iterator it;
  for(it=g.begin();it!=prev(g.end());it++){
    list <int> :: iterator min_elem=it;
    for (list <int> :: iterator jt=next(it);jt!=g.end(); jt++){
      if(*jt<*min_elem){
        min_elem=jt;
      }
    }
      swap(*it,*min_elem);
  }
 }
 void tri_inser(list<int>& g){
  list <int> :: iterator it;
  for(it=g.begin();it!=g.end();it++){
    list <int> :: iterator jt=it;
    while(jt != g.begin() && *(prev(jt))>*jt){
      swap(*jt,*(prev(jt)));
      jt--;
    }
  }
 }



int main (){
    list<int> mylist;
    int n,tmp;
    cout<<"Donner la longueur de la liste :";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"saisir le nombre "<<i+1<<": ";
        cin>>tmp;
        mylist.push_front(tmp);
    } 
    //tri_bull(mylist);
    //tri_selec(mylist);
   tri_inser(mylist);
    showlist(mylist);
    return 0;
}




































