// Write a program which accept principle, rate and time from user and print the simple interest.

#include <iostream>

int main(){
    double principle, rate, time;
    std::cout << "Enter principle: ";
    std::cin >> principle;
    std::cout << "Enter rate: ";
    std::cin >> rate;
    std::cout << "Enter time: ";
    std::cin >> time;
    std::cout << "Simple interest: " << principle * rate * time << std::endl;
    return 0;
}