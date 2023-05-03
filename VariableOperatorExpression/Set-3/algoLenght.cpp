/*
Write a program that takes length as input in feet and inches. The program should then convert the lengths in centimeters and display it on screen. Assume that the given lengths in feet and inches are integers.

Based on the problem, you need to design an algorithm as follows:
1. Get the length in feet and inches.
2. Convert the length into total inches.
3. Convert total inches into centimeters.
4. Output centimeters.

To calculate the equivalent length in centimeters, you need to multiply the total inches by 2.54. Instead of using the value 2.54 directly in the program, you will declare this value as a named constant. Similarly, to find the total inches, you need to multiply the feet by 12 and add the inches. Instead of using 12 directly in the program, you will also declare this value as a named constant. Using a named constant makes it easier to modify the program later.

To write the complete length conversion program, follow these steps:
1. Begin the program with comments for documentation.
2. Include header files, if any are used in the program.
3. Declare named constants, if any.
4. Write the definition of the function main. 
*/

#include <iostream>	//Header file
using namespace std;

const double CENTIMETERS_PER_INCH = 2.54;	//Named constants
const int INCHES_PER_FOOT = 12;			//Named constants


int main ()
{
	int feet, inches;
	int totalInches;
	double centimeter;
	cout << "Enter two integers, one for feet and one for inches: "; 
	cin >> feet >> inches;
	cout << endl;
	cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches. " << endl; 
	totalInches = INCHES_PER_FOOT * feet + inches;
	cout << "The total number of inches = " << totalInches << endl;
	centimeter = CENTIMETERS_PER_INCH * totalInches;
	cout << "The number of centimeters = " << centimeter << endl;
	return 0;
}



