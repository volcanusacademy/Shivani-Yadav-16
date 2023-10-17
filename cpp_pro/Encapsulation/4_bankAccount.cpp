#include<iostream>
using namespace std;
class BankAccount{
  double balance ;
  BankAccount(){
    balance = 10000;
  }
  public:
   void depositing(int balance){
    int depo_amount;
    cout<<"Enter depositing amount :- ";
    cin>>depo_amount;
    this->balance=balance;
    balance +=depo_amount;
   }
   void withdrawing(){
     int withd_amount;
    cout<<"Enter withdrawing  amount :- ";
    cin>>withd_amount;
    this->balance=balance;
    balance -=withd_amount;
   } 
   void ckeckbalance(){
    cout<<balance;
   }
};
int main(){
 BankAccount obj;
 obj.depositing();
 obj.withdrawing();
 obj.ckeckbalance();
}