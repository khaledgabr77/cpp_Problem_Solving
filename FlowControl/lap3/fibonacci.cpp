/*Program to print Fibonacci series up to 100.
Hint: Fibonacci Series is 1, 1, 2, 3, 5, 8, 13, 21, ....
*/
#include <iostream>


int main(){

    int a = 0, b = 1, sum = 0;

    std::cout <<"printting Fibonacci series: " << std::endl;

    while(b < 100){

        sum = a + b; // 1, 2
        a = b; // a = 1, b = 1
        b = sum; // b = 1, 2
        std::cout << sum << std::endl;

        if(b > 100)
        {
            break;
        }

    }

    std::cout << sum << std::endl;
    return  0;
}