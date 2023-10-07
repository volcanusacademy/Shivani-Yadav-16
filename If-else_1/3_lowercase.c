// 3) Program to check whether entered character is in lowercase or not 

// standard input-output header file
#include<stdio.h>
void main(){    //main function
    char ch;    // variabl declaration 
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);        
        if(ch>=97 && ch<=122 )
        // this block executed when condition is true
        printf("character is in lowercase");    
        else{
        //else block executed when confition is false
            printf("character is not in lowercase");

        }
            
}