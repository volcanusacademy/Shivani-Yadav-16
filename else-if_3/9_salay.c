// 9. Write a program to calculate gross salary and net salary. Accept basic salary from user,

// TA(Travel Allowance) i.e 10% of basic salary, PF(Provident Fund) i.e 7.8% of basic , DA(Dearness Allowance) is 500, gs=basic+da+ta; ns=gs-pf;

// standard input-output header file
#include<stdio.h>
// main function
void main(){
    //variable declaration
    float basic_salary;
    float provident_fund , travel_Allowance=0,da,gross_Salary=0,ns;
    printf("Enter salary :- \n");
    //Enter user 
    scanf("%f",&basic_salary);
    travel_Allowance = ( basic_salary* 10 )/ 100 ;
    provident_fund = ( basic_salary* 7.8 )/ 100 ;
    // find Dearness Allowance 
    da = 500;
    gross_Salary = basic_salary + da + travel_Allowance;
    printf("Gross salary %f\n",gross_Salary);
    // find net salary
    ns = gross_Salary - provident_fund ;
    printf("Net salary %f",ns);

}