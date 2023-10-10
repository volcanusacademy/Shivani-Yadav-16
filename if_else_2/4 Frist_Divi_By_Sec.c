// 4) Program to check whether first number is divisible by second or not
// standard input-output header file
#include<stdio.h>
//main function
void main(){
 
// variabl declaration 
    int num1 , num2;
    printf("enter two number :- ");
    scanf("%d%d",&num1,&num2);
    if(num1%num2==0){//check condition
    // /this block is executed when condition is true 
    printf("first number is divisible by second");

    }
    else
    {
        // /this block is executed when condition is false
         printf("first number is not divisible by second");
    }
}