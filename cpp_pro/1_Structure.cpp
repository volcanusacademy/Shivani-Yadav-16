//header file
#include<iostream>
using namespace std;
class Area{
    public :
void area_square(){//area_square function
int r =2;  // variable declaration  
cout<<"\nArea of square:- "<<2*3.14*r*r;// 
}
public :
void area_triangle(){
int l=10 , b=10 ; //variable declaration 
cout<<"\nArea of Triangle:-  "<<(l*b)/2;
}
public:
void area_rectangle(){
    int l=12,b=12; //variable declaration 
cout<<"\nArea of reactangle:- "<<l*b;
}
};
// main function which have int data type
int main(){
    //creating obj of Area class
Area obj;
obj.area_square();  //calling of area_square function
obj.area_triangle();//calling of area_triangle function
obj.area_rectangle();//calling of area_rectangle function
return 0;
}


