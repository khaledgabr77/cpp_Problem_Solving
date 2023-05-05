/*
 Write a function to calculate the factorial value of any integer 
as an argument. Call this function from main( ) 
and print the results in main( ).
*/

#include <iostream>

int fact(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;  
}

int main(){
    int factorial;
    std::cout<<"Enter Number" << std::endl;
    // 5! = 1 * 2 * 3 * 4 * 5 = 120
    std::cin >> factorial;

    int res = fact(factorial);

    std::cout<< "factorial = " << res << std::endl;


}