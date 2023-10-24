#include "point.h"
#include<iostream>
using namespace std;
Point::Point (float x,float y){
        this->x=x;
        this->y=y;
    }
    void Point::deplace(float x, float y){
        this->x+=x;
        this->y+=y;
    }
    void Point::affiche(){
        cout<<"les cordonnees du point sont : "<<"("<<x<<","<<y<<")"<<endl;
    }
