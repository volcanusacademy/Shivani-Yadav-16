// 7. Write a program that accepts 6 digit number and find out the sum of first and last digit

// standard input-output header file
#include<stdio.h>
//main funciton
void main(){
      //variable declaration 
    int num[6];
    int i,sum=0;
    //for loop
    for ( i = 1; i <=6; i++)
    {
       printf("enter number [ %d ] :- ",i);
       //take value from user
        scanf("%d",&num[i]);
    sum=num[1]+num[6];
    
    }
    //print op
    printf("sum of first and last digit is :-  %d",sum);
    
}

