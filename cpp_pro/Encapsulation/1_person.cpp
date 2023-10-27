#include <iostream>
#include <string>
using namespace std;
// person clss
class Person {
    // praivete variable name and age 
private:
     string name;
    int age;

public:
    // Constructor to initialize name and age
    Person( string name, int age) {
     this->   name = name;
      this->  age = age;
      cout<<"name:- "<<name<<"\t age :- "<<age;
    }   
};
int main() {
        
    Person person("Komal", 21);
    return 0;
}

