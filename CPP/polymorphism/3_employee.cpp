// 3. Employee Polymorphism:

// Define an Employee class with a method calculateSalary(). Create subclasses for different types of employees (e.g., Full_Time_Employee, Part_Time_Employee, Intern) and demonstrate how polymorphism can be used to calculate salaries differently for each type of employee.
#include<iostream>
using namespace std;
class Employe{
public:
void calulateSalary(int basic_salary){
}
};
class Full_time_Emp :public Employe{
    public :
void calulateSalary(int basic_salary){
//variable declaration

    float basic_salary;
    float provident_fund , travel_Allowance=0,da,gross_Salary=0,ns;
    cout<<"Enter salary :- \n";
    //Enter user 
    
    travel_Allowance = ( basic_salary* 10 )/ 100 ;
    provident_fund = ( basic_salary* 7.8 )/ 100 ;
    // find Dearness Allowance 
    da = 500;
    gross_Salary = basic_salary + da + travel_Allowance;
    cout<<"Gross salary \n"<<gross_Salary;
    // find net salary
    ns = gross_Salary - provident_fund ;
    printf("Net salary %f",ns);

}
};
class Part_time_Emp :public Employe{
  public :
void calulateSalary(int basic_salary){
//variable declaration

    float basic_salary;
    float provident_fund , travel_Allowance=0,da,gross_Salary=0,ns;
    cout<<"Enter salary :- \n";
    //Enter user 
    
    travel_Allowance = ( basic_salary* 10 )/ 100 ;
    provident_fund = ( basic_salary* 7.8 )/ 100 ;
    // find Dearness Allowance 
    da = 500;
    gross_Salary = basic_salary + da + travel_Allowance;
    cout<<"Gross salary \n"<<gross_Salary;
    // find net salary
    ns = gross_Salary - provident_fund ;
    printf("Net salary %f",ns);

}
};
class Intern :public Employe{
  public :
void calulateSalary(int basic_salary){
//variable declaration

    float basic_salary;
    float provident_fund , travel_Allowance=0,da,gross_Salary=0,ns;
    cout<<"Enter salary :- \n";
    //Enter user 
    
    travel_Allowance = ( basic_salary* 10 )/ 100 ;
    provident_fund = ( basic_salary* 7.8 )/ 100 ;
    // find Dearness Allowance 
    da = 500;
    gross_Salary = basic_salary + da + travel_Allowance;
    cout<<"Gross salary \n"<<gross_Salary;
    // find net salary
    ns = gross_Salary - provident_fund ;
    printf("Net salary %f",ns);

}
};
int main(){
    Employe obj;
    obj.calulateSalary(250);
    cout<<"Full time emp salary";
    Full_time_Emp obj1;
    obj1.calulateSalary(50000);
    cout<<"Part time salary";
   Part_time_Emp obj2;
    obj2.calulateSalary(30000);
    cout<<"Imtern";
    Intern obj3;
    obj3.calulateSalary(10000);
}