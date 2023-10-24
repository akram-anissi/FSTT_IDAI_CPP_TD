#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int i=0,j=1,answer,answer2;
void throwDice(int i, int *answer, int*answer2){
    *answer=0;
    *answer2=0;
    srand(time(NULL));
    if(i==1){
         while(*answer==0){
         *answer=rand()%7;
         }
         cout<<*answer<<endl;
    }
    else{
        while(*answer==0 || *answer2==0){
         *answer=rand()%7;
         *answer2=rand()%7;
         }
         cout<<*answer<<" "<<*answer2<<endl;
    }
}
int playerTurn(int i,int answer,int answer2){
    int score=0,d;
       if(j%2!=0){
        cout<<"*************LE TOUR DE JOUEUR 1*************"<<endl;
        while(i!=1 && i!=2){
        cout<<"Voulez-vous lancer 1 ou 2 d�s ? " ;
        cin>>i;}
        throwDice(i,&answer,&answer2);
     if(i==2){
            if(answer!=answer2){
                score+=(answer+answer2);
                }
            else
                score-=answer+answer2;
     }
     else
        score+=answer;}
     else{
        cout<<"*************LE TOUR DE JOUEUR 2*************"<<endl;
        while(i!=1 && i!=2){
        cout<<"Voulez-vous lancer 1 ou 2 des ? " ;
        cin>>i;}
        throwDice(i,&answer,&answer2);
       if(i==2){
            if(answer!=answer2)
               score+=answer+answer2;
            else
                score-=answer+answer2;
     }
     else
        score+=answer;}
        return score;
}
int main(){
   int score1=0,score2=0;
   while(score1<30 && score2<30){
        score1+=playerTurn(i,answer,answer2);
        cout<<"Votre score est : "<<score1<<endl;
          j++;

        score2+=playerTurn(i,answer,answer2);
        cout<<"Votre score est : "<<score2<<endl;
        j++;
    system("pause");
    system("cls");
   }
   cout<<endl;
   if(score1>=30 && score2>=30)
    cout<<"Le match est nul !";
   else {
    if(score1>=30)
        cout<<"****************Le joueur 1 a gagn�****************"<<endl;
     else
        cout<<"****************Le joueur 2 a gagn�****************"<<endl;}

 return 0 ;
}
