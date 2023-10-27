// 5) Program to check whether entered character is a digit or not

// standard input-output header file
#include<stdio.h>
void main(){    //main function
    char ch;    // variabl declaration 
    
    printf("enter any character :- ");
    scanf("%c",&ch);
    //condition check
    if(ch >= '0' && ch <= '9'){
        // if block is executed when condition is true
        printf("character is a digit");
    }
    else{
        // if block is executed when condition is false
        printf("character is not  a digit");
    }
}