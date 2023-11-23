/*Data Structure Implementation :
 Implement a basic data structure like a stack or a queue from scratch.
 Use it to perform operations like pushing, popping, enqueue, and dequeue.*/
​
​
#include <iostream>
​
using namespace std;
​
class Stack{
    
    
    int stack[100], top, element;
    
    public:
    Stack(){
        top = -1;
    }
    
    void push(){
        
        if(top != 100){
        cout<<"\n Enter the element to push";
        
        cin>>element;
        
        top++;
        
        stack[top]= element;
        
        cout<<"\n Value Pushed to Stack ";
        
        }
        
        
        else{
            cout<<"\n Stack overflow";
        }
          display();
    }
    void pop(){
         if(top != -1){
             
             cout<<"Elememt to be popped out "<<stack[top];
        
        top--;
        
     
         }
        
        
        else{
            cout<<"\n Stack underflow";
        }
        
              display();
    }
    void peek(){
         if(top != -1){
             
             cout<<"Top element "<<stack[top];
        
    
         }
     
        
        
        else{
            cout<<"\n Stack underflow";
        }
        
    }
    
    void display(){
        
        for(int i =top; i>=0 ; i--){
           
           cout<<"\n "<<stack[i]; 
        }
    }
    
    void Driver(){
        int choice;
        
    while(choice != 5)   {
         cout<<"\n1.Push\n2.Pop\n3.Display\n4.peek \n5.Exit";
         cout<<"\n Enter your choice:";         
​
        cin>>choice;  
        
        switch(choice)   
​
        {   
​
            case 1:   
​
            {    
​
                push();   
​
                break;   
​
            }   
​
            case 2:   
​
            {   
​
                pop();   
​
                break;   
​
            }   
​
            case 3:   
​
            {   
​
                display();   
​
                break;   
​
            }   
            
            case 4:
            {
                peek();
                break;
            }
​
            case 5:    
​
            {   
​
                cout<<"Exiting....";   
​
                break;    
​
            }   
​
            default:   
​
            {   
​
                cout<<"Please Enter valid choice :";   
​
            }
        }
    }
}
};
​
int main()
{
    Stack obj;
    
    obj.Driver();
​
    return 0;
}