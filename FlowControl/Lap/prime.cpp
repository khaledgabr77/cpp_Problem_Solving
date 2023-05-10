/*
Program to find whether given number is a prime number or not.
*/

#include <iostream>

int main(){

    int number;
    std::cout << "Enter number: " << std::endl;
    std::cin >> number;

    bool prime = true;

    for(int i =2; i < number/2; i++){
        if(number % i == 0){
            prime = false;
            break;
        }
    }
    if(prime){
        std::cout << number << " " << "number is prime " << std::endl;
    
    }
    else{
        std::cout << number << " " << "number is not prime" << std::endl;
    }
    return 0;
}