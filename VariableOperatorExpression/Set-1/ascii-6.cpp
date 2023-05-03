// Write a program which accepts a character and display its ASCII value

#include <iostream>

int main(){
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;
    std::cout << int(c) << std::endl;
    return 0;
}