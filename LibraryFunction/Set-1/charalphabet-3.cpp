/*
 Write a program to check character entered is alphabet
digit or special character using library functions
*/

#include <iostream>
#include <cctype>
int mian(){
    char ch;
    std::cout << "Enter a character" << std::endl;
    std::cin >> ch;
    if(isalpha(ch)){
        cout << "Alpha" << std::endl;
    }
    else if(isdigit(ch)){
        cout << "Digit" << std::endl;
    }
    else{
        cout << "Special" << std::endl;
    }
    return 0;
}