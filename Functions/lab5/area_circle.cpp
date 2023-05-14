/*
Write a program to calculate area of a circle using functions.
*/

#include <iostream>
#include <math.h>


double area_of_circle(double radius){
    double area;
    area = (atan(1)*4) * (pow(radius,2));
    return area;
}
int main(){
    double radius;
    std::cout << "Enter the area of a circle" << std::endl;
    std::cin >> radius;
    if(radius > 0){
        std::cout << area_of_circle(radius) << std::endl;
    }
    
    else{
        std::cout << "Ivalid Radius" << std::endl;
    }
    return 0;



}