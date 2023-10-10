// 3) Program to check whether entered number is divisible by 75 or not

// standard input-output header file
#include <stdio.h>
//main function
void main(){
  //int variable
  int num ;
  //message for user to Enter any number
  printf("enter any number :- ");
  //user input
  scanf("%d",&num);
  //check condition
    if(num%75==0){
      //this block is executed when condition is true
        printf("%d is divisibale by 75 " , num);
    }
    else{
      //this block is executed when condition is false
       printf("%d is not divisible by 75 " , num);
    }
}