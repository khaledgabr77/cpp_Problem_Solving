// Write a program to swap value of two variables without using third variable

#include <iostream>

int main(){

    int a,b;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;
    std::swap(a,b);
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;

    return 0;
}

/*
	int a,b;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping numbers are : ";
	cout<<a<<" "<<b;
	
	
	return 0;
*/