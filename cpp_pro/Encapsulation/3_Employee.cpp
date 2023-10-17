#include <iostream>
#include <string>
using namespace std;
// Employee class with two variable and two function get and set
class Employee
{// variable dec
    string name;
    int salary;

public:
//set function
    void set(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    //get fcuntion
    void get()
    {
        //print output
        cout << "Name of employee :- " << name << "\tSalary :- " << salary;
    }
};
//main fucntion
int main()
{
    //creating object of employee 
    Employee obj;
    //call set function
    obj.set("soniya", 100);
    //call get function
    obj.get();
}