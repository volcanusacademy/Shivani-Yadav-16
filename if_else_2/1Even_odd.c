// 1) Program to find out whether entered number is even or odd

// standard input-output header file
#include<stdio.h>
// main fucntion
void main(){
  // int  variable
  int num ;
  //first print this msg for user  
  printf("enter any number :- ");
  //take number from user
  scanf("%d",&num);
  //check condition
  if(num%2==0)
//this block is executed when condition is true 
      printf("even");
   else
//this block is executed when condition is false
    printf("odd");
      
}