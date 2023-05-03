// Write a program which accept two numbers and print their sum. 
#include <iostream>
int main(){

    int a, b;

    std::cout<< "Please enter first number: \n";
    std::cin >> a; 
    std::cout<< "Please enter second number: \n";
    std::cin >> b;
    std::cout << "The sum of " << a << " and " << b << " is: " << a + b << std::endl;

    return 0; 
}