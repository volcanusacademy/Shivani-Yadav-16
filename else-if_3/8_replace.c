// 8. Write a program that accepts 5 digit number and replace first and last digit.Ex : 45872 o/p: 25874

// standard input-output header file
#include<stdio.h>
//main function
void main(){
    //variable declaration
    int num,f,l,sum;
    printf("Enter n ");
    scanf("%d",&num);// Enter value from user
    
    f=num/10000;    
    num=num%10000;
    l=num%10;
    num=num/10;
    sum=l*10000+num*10+f;
    printf("%d",sum);   //print output
}



