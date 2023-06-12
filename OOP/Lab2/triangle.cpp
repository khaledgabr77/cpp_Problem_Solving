/*
Write C++ header file Triangle.h with class Triangle with data members and
member functions as per following class diagram. 
In Triangle.h file only implement get and set methods. (Consider right angle Triangle)

Triangle
---
- Height: double
- Base: double
---

<<constructor>> + Triangle(double, double)
<<destructor>> +~ Triangle()  # +~ stands for destructor
+ getHeight(): double
+ setHeight(double)
+ getBase(): double
+ setBase(double)
+ getArea(): double
+ getPerimeter(): double

Write C++ program to include header file Triangle.h in your program.
Implement constructor (with default value for height and width will be 0),
getArea() and getPerimeter() member functions of Class Triangle and
write menu driven program to get Height and Width details,
display measurement (Area and Perimeter) of Triangle object.
*/
#include <iostream>
#include <cmath>
#include "triangle.hpp"

Triangle::Triangle(double height_ = 0, double base_ = 0){}
void Triangle::setHeight(double height_){height = height_;}
double Triangle::getHeight() {return height;}

void Triangle::setBase(double base_){base = base_;}
double Triangle::getBase() {return base;}

double Triangle::getArea() {return (base * height) / 2;}
double Triangle::getPerimeter() {
    return (base+height) + (sqrt(pow(base,2)) + sqrt(pow(height, 2)));
}
int main(){
    Triangle tri(10, 5);
    tri.setBase(20);
    tri.setHeight(10);
    std::cout << "Area: " << tri.getArea() << std::endl;
    std::cout << "Perimeter: " << tri.getPerimeter() << std::endl;

    return 0;
}