// 1) Program to find out compound interest if principal is greater than or equals to 500 otherwise find out simple interest

// standard input-output header file
#include<stdio.h>
//main funciton
void main(){
    //variable declaration 
int p,A ;
float r , t ,ci , si ;
// print Enter message
printf("enter principal ");
// take input form user
scanf("%d",&p);
// print Enter message
printf("enter rate ");
// take input form user
scanf("%f",&r);
// print Enter message
printf("enter time ");
// take input form user
scanf("%f",&t);
//check condition
if(p>=500){
    //calculate  Amount
A  = p * (pow((1 + r / 100), t));
// Calculate CI
ci = A - p; 
printf("compound intersent is %f" , ci);
}
else{
    //calculate SI
si=((p*r*t)/100);
printf("simple interest is %f",si);

}
}