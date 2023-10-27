#include <iostream>
#include <string>
#include<fstream>
using namespace std;
 //Bus reservation class
class BUS_Reservation {
       string date,destination, source;
        
public:
    void display() {}
    
    void place() {
     
        cout << "\nEnter Your Source: ";
        cin >> source;
        cout << "\nEnter your Destination: ";
        cin >> destination;
        cout << "\nEnter Date: ";
        cin >> date;
  
    }
public:
    void information() {
        string name;
        long number;
        int age,  ticket_number;
        cout << "\nEnter your name: ";
        cin >> name;
        cout << "\nEnter your age: ";
        cin >> age;
        cout << "\nEnter mobile No.: ";
        cin >> number;
        cout << "\nEnter ticket number: ";
        cin >> ticket_number;
        
       display(name, age, number, ticket_number);
    } 
    void price(){
        
    }
    void bus_information(){
        string temp;
    ifstream obj("Bus_information.txt");
    
    if(obj.is_open()){
        while(getline(obj,temp)){
            cout<<temp<<endl;
       };
        obj.close();
    }
    else{
        cout<<"unable";
    }
    }
     void display(string name, int age, int number, int ticket_number) {
        // cout<<"\n\n";
        // cout<<"Source:- "<<source<<"\tdestination\t"<<destination;
        // cout<<"Your ticket is :- ";
        // cout << "\nName: " << name<<"\tDOJ"<<date ;
        // cout << "\nAge: " << age ;
        // cout << "\nMobile Number: " << number ;
        // cout << "\nTicket Number: " << ticket_number; 
    ofstream filestream("Print.txt");
    if(filestream.is_open()){
        filestream<<"--------------------------------------------------------------------------------";
        filestream<<"\n\n\n";
        filestream<<"\t\t\t\t\t\t WELCOME To RED BUS  ";
        filestream<<"\n\t\t\t*************************************";
      filestream<<"\n\t\t\tSource:-"<<source<<"\t\t\tdestination:-"<<destination;
      filestream<<"\n\t\t\tName:- " << name<<"\t\t\tDOJ:- "<<date ;
      filestream<<"\n\t\t\tNo of seats:- "<<ticket_number<<"\t\t\t\t";
         filestream<<"\n\t\t\tRs:- 100"<<"\t\t\tTime 9:45AM";
      filestream<<"\n\n\n";
      filestream<<"--------------------------------------------------------------------------------";
        
       filestream.close();
       }
      
   
    else{
        cout<<"File is open";
    }
     }
};

int main() {
    BUS_Reservation obj; 
    obj.bus_information();
    cout<<"\n\n";
     obj.place();
    obj.information();
    
    return 0;
}