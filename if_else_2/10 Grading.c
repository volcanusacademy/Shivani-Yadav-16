// 10) Program to get marks of 5 subjects from user and find out its grade using nested if else

// Per>=75 && per<=100 Grade A

// Per>=60 && per<75 Grade B

// Per>=50 && per<60 Grade C

// Per>=33 && per<50 Grade D

// else Fail
#include<stdio.h>
void main(){
    float os , c , c_pp , e_commerce , network ;
    float per; 
    printf("enter os marks :- ");
    scanf("%f",&os);
    printf("enter c marks :- ");
    scanf("%f",&c);
    printf("enter cpp marks :- ");
    scanf("%f",&c_pp);
    printf("enter e_commerce marks :- ");
    scanf("%f",&e_commerce);
    printf("enter network marks :- ");
    scanf("%f",&network );

    per = (( os + c + c_pp + e_commerce + network  )/5);
    
    printf(" %f per \n",per);
    if(per>=75 && per<=10)
    printf('Grade A');
    else if(per>=60 && per<75)
    printf('Grade B');
    else if(per>=50 && per<60)
    printf('Grade C');
    else 
    printf("Grade D");
    


}