/*
Write a program which input three numbers and display 
the largest number using ternary operator.
*/

#include <iostream>

int main(){

    int a,b,c;

    std::cout<<"Enter three numbers: ";
    std::cin>>a>>b>>c;
    std::cout<<"The largest number is: "<<(a>b && a>c?a:b>c?b:c);

    return 0;
}