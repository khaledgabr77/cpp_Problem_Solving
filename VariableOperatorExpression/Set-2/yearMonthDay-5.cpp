/*
Write a program which accepts days as integer and display total number of years, months and days in it.
for example :  If user input as 856 days the output should be 2 years 4 months 6 days.
*/ 
#include <iostream>

int main(){

    int days;
    std::cout<<"Enter days : ";
    std::cin>>days;

    int years = days/365;
    days = days%365;

    int months = days/30;
    days = days%30;

    int daysInYear = days;
    std::cout<<"Years : "<<years<<std::endl;
    std::cout<<"Months : "<<months<<std::endl;
    std::cout<<"Days in year : "<<daysInYear<<std::endl;

    return 0;
}