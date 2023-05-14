/*
Program to input a number and then calculate sum of its digits.
Hint: let number = 562. Then you should print 5 + 6 + 2 = 13.
*/


#include <iostream>


int main(){

    int number, sum = 0;
    std::cout << "Enter number: " << std::endl;
    std::cin >> number;

    while(number != 0){

        sum += number % 10;
        std::cout << number << std::endl;

        number = number / 10;

        std::cout << number << std::endl;
    }
    std::cout << sum << std::endl;
    return 0;
}