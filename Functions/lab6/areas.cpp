/*
1. Write a program to calculate area of following figures using function overloading:
Circle
Rectangle
Triangle
Square
(Hint: 1. create 4 functions with same name area. 2. Each function to calculate area of one figure.)

2. Write a program to calculate circumference of the following figures using function overloading:
Circle
Rectangle
Triangle
Square

3. Write a program using function overloading:
To find largest among three integers.
To find largest among three floating point numbers.

4. Convert function template for problem 3.
*/
/**********************************************************************************************************************************/
#include <iostream>
#include <cmath>

int largest(int x, int y, int z){
    if(x > y && x > z){
        return x;}
    else if(y > x && y > z){
        return y;}
    else{
        return z;
    }
}
float largest(float x, float y, float z){
    if(x > y && x > z){
        return x;}
    else if(y > x && y > z){
        return y;}
    else{
        return z;
    }
}
    

/***************************************************************************************************/
double circumference(double radius){
    double circumference1 = 2 * radius * M_PI; 
    return circumference1;

}
double circumference(double lenght, double width){
    double circumference2 = 2 * (lenght + width);
    return circumference2;
}
double circumference(double sideA, double sideB, double sideC){
    double circumference3 = sideA + sideB + sideC;
    return circumference3;
}
float circumference(float side){
    float circumference4 = 4 * side;
    return circumference4;
}
/***********************************************************************************************************************************************/
double area(double radius){
    double area1 = M_PI * radius * radius;
    return area1;
}
double area(double lenght, double width){
    double area2 = lenght * width;
    return area2;

}
double area(double sideA, double sideB, double sideC){
    // calculate area using Side Length
    double S = (sideA + sideB + sideC)/2;
    double area3 = sqrt(S * (S - sideA) * (S - sideB) * (S - sideC));
    return area3;
}
float area(float side){
    float area4 = side * side;
    return area4;
}

/************************************************************************************************************************************/
int main(){
    float num1, num2, num3;
    int fisrtNum, secondNum, thirdNum;

    double radius_;
    double lenght_, width_;
    double sideA_, sideB_, sideC_;   
    float side_;
    int choice;
/*******************************************************************************************************************************/
while(true){
    std::cout << "/t/t/t/tWelcome To Goemetry Calcuator/t/t/t/t" << std::endl;
    std::cout << " [1] Areas" << std::endl;
	std::cout << " [2] Circumferences" << std::endl;
    std::cout << " [3] Largest Number" << std::endl;
	std::cout << " [4] EXIT to MAIN MENU" << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> choice;

    if(choice == 1){
        std::cout << "/t/t/t/tWelcome To Goemetry Calcuator Areas: /t/t/t/t" << std::endl;
        std::cout << " [1] Circle" << std::endl;
        std::cout << " [2] Rectangle" << std::endl;
        std::cout << " [3] Triangle" << std::endl;
        std::cout << " [4] Square" << std::endl;
        std::cout << " [5] EXIT to MAIN MENU" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        if(choice == 1){
            std::cout << "Enter the radius of circle: " << std::endl;
            std::cin >> radius_;
            std::cout <<"Area of Circle: " << area(radius_) << std::endl;
        }
        else if(choice == 2){
            std::cout << "Enter the lenght of rectangle: " <<std::endl;
            std::cin >> lenght_;
            std::cout << "Enter the width of rectangle: " <<std::endl;
            std::cin >> width_;
            std::cout << "Area of Rectangle: " << area(lenght_, width_) << std::endl;
        }
        else if(choice == 3){
            std::cout << "Enter the first side of triangle: " <<std::endl;
            std::cin >> sideA_;
            std::cout << "Enter the second side of tringle: " <<std::endl;
            std::cin >> sideB_;
            std::cout << "Enter the third side of tringle: " <<std::endl;
            std::cin >> sideC_;
            std::cout << "Area of Triangle: " << area(sideA_, sideB_, sideC_) << std::endl;
        }
        else if(choice == 4){
            std::cout << "Enter the side of square: " << std::endl;
            std::cin >> side_;
            std::cout << area(side_) << std::endl;
        }
        else{std::cout << "Invalid choice" << std::endl;}
    }
/***************************************************************************************************************************************************/
    else if(choice == 2){
        std::cout << "/t/t/t/tWelcome To Goemetry Calcuator Circumference: /t/t/t/t" << std::endl;
        std::cout << " [1] Circle" << std::endl;
        std::cout << " [2] Rectangle" << std::endl;
        std::cout << " [3] Triangle" << std::endl;
        std::cout << " [4] Square" << std::endl;
        std::cout << " [5] EXIT to MAIN MENU" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        if(choice == 1){
            std::cout << "Enter the radius of circle: " << std::endl;
            std::cin >> radius_;
            std::cout << "Circumference of the circle:" << circumference(radius_) << std::endl;        }
        else if(choice == 2){
            std::cout << "Enter the lenght of rectangle: " <<std::endl;
            std::cin >> lenght_;
            std::cout << "Enter the width of rectangle: " <<std::endl;
            std::cin >> width_;
            std::cout << "Circumference of the rectangle: " << circumference(lenght_, width_) << std::endl;;
            
        }
        else if(choice == 3){
            std::cout << "Enter the first side of triangle: " <<std::endl;
            std::cin >> sideA_;
            std::cout << "Enter the second side of tringle: " <<std::endl;
            std::cin >> sideB_;
            std::cout << "Enter the third side of tringle: " <<std::endl;
            std::cin >> sideC_;
            std::cout << "Circumference of the triangle: " << circumference(sideA_, sideB_, sideC_) << std::endl;
        }
        else if(choice == 4){
            std::cout << "Enter the side of square: " << std::endl;
            std::cin >> side_;
            std::cout << "Circumference of the square: " << circumference(side_) << std::endl;
        }
        else {
            std::cout << "Invalid choice." << std::endl;
        } 
    }
    else if(choice == 3){
        std::cout << "/t/t/t/tWelcome To calcuating largest number: /t/t/t/t" << std::endl;
        std::cout << " [1] find largest among three integers" << std::endl;
        std::cout << " [2] To find largest among three floating point numbers" << std::endl;
   
        std::cout << " [3] EXIT to MAIN MENU" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        if(choice == 1){
            std::cout << "Enter first number: " << std::endl;
            std::cin >> fisrtNum;
            std::cout << "Enter second number: " << std::endl;
            std::cin >> secondNum;
            std::cout << "Enter third number: " << std::endl;
            std::cin >> thirdNum;

            std::cout << "the largest number is: " << largest(fisrtNum, secondNum, thirdNum) << std::endl;

        }
    
        if(choice == 2){
            std::cout << "Enter first number: " << std::endl;
            std::cin >> num1;
            std::cout << "Enter second number: " << std::endl;
            std::cin >> num2;
            std::cout << "Enter third number: " << std::endl;
            std::cin >> num3;

            std::cout << "the largest number is: " << largest(num1, num2, num3) << std::endl;

        }
        else {
            std::cout << "Invalid choice." << std::endl;
        } 

    }
}
    return 0;
}