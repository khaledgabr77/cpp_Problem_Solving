/*
.Write a program to check whether a triangle is valid or not
 when the three angles of the triangle are entered by the user
A triangle is valid if the sum of all the three angles is equal to
180 degrees.
*/

#include <iostream>

int main(){
    std::cout << "Enter the three angles of the triangle: ";
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a + b + c == 180){
        std::cout << "The triangle is valid" << std::endl;
    }
    else{
        std::cout << "The triangle is not valid" << std::endl;
    }
    return 0;
}