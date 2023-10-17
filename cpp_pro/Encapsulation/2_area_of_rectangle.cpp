#include <iostream>
using namespace std;
// Rectangle class
class Rectangle
{
  // private variable length and width
private:
  int length, width;

public:
// set function which init the value by passing value 
  void set(int length, int width)
  {
     this->length = length;
    this->width = width;
  }
  //get function in which print output
    void get()
  {
    cout <<"Area of ractangle :- "<<length * width;
  }
};
// this is main method 
int main()
{
  // creating object of rectangle class (obj)
  Rectangle obj;
  // call set function
  obj.set(2, 3);
  // call get function
  obj.get();
  return 0;
}