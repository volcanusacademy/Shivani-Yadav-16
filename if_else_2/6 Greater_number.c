// 6) Program to find out greater number among three numbers and test for all possible equalities

// standard input-output header file
#include<stdio.h>
//main function
void main(){
    // variabl declaration 
    int num1=2003,num2=304,num3=809;
    //check condition 
    if(num1>num2 && num1>num3){
        
        printf("num1 is greater than num2 and num3 ");
    }
    else if(num2>num1 && num2>num3){
        printf("num2 is greater than num1 and num3 ");
    }
    else{
        printf("num3 is greater than num1 and num2 ");
    }
}
