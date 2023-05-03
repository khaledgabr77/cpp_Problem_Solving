/*
Write a program which display a number between 10 to 100 randomly. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num;
    srand(time(0));
    std::cout << "Enter a number between 10 to 100: ";
    std::cin >> num;
    num = rand() % 91 + 10;
    std::cout << "The Random number is " << num << std::endl;

    return 0;
}
