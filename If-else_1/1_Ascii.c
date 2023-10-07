// 1) Program to print characters of all the ASCII values from 91 to 96

// standard input-output header file
#include<stdio.h>
//main function
void main(){

// variabl declaration 
char i;
// for loop
for ( i = 91 ; i <= 96; i++)
    {
        // printing our output using printf()
        printf("Characters of ASCII %d is %c\n" , i , i ); 
    }
    
}