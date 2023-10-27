// Write a program in C to perform addition, subtraction, multiplication, division by taking input from user.

#include <stdio.h>
void add(int num1,int num2){    //addition function
    int sum=num1+num2;          
 printf("addition of %d + %d = %d \n" , num1,num2,sum);
}
void sub(int num1,int num2){        //subtraction function
    int sub=num1-num2;          
 printf("subtraction of %d - %d = %d \n" , num1,num2,sub);
}
void mult(int num1,int num2){       //multiplication function  
    int mult=num1*num2;          
 printf("multiplicatin of %d * %d = %d \n" , num1,num2,mult);
}
void div(int num1,int num2){        //division function  
int div ;    
  if(num2 == 0 ) {
    printf("Cannot divide by zero");
    } 
  else if(num1==0){
        printf("Result is undefined");
    } 
else
{
div = num1/num2;          
 printf("division of %d / %d = %d \n" , num1,num2,div);
}
}

void main(){
    int num1,num2;
    printf("enter num1:- ");
    scanf("%d",&num1);        //user input
    printf("enter num2:- ");
    scanf("%d",&num2);    //user input

   add(num1,num2);  //calling add function  
   sub(num1,num2);  //calling sub function
   mult(num1,num2); //calling mult function
   div(num1,num2);  //calling div function
   
}