// 9) Program to take nationality as ‘I’ or ‘i’ for Indian from user, and if it is an Indian the take age from it and checks whether he or she is eligible to vote or not.
#include<stdio.h>
void main(){
    char nationality;
    int age;
    printf(" if you blong to Indian then press 'I' or  'i' :-  " );
    scanf("%c",&nationality);
    
    if(nationality =='I' || nationality =='i' ){
        printf("enter your age :- ");
        scanf("%d",&age);
        if(age>18){
            printf("your are eligible for vote");
        }
        else{
            printf("you are not eligible for vote");
        }
    }
}