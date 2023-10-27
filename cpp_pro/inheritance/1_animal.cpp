#include<iostream>
#include<string.h>
using namespace std;
//Define the base class Animal
class Animal{
    public:
string name;
int age;
};
//Define the Dog sub class which inherit from Animal class 
class Dog :public Animal{
    public:
    void put(){
        name="champ";
        age =12;
cout<<"\nname of dog :- "<<name;// print Dog name
cout<<"\nage of dog :- "<<age;// print god age
    }
};
//Define the cat sub class which inherit from Animal class
class Cat :public Animal{
public:
void put1(){
name="shona";
age =10;
cout<<"\nname of cat :- "<<name;// printing cat anme
cout<<"\nage of cat :- "<<age;// print age of cat
}
};
//main function
int main(){
    //create object of Dog class
Dog obj;
obj.put();  
Cat obj1;
obj1.put1();
return 0;
}