// Write a program to calculate area of circle.
#include <iostream>


int main(){
    int radius;
    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    int area = 3.14 * radius * radius;
    std::cout << "Area of circle is: " << area << std::endl;
    return 0;
}