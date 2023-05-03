/*
The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
*/


#include<iostream>
using namespace std;

int main()
{
	int sub1,sub2,sub3,sub4,sub5,percentage;
	cout<<"Enter marks of five subjects : ";
	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	percentage=(sub1+sub2+sub3+sub4+sub5)/5;

	if(percentage>=60)
		cout<<"Ist division";
	else if(percentage>=50)
		cout<<"IInd division";
	else if(percentage>=40)
		cout<<"IIIrd division";
	else
		cout<<"Fail" ;


	return 0;
}