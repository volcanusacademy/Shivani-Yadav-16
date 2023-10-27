// 2) Program to find out whether entered number is +ive or -ive

// standard input-output header file
#include <stdio.h>
//main function
void main(){
    //int variable 
  int num ;
  //message for user to Enter any number
  printf("enter any number :- ");
  // take number from user
  scanf("%d",&num);
  //check condition
    if(num>=0){
    //this block is executed when condition is true
        printf("positive number ");
    }
    else{
        // this block is executed when condition is false
        printf("negative number ");
    }
}