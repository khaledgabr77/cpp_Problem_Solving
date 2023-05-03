/*
Write a program which input principal, rate and time from user
and calculate compound interest. 
You can use library function.
CI = P(1+R/100)T - P
*/

#include <iostream>
#include <cmath>
int main(){
    double P, R, T CI;
    std::cout<<"Enter principal: ";
    std::cin>>P;
    std::cout<<"Enter rate: ";
    std::cin>>R;
    std::cout<<"Enter time: ";
    std::cin>>T;
    CI = P * pow((1+R/100), T) - P;
    std::cout << "Compound Interest is : " << CI << std::endl;
    return 0;
}