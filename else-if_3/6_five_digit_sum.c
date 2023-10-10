// 6. Write a program that accepts five digit number and find out the sum of all the individual digits


// standard input-output header file
#include<stdio.h>
//main function
void main(){
    //variable declaration
    int num,r,sum=0;
    printf("Enter n ");
    scanf("%d",&num);// Enter value from user
    if(num>10000 && num<99999){
    while (num>0)
    {
     r=num%10;
     sum += r ;
    num /=10;
    }    
    printf("%d",sum);   //print output
    }
    else{
        printf("Number may be 5 digit :- ");
    }
}



