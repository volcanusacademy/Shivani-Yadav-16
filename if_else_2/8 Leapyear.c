// 8) Program to check whether entered year is a leap year or not using nested if else

// standard input-output header file
#include<stdio.h>
//main function
void main(){
    //variable declaration
    int year;
    printf("enter any year ");
    scanf("%d",&year);//take value from user
    if(year%4==0){  //check condition
    //this block is executed when condition is true
        printf("leap year");
   }
   else
   //condition is false then this block executed
   printf("not leap year");
}