// 5. Write a program that accepts four digit number and find out the sum of all the individual digits

// standard input-output header file
#include<stdio.h>
//main function
void main(){
    //variable declaration
    int num,r,sum=0;
    printf("Enter n ");
    scanf("%d",&num);// Enter value from user
    if(num>1000 && num<9999){
    while (num>0)
    {
     r=num%10;
     sum += r ;
    num /=10;
    }    
    printf("%d",sum);   //print output
    }
    else{
        printf("Number may be 4 digit :- ");
    }
}



