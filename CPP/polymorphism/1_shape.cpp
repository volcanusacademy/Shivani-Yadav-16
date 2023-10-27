#include<iostream>
using namespace std;
class Shape {
    public:
void Area(float r){
   
}
};
class Circle : public Shape{
    public:
void Area (int r) 
{
     cout<<"Area of circle :- "<< 3.14 * r *r  ;
    
}
};
class Sqaure: public Shape{
    public:
 void Area (int side) 
{
    cout<<"\nArea of square is :- "<<side*side;
   
}
};
class Triangle: public Shape{
    public:
 void Area (int base,int height) 
{
  
    cout<<"\nArea of Triangle is :- "<<0.5 * base * height;
}
};

int main(){
 Circle obj1;
obj1.Area(1);
Sqaure obj2;
obj2.Area(3);
Triangle obj3;
obj3.Area(5,2);
return 0;
}