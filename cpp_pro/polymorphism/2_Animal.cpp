#include<iostream>
using namespace std;
class Animal{
    public:
void makeSound(){
cout<<"sound of Animal :- ";
}

};
class Dog : public Animal{
    public:
    void makeSound(){
    cout<<"\nbho bho ";
    }
};

class Cat : public Animal{
    public:
    void makeSound(){
    cout<<"\nMeaow ";
    }
};
class Bird : public Animal{
    public:
    void makeSound(){
    cout<<"\nchi chi ";
    }
};

int main(){
Cat obj;
obj.makeSound();
Dog obj1;
obj1.makeSound();
Bird obj2;
obj2.makeSound();
}