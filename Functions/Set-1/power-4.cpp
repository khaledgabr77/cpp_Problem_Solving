/*
Raising a number to a power p is the same as multiplying n by itself p times.
Write a function called power that takes two arguments, a double value for n and an int value for p,
and return the result as double value. Use default argument of 2 for p,
so that if this argument is omitted the number will be squared.
Write the main function that gets value from the user to test power function.
*/
#include <iostream>

double power (double n, int p = 2){
    double res = 1;
    for(int i = 1; i <= p; i++){
        res *= n;
    }
    return res;
}

int main(){

    int num;
    double pow, result;
    std::cout << "Enter number" << std::endl;
    std::cin >> num;
    std::cout << "Enter power" << std::endl;
    std::cin >> pow;

    result = power(num, pow);
    std::cout << result << std::endl;
    return result;

}