/*
What is the output of following program?

int result = 4 + 5 * 6 + 2;
cout << result;
------
int a = 5 + 7 % 2;
cout << a;
*/
#include <iostream>

int main(){

    int result = 4 + 5 * 6 + 2;
    std::cout << result << std::endl;

    int a = 5 + 7 % 2;
    std::cout << a << std::endl;
    return 0;
}