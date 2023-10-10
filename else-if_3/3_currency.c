// 3. A cashier has some amount of money(e.g. 4526).Write a program to calculate out how many currency of Rs.1000,Rs.500,Rs100, Rs50, Rs20, Rs10, Rs5, Rs2, Rs1 required.

// standard input-output header file
#include<stdio.h>
//main funciton
void main(){
      //variable declaration 
    int amount ;
    // print Enter message
    printf("Enter amount :- ");
    // take input form user
    scanf("%d",&amount);
   //1000
    int thou = amount / 1000 ; 
    amount %= 1000;
    printf("\n1000 *  %d",thou);
   //500
    int five_hu = amount/500;
    amount %= 500;
    printf("\n500 * %d",five_hu);
    //100
     int hundred = amount/100;
    amount %= 100;
    printf("\n100 * %d",hundred);
     //50
    int fifty= amount/50;
    amount %= 50;
    printf("\n50 * %d",fifty);
     //20
    int twenty = amount/20;
    amount %= 20;
    printf("\n20 * %d",twenty);
    //10
    int ten = amount/10;
    amount %= 10;
    printf("\n10 * %d",ten);
    //5
    int five = amount/5;
    amount %= 5;
    printf("\n5 * %d",five);
    //1
    int one = amount/1;
    amount %= 1;
    printf("\n1 * %d",one);


}