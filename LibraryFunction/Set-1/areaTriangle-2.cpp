/*
Write a program to compute area of triangle.
Sides are input by user.
Area = sqrt(s*(s-a)*(s-b)*(s-c))
where s=(a+b+c)/2
*/

#include <iostream>
#include <cmath>
int main (){
    double a,b,c,s;
    std::cout<<"Enter sides of triangle: ";
    std::cin>>a>>b>>c;
    s=(a+b+c)/2;
    std::cout<<"Area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c))<<std::endl;
    return 0;
}