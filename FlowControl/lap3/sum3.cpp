/*
Program to display series and find sum of 1 + 3 + 5 + ... + n.
*/


#include <iostream>

int main(){
    
    int number, sum = 0;
    
    std::cout << "Number is: " << std::endl;
    std::cin>> number;
    for(int i = 1; i <= number; i+2){
        
        sum += i;

    }
    std::cout << sum << std::endl;
}