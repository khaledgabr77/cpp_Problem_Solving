/*
Program to print stars Sequence2.
    *
   ** 
  ***
 ****
*****
*/

#include <iostream>

int main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= 1; j--){
            if(i >= j){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
            }
            std::cout << std::endl;
        }
    
    return 0;
}