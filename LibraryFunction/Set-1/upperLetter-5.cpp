/*
Write a program which accept a letter and display it in uppercase letter.
*/

#include <iostream>
#include <cctype>
int main(){

    char ch;
    std::cout<<"Enter a letter: ";
    std::cin>>ch;
    ch = toupper(ch);
    std::cout<<ch << std::endl;
    return 0;
}