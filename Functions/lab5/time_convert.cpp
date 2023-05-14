/*
Write a program to convert time to minutes using functions. (input 3 variables namely hours, minutes and seconds. Convert everything into minutes.)
*/

#include <iostream>

void convert_time(int &hour, int &min, int &sec){

    hour = hour * 60;
    min = min * 1;
    sec = sec / 60;

}
int main(){

    int hours, minutes, seconds;
    std::cout << "Enter time by hour: " << std::endl;
    std::cin >> hours;
    std::cout << "Enter time by minute: " << std::endl;
    std::cin >> minutes;
    std::cout << "Enter time by seconds: " << std::endl;
    std::cin >> seconds;

    convert_time(hours, minutes, seconds);
    std::cout << hours << " " << minutes << " " << seconds << std::endl;
    return 0;

}