/*
.Write a function that receives two numbers as an argument
and display all prime numbers between these two numbers.
Call this function from main( )
*/
/*
For example: 13 is a prime number because it is only divisible by 1 and 13
but, 15 is not prime number because it is divisible by 1, 3, 5 and 15.
*/
#include <iostream>
#include <cmath>
bool is_prime(int number) { 
    if(number < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

void prime(int n, int k){

    for(int i = n; i <= k; i++){
        if(is_prime(i)){
        std::cout << i << std::endl;
        }
    }
    std::cout << std::endl;
}

int main(){
    int prime_number1, prime_number2;
    std::cout << " Enter first prime number" << std::endl;
    std::cin >> prime_number1;
    std::cout << " Enter second prime number" << std::endl;
    std::cin >> prime_number2;

    prime(prime_number1, prime_number2 );

    
    return 0;



}