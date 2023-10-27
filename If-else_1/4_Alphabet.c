// 4) Program to check whether entered character is an alphabet or not

// standard input-output header file
#include<stdio.h>
void main(){    //main function
    char ch;    // variabl declaration 
    
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        //condition check
        if((ch>='a' && ch<='z')||( ch>='A' && ch<='Z'))
            // this block executed when condition is true
        printf("character is alphabet");
        else{
                // this block executed when condition is false
            printf("character is not a alphabet");

        }
            
}