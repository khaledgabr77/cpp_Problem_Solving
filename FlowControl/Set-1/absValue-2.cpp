// Find the absolute value of a number entered by the user.

#include <iostream>


int main (){
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    std::cout << "The absolute value of " << num << " is " << std::abs(num) << std::endl;
    return 0;
}

/*
	int a;
	cout<<"Enter any number:";
	cin>>a;

	if(a>0)
		cout<<"The absolute value of number is:"<<a;
	else
		cout<<"The absolute value of number is:"<<-(a);


	return 0;
    */