// 2) Program to check whether entered character is in uppercase or not 


// standard input-output header file
#include<stdio.h>

void main(){    //main function
    char ch;    // variable declaration
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>='A' && ch<='Z'){             //check condition
         //print this statement if condition is true
        printf("character is in uppercase");
        }
        
        else{
             //print this statement if condition is false
        printf("character is not in uppercase");

        }
            
}