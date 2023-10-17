#include <iostream>
#include<string.h>
using namespace std;
class Calculator {
public:
    // Base class function for performing operations
    void operation(int num1, int num2){}
};

class Addition : public Calculator {
public:
    void operation(int num1, int num2){
      cout<< num1 + num2;
    }
};

class Subtraction : public Calculator {
public:
    void operation(int num1, int num2)    {
        cout<< num1 - num2;
    }
};

class Multiplication : public Calculator {
public:
    void operation(int num1, int num2)    {
        cout<< num1 * num2;
    }
};

class Division : public Calculator {
public:
    void operation(int num1, int num2)    {
        if (num2 != 0) {
            cout<< num1 / num2;
        } else {
             cerr << "number can't be divided by 0 :- " <<  endl;
            
        }
    }
};

int main() {
    int num1, num2;
    char operation;

     cout << "Enter num1 :- ";
     cin >> num1;
     cout<<"Enter num2 :- ";
     cin>>num2;
Addition obj1;
obj1.operation(num1,num2);
Division obj2;
obj2.operation(num1,num2);

    return 0;
}
