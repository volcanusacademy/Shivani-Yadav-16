// 5) Program to find out whether entered number lies in between 50 and 100 or not
// standard input-output header file
#include<stdio.h>
//main function
void main(){
    // variabl declaration 
    int n;
     //message for user to Enter any number
    printf("enter any number:- ");
    scanf("%d",&n);
    if(n>50 && n<100){ //check condition
      //this block is executed when condition is true  
        printf("number lies between 50 to 100");
      }
      else{
          //this block is executed when condition is false
          printf("number not lies between 50 to 100"); 
      }
}