// Write a program which accept temperature in Farenheit and print it in centigrade.

#include <iostream>


int main()
{
    float temp;
    std::cout << "Enter temperature in Farenheit: ";
    std::cin >> temp;
    std::cout << "Temperature in centigrade: " << (temp * 1.8) << std::endl;
    return 0;
}