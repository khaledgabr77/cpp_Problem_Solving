/*
Program to print Sequence4.
*
**
***
****
*****
*****
****
***
**
*
*/

#include <iostream>

int main(){

    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    for(int i = 0; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}