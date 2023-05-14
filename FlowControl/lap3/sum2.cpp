/*
Program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n.
*/


#include <iostream>


int main(){

    int num;
    float sum = 0;
    std::cout << "Enter the number: " <<  std::endl;
    std::cin >> num;

    for(int i = 1; i < num; i++){
        sum += 1/i ;
    }
    std::cout << " Sum of series: " << sum << std::endl;

    return 0;


}