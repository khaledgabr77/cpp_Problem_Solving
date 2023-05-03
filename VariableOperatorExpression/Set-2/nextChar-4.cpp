// Write a program which accepts a character and display its next character.

#include <iostream>


int main()
{

    char ch,rs;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    rs = int(ch+1);
    // ch++;
    std::cout << char(rs) << std::endl;

    return 0;
}