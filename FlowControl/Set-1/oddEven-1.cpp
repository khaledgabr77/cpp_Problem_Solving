/*
Write a program to find out whether it is 
an odd number or even number.
*/

#include <iostream>

int main(){

    int num;
    std::cin >> num;
    if(num % 2 == 0){
        std::cout << "Even number" << std::endl;
    }
    else{
        std::cout << "Odd number" << std::endl;
    }
    return 0;
}