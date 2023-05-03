// Write a program to swap the values of two variables.

#include <iostream>

int main(){
    int a, b, temp;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    temp = a;
    a = b;
    b = temp;
    std::cout << "The value of a after swapping is: " << a << std::endl;
    std::cout << "The value of b after swapping is: " << b << std::endl;
    return 0;
}