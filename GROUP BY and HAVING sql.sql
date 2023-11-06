-----  To excute the provided queries involving GROUP BY and HAVING clauses, you should have two main tables in your database: Employees and Departments.

----   GROUP BY and HAVING queries
show databases;
use valcanus2;
select * from employees;
show databases;
use company;
show tables;
select * from employee;

---  Find Departments with More Than 5 Employees:
select department from employee group by department having count(department) > 5;


---  List the departments with more than 5 employees.
select count(*) from employee group by department having count(department) >5;


---   Calculate Average Salary by Department for Departments with More Than 3 Employees:
      select avg(salary),department from employee group by  department having count(*) > 3;

----   ify Locations with High Average Salaries:
select location,avg(salary) from employee group by location having avg(salary);

---  Find Job Titles with at Least 3 Employees:
select jobtitle,count(employeeID) as employee_count from employee group by jobtitle having count(employeeID) > 3;

select jobtitle from employee limit 3;

----   Calculate Total Salary Expenditure for Departments with Average Salaries Below $55,000:
select sum(salary) ,department from employee  group by department  having avg(salary) < 55000;


---  Count the Number of Employees Hired in Each Year:
select count(hiredate) from employee;

  select hiredate, count(*) from employee
   group by hiredate order by hiredate;


---   Identify Departments with No Employees Earning Over $70,000:

select count(employeeid),salary from employee group by employeeid having salary>70000; 



----   Calculate the Average Years of Service by Department for Departments with at Least 2 Employees:

select avg(hiredate),department from employee group by department having avg(hiredate) > 2;




---- Find locations with Only One Department:
select location from employee
group by location limit 1;


----- Identify Departments with the Highest Average Salary:
select avg(salary) ,department from employee group by department having avg(salary);
