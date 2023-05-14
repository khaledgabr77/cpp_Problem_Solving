/*
Write a program to swap two values using functions.
*/

#include<iostream>

void swap_numbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

}
int main(){
    
    int firstNumber, secondNumber;
    std:: cout << "Enter first number: " << std::endl;
    std::cin >> firstNumber;
    std:: cout << "Enter second number: " << std::endl;
    std::cin >> secondNumber;

    swap_numbers(firstNumber, secondNumber);
    std::cout << firstNumber << " " << secondNumber << std::endl;
    return 0;
}