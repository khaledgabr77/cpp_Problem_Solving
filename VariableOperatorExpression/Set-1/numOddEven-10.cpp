// Write a program to check whether the given number is even or odd (using ? : ternary operator )

#include <iostream>

int main(){

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    num % 2 == 0 ? std::cout << "even\n" : std::cout << "odd" << std::endl;

    return 0;
}