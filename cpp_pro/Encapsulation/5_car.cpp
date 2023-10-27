#include <iostream>
#include <string>
using namespace std;
//car class with three variable and two function
class Car
{
    // private variable
    string make,model;
    int year;
// public function set 
public:
    void set(string make, string model , int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }
    //get function in which print output
    void get()
    {
        cout << "Make :- " << make << "\tyear :- " << year<<"\tModel :- "<<model;
    }
};
// main fucntion
int main()
{
    //creating object of car class
    Car obj;
    //call set function and passing value
    obj.set("Honda","Civic", 100);
    //call get function 
    obj.get();
      
}