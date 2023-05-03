//  Write a program to check whether the given number is positive or negative (using ? : ternary operator )

#include <iostream>

int main(){

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    num > 0 ? std::cout << "Number Positive \n": std::cout << "Number Negative \n";
   
    return 0;
    }