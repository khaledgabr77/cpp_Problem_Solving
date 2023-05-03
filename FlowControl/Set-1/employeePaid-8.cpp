/*
In a company an employee is paid as under:
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input by the user
write a program to find his gross salary.
*/

#include <iostream>

int main(){

	float basic_salary, gross_salary, HRA, DA;
	cout<<"Enter basic salary of Employee : ";
	cin>>basic_salary;

	if (basic_salary<1500)
	{
		HRA=0.1*basic_salary;
		DA=0.9*basic_salary;
	}
	else
	{	
		HRA=500;
		DA=0.98*basic_salary;
	}

	gross_salary=basic_salary+HRA+DA;
	cout<<"Gross salary is : "<<gross_salary;

	
	return 0;   
}