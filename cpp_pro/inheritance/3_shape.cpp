#include<iostream>
#include<string.h>
using namespace std;
// Base class Shape 
class Shape{
string color;
public:
// ge
void getArea(){

}
};
class Circle:public Shape{
    public:
void getArea(int r){
    float area_cirlce = 3.14 * r * r ;
    cout<<"\n Area of circle :- "<<area_cirlce;
}
};
class Reactangle:public Shape{
    public:
void getArea(int l , int b){
    int area_reactangle = l*b;
    cout<<"\n Area of Reactangle :- "<<area_reactangle;
}
};
class Triangle:public Shape{
    public:
void getArea(float l , float b){
    int area_reactangle =1/2*( l*b);
    cout<<"\n Area of Triangle:- "<< area_reactangle;
}
};
int main(){
 Circle obj1;
 Reactangle obj2;
 Triangle obj3;
obj1.getArea(2);
obj2.getArea(4,5);
obj3.getArea(2.1,2.1);
return 0;
}