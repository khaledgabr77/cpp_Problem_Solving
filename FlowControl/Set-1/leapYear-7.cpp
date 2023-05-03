/*
Any year is input by the user. Write a program to determine
whether the year is a leap year or not. 
*/

#include <iostream>

int main(){
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if(year % 4 == 0 && year % 100!= 0 || year % 400 == 0){
        std::cout << "It is a leap year." << std::endl;
    }
    else{
        std::cout << "It is not a leap year." << std::endl;
    }

    return 0;
}