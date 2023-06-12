/*
Write a program using function which accept two integers as an argument and return its sum.
Call this function from main( ) 
and print the results in main( ). 
 */
#include <iostream>

int sum( int arg1, int arg2 ){
    return arg1 + arg2;
}

int main(){
    //int x;
    //x = sum( 1, 1 );
    int x,y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    int s = sum( x, y );
    std::cout << s << std::endl;
    return 0;
}