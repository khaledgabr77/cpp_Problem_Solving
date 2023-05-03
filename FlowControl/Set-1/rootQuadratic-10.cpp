/*
Write a program to find the roots of and quadratic equation of type
ax2+bx+c where a is not equal to zero.*/

#include<iostream>

int main(){

    float a,b,c,d,root1,root2;
	cout<<"Enter value of  a, b and c : ";
	cin>>a>>b>>c;

	d=b*b-4*a*c;

	if(d==0)
	{
		root1=(-b)/(2*a);
		root2=root1;
		cout<<"Roots are real & equal";
  	}
	else if(d>0)
	{
		root1=-(b+sqrt(d))/(2*a);
		root2=-(b-sqrt(d))/(2*a);
		cout<<"Roots are real & distinct";
	}
	else
	{
		root1=(-b)/(2*a);
		root2=sqrt(-d)/(2*a);
		cout<<"Roots are imaginary";
	}

	cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2;


	return 0;

}